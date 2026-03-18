/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x1402B3240
 * Callers:
 *     KiAddThreadToReadyQueue @ 0x1402348E0 (KiAddThreadToReadyQueue.c)
 *     KiDeferredReadySingleThread @ 0x14023A2D0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402425A0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KiDirectSwitchThread @ 0x1402B18A0 (KiDirectSwitchThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402B3000 (KiEvaluateGroupSchedulingPreemption.c)
 *     KeAccumulateTicks @ 0x1402C7B10 (KeAccumulateTicks.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307584 (KiDeferGroupSchedulingPreemption.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14030897C (KiMoveScbThreadsToNewReadylist.c)
 * Callees:
 *     KiCheckForMaxOverQuotaScb @ 0x1403090BC (KiCheckForMaxOverQuotaScb.c)
 */

__int64 __fastcall KiGetThreadEffectiveRankNonZero(__int64 a1, __int64 a2, char a3, bool *a4)
{
  bool v5; // bl
  unsigned int v6; // edx
  int v7; // r11d
  __int64 v8; // r10

  v5 = a4 && *(_QWORD *)(a2 + 120);
  v6 = 0;
  v7 = 0;
  if ( *(char *)(a1 + 195) < 16
    && (*(_DWORD *)(a1 + 120) & 0x200) == 0
    && (!a3 || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1) )
  {
    if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(a2, 0LL) )
    {
      v6 = -1;
    }
    else
    {
      do
      {
        v6 += *(_DWORD *)(v8 + 116);
        if ( v5 )
        {
          v7 += **(_DWORD **)(v8 + 120);
        }
        else if ( v6 )
        {
          break;
        }
        v8 = *(_QWORD *)(v8 + 408);
      }
      while ( v8 );
    }
  }
  if ( a4 )
    *a4 = v7 != 0;
  return v6;
}
