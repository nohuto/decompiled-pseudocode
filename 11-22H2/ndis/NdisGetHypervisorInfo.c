/*
 * XREFs of NdisGetHypervisorInfo @ 0x1C00C3330
 * Callers:
 *     ?ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z @ 0x1C006D984 (-ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisInitHypervisorInfo @ 0x1C00C3270 (ndisInitHypervisorInfo.c)
 */

NDIS_STATUS __stdcall NdisGetHypervisorInfo(PNDIS_HYPERVISOR_INFO HypervisorInfo)
{
  NDIS_STATUS v1; // r10d

  if ( HypervisorInfo->Header.Size < 0xCu )
    return -1073676266;
  ndisInitHypervisorInfo(HypervisorInfo);
  return v1;
}
