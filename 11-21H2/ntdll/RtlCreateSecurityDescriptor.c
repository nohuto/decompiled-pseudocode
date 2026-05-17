/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x18004D750
 * Callers:
 *     RtlCreateAndSetSD @ 0x18000B740 (RtlCreateAndSetSD.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x18004A710 (RtlCheckTokenCapability.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180071758 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x180102E40 (RtlpSysVolTakeOwnership.c)
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
