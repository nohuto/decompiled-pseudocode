/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x14025FC40
 * Callers:
 *     DifExReleaseResourceForThreadLiteWrapper @ 0x1405D9C70 (DifExReleaseResourceForThreadLiteWrapper.c)
 *     CcUnpinDataForThread @ 0x140936CC0 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x1402600E0 (ExpFindCurrentThread.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     ExpPrepareToWakeResourceShared @ 0x1402602C0 (ExpPrepareToWakeResourceShared.c)
 *     ExpFreeOwnerEntry @ 0x140260A40 (ExpFreeOwnerEntry.c)
 *     ExpCommitWakeResourceShared @ 0x140260B10 (ExpCommitWakeResourceShared.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpFastResourceLegacyRelease @ 0x1403CA140 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogExecutiveResourceRelease @ 0x1406008E4 (PerfLogExecutiveResourceRelease.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  USHORT Flag; // cx
  __int16 v5; // ax
  unsigned __int8 v6; // al
  struct _KTHREAD *v7; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  KSPIN_LOCK *p_SpinLock; // r9
  __int64 v11; // r8
  _DWORD *SchedulerAssist; // r11
  __int64 v13; // rdx
  __int64 v14; // rdx
  struct _KTHREAD *v15; // r8
  USHORT v16; // cx
  int v17; // eax
  int v18; // r15d
  __int64 v19; // rax
  unsigned int v20; // esi
  ULONG ContentionCount; // r13d
  unsigned int v22; // r14d
  unsigned int v23; // esi
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  ERESOURCE_THREAD v30; // rsi
  int WaiterPriority; // r12d
  ULONG v32; // eax
  _DWORD *v33; // r8
  unsigned __int64 v34; // r14
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v37; // eax
  __int64 v38; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v39[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v40; // [rsp+48h] [rbp-18h]
  int v41; // [rsp+A0h] [rbp+40h] BYREF
  ERESOURCE_THREAD v42; // [rsp+A8h] [rbp+48h] BYREF

  Flag = Resource->Flag;
  v5 = Flag & 0x41;
  if ( !FeatureFastResource2 )
  {
    if ( v5 != 1 )
    {
      if ( (Flag & 1) == 0 )
        goto LABEL_18;
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > 2u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
      if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
        goto LABEL_9;
LABEL_68:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
LABEL_66:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( v5 == 1 )
    goto LABEL_66;
  if ( (Flag & 1) == 0 )
    goto LABEL_18;
  v6 = KeGetCurrentIrql();
  v7 = KeGetCurrentThread();
  if ( v6 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v6, 2uLL, 0LL);
  if ( !v6 && (v7->MiscFlags & 0x400) == 0 && !v7->WaitBlock[3].SpareLong )
    goto LABEL_68;
  if ( (Flag & 1) != 0 )
  {
LABEL_9:
    if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
      KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
    ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
    return;
  }
LABEL_18:
  v40 = 0LL;
  p_SpinLock = &Resource->SpinLock;
  v39[0] = 0LL;
  v39[1] = &Resource->SpinLock;
  v11 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v11 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)v11 == 2 )
      LODWORD(v13) = 4;
    else
      v13 = (-1LL << ((unsigned __int8)v11 + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  LOBYTE(v40) = v11;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v39, &Resource->SpinLock);
  }
  else
  {
    v14 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)v39);
    if ( v14 )
      KxWaitForLockOwnerShip(v39, v14, v11, p_SpinLock);
  }
  v15 = KeGetCurrentThread();
  v16 = Resource->Flag;
  if ( ((v16 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (ResourceThreadId & 3) != 3
    && (struct _KTHREAD *)ResourceThreadId != v15 )
  {
    KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v15, ResourceThreadId, 0LL);
  }
  if ( (v16 & 0x80u) == 0 )
  {
    v17 = 0;
    v18 = DWORD1(PerfGlobalGroupMask) & 0x20000;
    v38 = 0LL;
    v42 = 0LL;
    v41 = 0;
    if ( (ResourceThreadId & 3) == 0 )
      v17 = *(unsigned __int8 *)(ResourceThreadId + 1120);
    v19 = ExpFindCurrentThread((_DWORD)Resource, ResourceThreadId, (unsigned int)v39, 0, 0, v17);
    if ( !v19 )
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, ResourceThreadId, (ULONG_PTR)Resource->OwnerTable, 2uLL);
    v20 = *(_DWORD *)(v19 + 8) & 7 | (8 * (*(_DWORD *)(v19 + 8) >> 3) - 8);
    *(_DWORD *)(v19 + 8) = v20;
    if ( v20 < 8 )
    {
      ExpFreeOwnerEntry(v19);
      ContentionCount = Resource->ContentionCount;
      ExpPrepareToWakeResourceShared(Resource, &v38, &v42, &v41);
      if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
        Resource->Flag &= 0xF9u;
      v30 = v42;
      WaiterPriority = Resource->WaiterPriority;
      if ( v42 )
      {
        v32 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = v42;
        Resource->OwnerEntry.TableSize = v32 | 8;
      }
      KxReleaseQueuedSpinLock(v39);
      v34 = (unsigned __int8)v40;
      if ( (_DWORD)KiIrqlFlags )
      {
        v35 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v35 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v33 = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
          v29 = (v37 & v33[5]) == 0;
          v33[5] &= v37;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v30 = v42;
        }
      }
      __writecr8(v34);
      ExpCommitWakeResourceShared(1, (unsigned int)&v38, (_DWORD)v33, WaiterPriority, v30 != 0);
      v22 = 65602;
      v23 = 0;
    }
    else
    {
      ContentionCount = Resource->ContentionCount;
      v22 = 65618;
      v23 = v20 >> 3;
      KxReleaseQueuedSpinLock(v39);
      v24 = (unsigned __int8)v40;
      if ( (_DWORD)KiIrqlFlags )
      {
        v25 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v25 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
          v29 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      __writecr8(v24);
    }
    __incgsdword(0x8A70u);
    if ( v18 )
      PerfLogExecutiveResourceRelease(v22, Resource, v23, ContentionCount);
  }
  else
  {
    ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
  }
}
