/*
 * XREFs of ?ndisValidateNDKPnPEvents@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0138664
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01477A0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00065F4 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisValidateNDKPnPEvents(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // r10
  unsigned int v7; // r9d
  char v8; // r11

  NDKBlock = ndisGetNDKBlock(a1);
  v5 = 0;
  v6 = *(_QWORD *)(v3 + 16);
  v7 = *(_DWORD *)(v3 + 24);
  v8 = 0;
  if ( !NDKBlock )
    return (unsigned int)-1073741808;
  if ( *(_BYTE *)(v4 + 32) > 6u || *(_BYTE *)(v4 + 32) == 6 && *(_BYTE *)(v4 + 33) >= 0x32u )
  {
    v8 = 1;
    if ( (*(_BYTE *)(v3 + 1) >= 2u || (*(_DWORD *)(v3 + 160) & 4) != 0)
      && (*(_DWORD *)(v3 + 160) & 2) != 0
      && *(_DWORD *)(v3 + 168) )
    {
      return v5;
    }
  }
  else if ( v6 || v7 )
  {
    return (unsigned int)-1073741808;
  }
  if ( *(_DWORD *)(v3 + 8) == 13 )
  {
    if ( !v8 || v6 && v7 >= 0x38 )
    {
      if ( *((_BYTE *)NDKBlock + 24) )
        return (unsigned int)-1073741436;
      return v5;
    }
    return (unsigned int)-1073741808;
  }
  if ( v8 && (v6 || v7) )
    return (unsigned int)-1073741808;
  if ( !*((_BYTE *)NDKBlock + 24) )
    return (unsigned int)-1073741436;
  return v5;
}
