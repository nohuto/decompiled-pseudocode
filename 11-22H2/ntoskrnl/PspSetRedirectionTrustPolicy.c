/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x1407DDAA4
 * Callers:
 *     PspApplyMitigationOptions @ 0x1406B3700 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x140364B48 (SeTokenSetRedirectionTrustPolicy.c)
 */

signed __int64 __fastcall PspSetRedirectionTrustPolicy(__int64 a1, int a2)
{
  ULONG_PTR v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetRedirectionTrustPolicy(v4, a2 == 2);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v4, 0x79517350u);
}
