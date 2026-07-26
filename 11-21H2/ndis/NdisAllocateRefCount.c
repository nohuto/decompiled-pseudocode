/*
 * XREFs of NdisAllocateRefCount @ 0x1C0022460
 * Callers:
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C0021598 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C0021AA4 (ndisIfRegisterInterfaceEx.c)
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0032664 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003369C (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C010AA7C (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C010AEF8 (-ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisAllocateRefCount(unsigned __int8 a1, char a2)
{
  char v2; // bl
  char v4; // di
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = a2;
  if ( !LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) )
    return 2LL;
  v4 = 1;
  if ( LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) == 2 )
    v2 = a2 | 1;
  if ( (v2 & 1) != 0 )
  {
    v5 = (a1 << 6) + 8;
  }
  else
  {
    v5 = (a1 - ((a1 - 1) & 7) + 7) / 8 - (((unsigned __int8)((a1 - ((a1 - 1) & 7) + 7) / 8) - 1) & 3u) + 19;
    v4 = 0;
  }
  result = ExAllocatePool2(64LL, v5, 2020754510);
  if ( !result )
    return 3LL;
  *(_BYTE *)result = v2;
  *(_BYTE *)(result + 1) = v4;
  *(_BYTE *)(result + 2) = a1;
  return result;
}
