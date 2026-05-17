/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x180014870
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180014560 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 *     RtlCreateAndSetSD @ 0x180068790 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18006C714 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x180102AD0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetOwnerSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  __int16 v4; // cx
  __int64 v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 < 0 )
    return 3221225593LL;
  v5 = 0LL;
  if ( a2 )
    v5 = a2;
  *(_QWORD *)(a1 + 8) = v5;
  v6 = v4 & 0xFFFE;
  *(_WORD *)(a1 + 2) = v6;
  if ( a3 )
    *(_WORD *)(a1 + 2) = v6 | 1;
  return 0LL;
}
