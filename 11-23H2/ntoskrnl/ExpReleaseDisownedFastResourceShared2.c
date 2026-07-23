/*
 * XREFs of ExpReleaseDisownedFastResourceShared2 @ 0x14041655C
 * Callers:
 *     ExReleaseDisownedFastResource2 @ 0x140414130 (ExReleaseDisownedFastResource2.c)
 *     ExReleaseDisownedFastResourceShared2 @ 0x140414328 (ExReleaseDisownedFastResourceShared2.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14031A8E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14032FDD0 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAbCrossThreadRelease @ 0x1403CAEE8 (KeAbCrossThreadRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpCommitWakeFastResource @ 0x14041568C (ExpCommitWakeFastResource.c)
 *     ExpPrepareToWakeFastResourceShared @ 0x140416264 (ExpPrepareToWakeFastResourceShared.c)
 *     ExpRemoveEntryListAndClear2 @ 0x140416B00 (ExpRemoveEntryListAndClear2.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared2(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  LONG_PTR result; // rax
  KSPIN_LOCK *v4; // rsi
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v19; // [rsp+98h] [rbp+48h] BYREF
  int v20; // [rsp+A0h] [rbp+50h] BYREF
  volatile signed __int32 *v21; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  result = 0LL;
  v21 = 0LL;
  v4 = (KSPIN_LOCK *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
  v17 = 0LL;
  v20 = 0;
  v19 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(int *)(a2 + 32) < 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v9 = 4;
      if ( CurrentIrql != 2 )
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 48), &LockHandle);
    ExpPrepareToWakeFastResourceShared((signed __int64 *)a1, (__int64 *)&v21, &v17, &v20, &v19);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KxAcquireSpinLock(v4 + 209);
    ExpRemoveEntryListAndClear2(a2);
    *(_QWORD *)(a2 + 24) = 0LL;
    KeReleaseSpinLockFromDpcLevel(v4 + 209);
    ExpCommitWakeFastResource(&v21, v10, v11, v19);
    if ( (_DWORD)KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( *(_BYTE *)(a2 + 36) )
    {
      KeAbCrossThreadRelease(a1, *(unsigned __int8 *)(a2 + 36), (__int64)v4);
      *(_BYTE *)(a2 + 36) = 0;
    }
    result = ObfDereferenceObject(v4);
  }
  v16 = (*(_DWORD *)(a2 + 32))-- == 1;
  if ( v16 )
    *(_QWORD *)(a2 + 16) = v4;
  return result;
}
