/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x1407E8840
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406B3730 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14036BBC4 (SeTokenSetNoChildProcessRestricted.c)
 */

signed __int64 __fastcall PspSetNoChildProcessRestrictedPolicy(__int64 a1, int a2)
{
  ULONG_PTR v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetNoChildProcessRestricted(v4, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v4, 0x79517350u);
}
