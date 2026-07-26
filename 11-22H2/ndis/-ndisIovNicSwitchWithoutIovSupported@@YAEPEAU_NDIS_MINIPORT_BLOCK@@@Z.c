/*
 * XREFs of ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BFC4
 * Callers:
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0021894 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002EA50 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C00761D4 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z.c)
 *     ?ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0076C90 (-ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077070 (-ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovCreateNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077A20 (-ndisOidPreIovCreateNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077C30 (-ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovDeleteNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077D90 (-ndisOidPreIovDeleteNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077F40 (-ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00780E0 (-ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078650 (-ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078E50 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079B50 (-ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085260 (-ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085A5C (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIovNicSwitchWithoutIovSupported(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // dl
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax

  v1 = 0;
  if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x32u )
  {
    NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
    if ( NicSwitchCurrentCapabilities && (NicSwitchCurrentCapabilities->NicSwitchCapabilities & 0x40) != 0 )
      return 1;
  }
  return v1;
}
