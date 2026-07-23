/*
 * XREFs of PspGetRedirectionTrustPolicy @ 0x1407DE378
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14036565C (SeTokenGetRedirectionTrustPolicy.c)
 */

__int64 __fastcall PspGetRedirectionTrustPolicy(__int64 a1)
{
  ULONG_PTR v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0;
  v2 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenGetRedirectionTrustPolicy(v2, &v4, &v5);
  ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v2, 0x79517350u);
  if ( v4 )
    return 1LL;
  else
    return v5 ? 2 : 0;
}
