/*
 * XREFs of KxFlushMultipleTb @ 0x14038E914
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x14038E834 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402C0280 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiSendRequestEx @ 0x1402EB5F0 (KiIpiSendRequestEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxFlushMultipleTb(unsigned int a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  __int64 p_StaticAffinity; // rsi
  int v8; // edx
  __int64 v9; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  _KPROCESS *Process; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  signed __int32 v19[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v20; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v20 = a2;
  *((_QWORD *)&v20 + 1) = __PAIR64__(a3, a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v12) = 4096;
    else
      v12 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v12;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a4 )
  {
    p_StaticAffinity = 0LL;
    v8 = 1;
  }
  else
  {
    _InterlockedOr(v19, 0);
    p_StaticAffinity = (__int64)&CurrentPrcb->StaticAffinity;
    Process = CurrentPrcb->CurrentThread->ApcState.Process;
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count = 2097153;
    memset(
      &CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8,
      0,
      sizeof(CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8));
    KiCopyAffinityEx(
      (__int64)&CurrentPrcb->StaticAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      &Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count, CurrentPrcb->Number);
    v8 = 0;
  }
  v9 = 2147483652LL;
  if ( a4 != 1 )
    v9 = 4LL;
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    v8,
    p_StaticAffinity,
    &v20,
    v9,
    (void (__fastcall *)(__int64))KiFlushRangeWorker,
    (__int64)&v20);
  if ( (_DWORD)KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
