/*
 * XREFs of ndisIsOidAllowedFromUsermode_0 @ 0x1C0012AB0
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     ndisIsOidAllowedFromUsermode @ 0x1C0010654 (ndisIsOidAllowedFromUsermode.c)
 */

char __fastcall ndisIsOidAllowedFromUsermode_0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r10
  __int64 v4; // r8
  unsigned __int64 v5; // r9

  v2 = 0LL;
  v3 = a1;
  if ( !a2 )
    return 1;
  while ( ndisIsOidAllowedFromUsermode(*(_DWORD *)(v3 + 4 * v2)) )
  {
    v2 = v4 + 1;
    if ( v2 >= v5 )
      return 1;
  }
  return 0;
}
