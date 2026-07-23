/*
 * XREFs of PspInitializeProcessExecutionState @ 0x140411730
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     PspComputeExecutionState @ 0x1406A70DC (PspComputeExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspInitializeProcessExecutionState(_BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  return result;
}
