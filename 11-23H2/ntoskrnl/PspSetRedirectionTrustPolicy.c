/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x1407DD7F4
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406B3730 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x140365338 (SeTokenSetRedirectionTrustPolicy.c)
 */

signed __int64 __fastcall PspSetRedirectionTrustPolicy(__int64 a1, int a2)
{
  ULONG_PTR v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetRedirectionTrustPolicy(v4, a2 == 2);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v4, 0x79517350u);
}
