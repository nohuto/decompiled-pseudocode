/*
 * XREFs of ndisIsOidAllowedFromUsermode @ 0x1C000FE10
 * Callers:
 *     ndisIsOidAllowedFromUsermode_0 @ 0x1C00118AC (ndisIsOidAllowedFromUsermode_0.c)
 *     ndisMethodDeviceOid @ 0x1C00B26B4 (ndisMethodDeviceOid.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C010E350 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsOidAllowedFromUsermode(int a1)
{
  _DWORD *v1; // rax

  v1 = &unk_1C00D8528;
  while ( *v1 != a1 )
  {
    if ( ++v1 == (_DWORD *)&unk_1C00D852C )
      return 1;
  }
  return 0;
}
