/*
 * XREFs of ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0009AD4
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000CA50 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C000FF4C (-ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisIfGetMiniportStatistics @ 0x1C0102D90 (ndisIfGetMiniportStatistics.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010B510 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ndisIovInvalidateBlockCompletion @ 0x1C0123570 (ndisIovInvalidateBlockCompletion.c)
 *     ndisSriovGetResourceForBar @ 0x1C01236F0 (ndisSriovGetResourceForBar.c)
 *     ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C0123990 (ndisSriovInterfaceGetVendorAndDeviceIds.c)
 *     ndisSriovInterfaceQueryProbedBars @ 0x1C0123B20 (ndisSriovInterfaceQueryProbedBars.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C0123CD0 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C0123EB0 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceResetVF @ 0x1C0124090 (ndisSriovInterfaceResetVF.c)
 *     ndisSriovInterfaceSetVfPowerState @ 0x1C01241F0 (ndisSriovInterfaceSetVfPowerState.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C0124360 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C0124530 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B124 (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C012B770 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012C458 (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C012C984 (ndisNdkPcwCollectMiniportStats.c)
 *     ndisIfQuerySetMiniport @ 0x1C013372C (ndisIfQuerySetMiniport.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C013AEBC (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 */

__int64 __fastcall ndisQuerySetMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CO_VC_PTR_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        unsigned __int8 a4,
        struct _NDIS_FILTER_BLOCK *a5)
{
  return ndisQuerySetMiniportEx(a1, a2, a3, a4, a5, 0LL);
}
