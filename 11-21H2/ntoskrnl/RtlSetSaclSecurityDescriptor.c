/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x1406CCBA0
 * Callers:
 *     sub_1403CE4A4 @ 0x1403CE4A4 (sub_1403CE4A4.c)
 *     sub_14041A13C @ 0x14041A13C (sub_14041A13C.c)
 *     sub_1405F412C @ 0x1405F412C (sub_1405F412C.c)
 *     sub_1406CC960 @ 0x1406CC960 (sub_1406CC960.c)
 *     sub_140743E60 @ 0x140743E60 (sub_140743E60.c)
 *     sub_14074F2EC @ 0x14074F2EC (sub_14074F2EC.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 *     sub_140918670 @ 0x140918670 (sub_140918670.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140B1E75C @ 0x140B1E75C (sub_140B1E75C.c)
 *     sub_140B2114C @ 0x140B2114C (sub_140B2114C.c)
 *     sub_140B2A324 @ 0x140B2A324 (sub_140B2A324.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN SaclPresent,
        PACL Sacl,
        BOOLEAN SaclDefaulted)
{
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v8; // cx
  PACL v9; // rax
  __int16 v10; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( v5 >= 0 )
  {
    if ( SaclPresent )
    {
      v8 = v5 | 0x10;
      v9 = 0LL;
      if ( Sacl )
        v9 = Sacl;
      *((_QWORD *)SecurityDescriptor + 3) = v9;
      v10 = v8 & 0xFFDF;
      *((_WORD *)SecurityDescriptor + 1) = v10;
      if ( !SaclDefaulted )
        return 0;
      v6 = v10 | 0x20;
    }
    else
    {
      v6 = v5 & 0xFFEF;
    }
    *((_WORD *)SecurityDescriptor + 1) = v6;
    return 0;
  }
  return -1073741703;
}
