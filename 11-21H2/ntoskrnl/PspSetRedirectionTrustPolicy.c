/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x1406DD598
 * Callers:
 *     PspApplyMitigationOptions @ 0x14070E104 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     SeTokenSetRedirectionTrustPolicy @ 0x1402557A4 (SeTokenSetRedirectionTrustPolicy.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 */

__int64 __fastcall PspSetRedirectionTrustPolicy(__int64 a1, int a2)
{
  unsigned __int64 v4; // rbx

  v4 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenSetRedirectionTrustPolicy(v4, a2 == 2);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v4, 0x79517350u);
}
