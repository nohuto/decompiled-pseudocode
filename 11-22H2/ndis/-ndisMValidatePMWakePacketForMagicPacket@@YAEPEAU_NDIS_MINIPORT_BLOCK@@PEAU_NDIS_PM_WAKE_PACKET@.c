/*
 * XREFs of ?ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C0094460
 * Callers:
 *     ?ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C0093DA0 (-ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C009416C (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 */

char __fastcall ndisMValidatePMWakePacketForMagicPacket(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PM_WAKE_PACKET *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rdi
  char *v5; // rdx
  char v6; // r10
  _NDIS_IF_BLOCK *IfBlock; // rbx
  unsigned __int64 v8; // r11
  int v9; // ecx
  char *v10; // r9
  unsigned int i; // r8d
  int v12; // ecx

  v2 = *((unsigned int *)a2 + 37);
  if ( v2 < 0x2A )
    return 0;
  v4 = v2 - 42;
  v5 = (char *)a2 + *((unsigned int *)a2 + 38);
  v6 = 0;
  IfBlock = a1->IfBlock;
  v8 = 0LL;
  do
  {
    v9 = *(_DWORD *)v5 + 1;
    if ( *(_DWORD *)v5 == -1 )
      v9 = *((unsigned __int16 *)v5 + 2) - 0xFFFF;
    if ( !v9 )
    {
      v10 = v5 + 6;
      for ( i = 0; i < 6; ++i )
      {
        v12 = *(_DWORD *)v10 - *(_DWORD *)IfBlock->ifPhysAddress.Address;
        if ( *(_DWORD *)v10 == *(_DWORD *)IfBlock->ifPhysAddress.Address )
          v12 = *((unsigned __int16 *)v10 + 2) - *(unsigned __int16 *)&IfBlock->ifPhysAddress.Address[4];
        if ( v12 )
        {
          v6 = 0;
          goto LABEL_15;
        }
        v10 += 6;
        v6 = 1;
      }
      if ( i == 6 )
        return v6;
    }
LABEL_15:
    ++v5;
    ++v8;
  }
  while ( v8 <= v4 );
  return v6;
}
