/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x140220DF0
 * Callers:
 *     DifExReleaseResourceForThreadLiteWrapper @ 0x140609610 (DifExReleaseResourceForThreadLiteWrapper.c)
 *     CcUnpinDataForThread @ 0x14090BB90 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     ExpFastResourceLegacyRelease @ 0x14039CA48 (ExpFastResourceLegacyRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  USHORT Flag; // cx
  unsigned __int8 v5; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // rdx
  struct _KTHREAD *v8; // r8
  USHORT v9; // cx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  int v13; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
      KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
    ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
  }
  else
  {
    v15 = 0LL;
    v14[0] = 0LL;
    v14[1] = &Resource->SpinLock;
    v5 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (v5 + 1)) & 4;
    }
    LOBYTE(v15) = v5;
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v7[6];
        v7[6] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v14, &Resource->SpinLock);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)v14) )
    {
      KxWaitForLockOwnerShip(v14);
    }
    v8 = KeGetCurrentThread();
    v9 = Resource->Flag;
    if ( ((v9 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (ResourceThreadId & 3) != 3
      && (struct _KTHREAD *)ResourceThreadId != v8 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v8, ResourceThreadId, 0LL);
    }
    if ( (v9 & 0x80u) != 0 )
      ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
    else
      ExpReleaseResourceSharedForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
  }
}
