/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x180068728
 * Callers:
 *     RtlpValidFilterAclSubjectContext @ 0x1800134B4 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x180068F60 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall RtlpValidTrustSubjectContext(void *a1, void *a2, __int64 a3, NTSTATUS *a4)
{
  BOOLEAN result; // al
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  DominatesTrust = 0;
  if ( !a1 || (*a4 = RtlSidDominatesForTrust(a1, a2, &DominatesTrust), (result = DominatesTrust) == 0) )
    *a4 = -1073741790;
  return result;
}
