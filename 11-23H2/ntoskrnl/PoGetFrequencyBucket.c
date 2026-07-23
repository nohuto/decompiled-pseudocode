/*
 * XREFs of PoGetFrequencyBucket @ 0x140249CF0
 * Callers:
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KiEndDebugAccumulation @ 0x14020E5F0 (KiEndDebugAccumulation.c)
 *     KiAccumulateCycleStats @ 0x14020E7C0 (KiAccumulateCycleStats.c)
 *     KiAccumulateProcessorCycleStats @ 0x14020E890 (KiAccumulateProcessorCycleStats.c)
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KiRetireDpcList @ 0x140245AC0 (KiRetireDpcList.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     KiSetQuantumTargetThread @ 0x1402B2D80 (KiSetQuantumTargetThread.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2FD0 (KiStartThreadCycleAccumulation.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x1402BF340 (KeRemovePriQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 result; // rax
  unsigned __int16 *v5; // rdx

  v1 = *(_QWORD *)(a1 + 33968);
  v2 = *(_QWORD *)(a1 + 33976);
  if ( v1 && v2 )
  {
    if ( *(_BYTE *)(v2 + 100) )
    {
      v3 = *(_DWORD *)(v2 + 116);
    }
    else
    {
      v3 = *(_DWORD *)(v2 + 72);
      if ( v3 >= *(_DWORD *)(v1 + 516) )
        v3 = *(_DWORD *)(v1 + 516);
    }
  }
  else
  {
    v3 = 100;
  }
  result = 0LL;
  v5 = (unsigned __int16 *)(a1 + 34154);
  do
  {
    if ( v3 <= *v5 )
      break;
    result = (unsigned int)(result + 1);
    ++v5;
  }
  while ( (unsigned int)result < 3 );
  return result;
}
