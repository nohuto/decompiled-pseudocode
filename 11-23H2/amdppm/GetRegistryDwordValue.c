/*
 * XREFs of GetRegistryDwordValue @ 0x1C0020F74
 * Callers:
 *     GetRegistryQwordValue @ 0x1C0021018 (GetRegistryQwordValue.c)
 *     ProcLibTraceSummary2 @ 0x1C00226CC (ProcLibTraceSummary2.c)
 *     InitCpcStatesInternal @ 0x1C0031174 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0032654 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003295C (InitPerfStatesInternal.c)
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C0020F98 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
