/*
 * XREFs of RtlCreateAcl @ 0x1800184E0
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019D0 (RtlDefaultNpAcl.c)
 *     RtlpCombineAcls @ 0x180012E6C (RtlpCombineAcls.c)
 *     RtlCheckTokenMembershipEx @ 0x180014350 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x180018114 (RtlpInheritAcl2.c)
 *     RtlCheckTokenCapability @ 0x180018530 (RtlCheckTokenCapability.c)
 *     RtlCreateAndSetSD @ 0x180068770 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18006C5B8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpComputeMergedAcl2 @ 0x18008C740 (RtlpComputeMergedAcl2.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F3290 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800F4038 (RtlpCreateServerAcl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAcl(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a2 < 8 )
    return 3221225507LL;
  if ( (unsigned int)(a3 - 2) > 2 || a2 > 0xFFFC )
    return 3221225485LL;
  result = 0LL;
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = 0;
  *(_WORD *)(a1 + 2) = a2 & 0xFFFC;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
