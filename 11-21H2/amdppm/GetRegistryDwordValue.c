/*
 * XREFs of GetRegistryDwordValue @ 0x1C00203E4
 * Callers:
 *     GetRegistryQwordValue @ 0x1C0020488 (GetRegistryQwordValue.c)
 *     ProcLibTraceSummary2 @ 0x1C0021A84 (ProcLibTraceSummary2.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00316E0 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C00319E4 (InitPerfStatesInternal.c)
 *     ProcLibGlobalInit @ 0x1C003D384 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C0020408 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
