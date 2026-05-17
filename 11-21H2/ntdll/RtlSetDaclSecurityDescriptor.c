/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x18004D6E0
 * Callers:
 *     RtlCreateAndSetSD @ 0x18000B740 (RtlCreateAndSetSD.c)
 *     RtlCheckTokenCapability @ 0x18004A710 (RtlCheckTokenCapability.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180071758 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800718B4 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetDaclSecurityDescriptor(__int64 a1, char a2, __int64 a3, char a4)
{
  __int16 v5; // cx
  __int16 v6; // cx
  __int64 v7; // rax
  __int16 v8; // cx
  __int16 v10; // cx

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v5 = *(_WORD *)(a1 + 2);
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v6 = v5 | 4;
      v7 = 0LL;
      if ( a3 )
        v7 = a3;
      *(_QWORD *)(a1 + 32) = v7;
      v8 = v6 & 0xFFF7;
      *(_WORD *)(a1 + 2) = v8;
      if ( !a4 )
        return 0LL;
      v10 = v8 | 8;
    }
    else
    {
      v10 = v5 & 0xFFFB;
    }
    *(_WORD *)(a1 + 2) = v10;
    return 0LL;
  }
  return 3221225593LL;
}
