/*
 * XREFs of ?ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C008E4A0
 * Callers:
 *     ?ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C008DDE8 (-ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C008E1AC (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

char __fastcall ndisMValidatePMWakePacketForMagicPacket(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PM_WAKE_PACKET *a2)
{
  unsigned __int64 v2; // r9
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  char *v7; // rdx
  _NDIS_IF_BLOCK *IfBlock; // rbx
  char v9; // r10
  unsigned __int64 v10; // r11
  int v11; // ecx
  char *v12; // r9
  unsigned int i; // r8d
  int v14; // ecx

  v2 = *((unsigned int *)a2 + 37);
  if ( v2 < 0x2A )
    return 0;
  v5 = *((unsigned int *)a2 + 38);
  v6 = v2 - 42;
  v7 = (char *)a2 + v5;
  IfBlock = a1->IfBlock;
  v9 = 0;
  v10 = &v7[-v5] - (char *)a2;
  do
  {
    v11 = *(_DWORD *)v7 + 1;
    if ( *(_DWORD *)v7 == -1 )
      v11 = *((unsigned __int16 *)v7 + 2) - 0xFFFF;
    if ( !v11 )
    {
      v12 = v7 + 6;
      for ( i = 0; i < 6; ++i )
      {
        v14 = *(_DWORD *)v12 - *(_DWORD *)IfBlock->ifPhysAddress.Address;
        if ( *(_DWORD *)v12 == *(_DWORD *)IfBlock->ifPhysAddress.Address )
          v14 = *((unsigned __int16 *)v12 + 2) - *(unsigned __int16 *)&IfBlock->ifPhysAddress.Address[4];
        if ( v14 )
        {
          v9 = 0;
          goto LABEL_15;
        }
        v12 += 6;
        v9 = 1;
      }
      if ( i == 6 )
        return v9;
    }
LABEL_15:
    ++v7;
    ++v10;
  }
  while ( v10 <= v6 );
  return v9;
}
