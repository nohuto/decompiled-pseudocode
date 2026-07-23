/*
 * XREFs of PspRequestProcessExecutionState @ 0x1406A70B8
 * Callers:
 *     PspSetProcessFreezeStateCallback @ 0x14036A850 (PspSetProcessFreezeStateCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1406A6FC4 (PspApplyJobChainLimitsToProcess.c)
 *     PsSwapProcessWorkingSet @ 0x1409AE8AC (PsSwapProcessWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRequestProcessExecutionState(__int64 a1, char a2, char a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2172);
  if ( (result & 1) != 0 && (a3 & 1) == 0 )
    a2 &= ~2u;
  *(_BYTE *)(a1 + 2935) = a2;
  return result;
}
