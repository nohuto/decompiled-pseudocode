/*
 * XREFs of ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C011E4E8
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002AB44 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisIfRegisterProvider @ 0x1C002F7E0 (NdisIfRegisterProvider.c)
 *     NdisRegisterProtocolDriver @ 0x1C002FA30 (NdisRegisterProtocolDriver.c)
 *     ndisDriverReinit @ 0x1C0035E20 (ndisDriverReinit.c)
 *     NdisIMRegisterLayeredMiniport @ 0x1C005E890 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x1C00600C0 (NdisMRegisterMiniport.c)
 *     NdisRegisterProtocol @ 0x1C009D830 (NdisRegisterProtocol.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisIfEnsureNsiInitialized(void)
{
  return RtlRunOnceExecuteOnce(&RunOnce, (PRTL_RUN_ONCE_INIT_FN)ndisIfInitializePhase2, 0LL, 0LL);
}
