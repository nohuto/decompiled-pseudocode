/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x180014630
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180014350 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x180018530 (RtlCheckTokenCapability.c)
 *     RtlCreateAndSetSD @ 0x180068770 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18006C5B8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x180103EE0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateSecurityDescriptor(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 1 )
    return 3221225560LL;
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)a1 = 1;
  return result;
}
