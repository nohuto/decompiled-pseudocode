/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x1405A7DB4
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1405A7D50 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExInitializePushLock @ 0x140223590 (ExInitializePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgpInsertDebugPrintCallback(unsigned __int64 a1)
{
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  struct _EX_RUNDOWN_REF **v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf

  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(64LL, 40LL, 1648583236LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  ExInitializePushLock(Pool2 + 1);
  LODWORD(v3->Count) = 0;
  v3[2].Count = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v7) = 4096;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v7;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
  v8 = (struct _EX_RUNDOWN_REF **)off_140C04298;
  v9 = v3 + 3;
  if ( *off_140C04298 != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    __fastfail(3u);
  v9->Count = (unsigned __int64)&RtlpDebugPrintCallbackList;
  v9[1].Count = (unsigned __int64)v8;
  *v8 = v9;
  off_140C04298 = (_UNKNOWN **)v9;
  RtlpDebugPrintCallbacksActive = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
