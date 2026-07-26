/*
 * XREFs of ndisIsOidAllowedFromUsermode @ 0x1C0010654
 * Callers:
 *     ndisIsOidAllowedFromUsermode_0 @ 0x1C0012AB0 (ndisIsOidAllowedFromUsermode_0.c)
 *     ndisMethodDeviceOid @ 0x1C00ACC98 (ndisMethodDeviceOid.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsOidAllowedFromUsermode(int a1)
{
  _DWORD *v1; // rax

  v1 = &unk_1C00D1678;
  while ( *v1 != a1 )
  {
    if ( ++v1 == (_DWORD *)&unk_1C00D167C )
      return 1;
  }
  return 0;
}
