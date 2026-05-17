/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x180068728
 * Callers:
 *     RtlpValidFilterAclSubjectContext @ 0x1800134B4 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x180068F60 (RtlSidDominatesForTrust.c)
 */

char __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char result; // al
  char v6; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v6 = 0;
  if ( !a1 || (*a4 = RtlSidDominatesForTrust(a1, a2, &v6), (result = v6) == 0) )
    *a4 = -1073741790;
  return result;
}
