/*
 * XREFs of RtlCreateAcl @ 0x1800186F0
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019A0 (RtlDefaultNpAcl.c)
 *     RtlpCombineAcls @ 0x18001307C (RtlpCombineAcls.c)
 *     RtlCheckTokenMembershipEx @ 0x180014560 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x180018324 (RtlpInheritAcl2.c)
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 *     RtlCreateAndSetSD @ 0x180068790 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18006C5B8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpComputeMergedAcl2 @ 0x18008BF40 (RtlpComputeMergedAcl2.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F1E80 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800F2C28 (RtlpCreateServerAcl.c)
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
