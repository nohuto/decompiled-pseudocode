/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x1407DD524
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406B3700 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402329C0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297C80 (ObFastDereferenceObject.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x140365198 (SeTokenSetRedirectionTrustPolicy.c)
 */

signed __int64 __fastcall PspSetRedirectionTrustPolicy(__int64 a1, int a2)
{
  ULONG_PTR v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetRedirectionTrustPolicy(v4, a2 == 2);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v4, 0x79517350u);
}
