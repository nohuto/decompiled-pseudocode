/*
 * XREFs of PsApplyDeepFreezeOptimizations @ 0x14067ED7C
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406A6C04 (PspChangeProcessExecutionState.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14036FBA0 (PsGetProcessSessionIdEx.c)
 *     PsInvokeWin32Callout @ 0x1406AF880 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PsApplyDeepFreezeOptimizations(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  int ProcessSessionId; // [rsp+38h] [rbp+10h] BYREF

  result = *a2;
  if ( (result & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 1288) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      return PsInvokeWin32Callout(44LL, a1, 0LL, &ProcessSessionId);
    }
  }
  return result;
}
