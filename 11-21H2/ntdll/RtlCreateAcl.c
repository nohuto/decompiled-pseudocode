/*
 * XREFs of RtlCreateAcl @ 0x180010E90
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001CB0 (RtlDefaultNpAcl.c)
 *     RtlCreateAndSetSD @ 0x18000B740 (RtlCreateAndSetSD.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x180010ACC (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x180010F38 (RtlpCombineAcls.c)
 *     RtlCheckTokenCapability @ 0x18004A710 (RtlCheckTokenCapability.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180071758 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpComputeMergedAcl2 @ 0x180091A74 (RtlpComputeMergedAcl2.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F2438 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800F31B4 (RtlpCreateServerAcl.c)
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
