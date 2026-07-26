/*
 * XREFs of ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C0110FC8
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002A670 (NdisRegisterProtocolDriver.c)
 *     NdisIfRegisterProvider @ 0x1C002BB20 (NdisIfRegisterProvider.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0031880 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisDriverReinit @ 0x1C0034480 (ndisDriverReinit.c)
 *     NdisIMRegisterLayeredMiniport @ 0x1C0059640 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x1C005AE50 (NdisMRegisterMiniport.c)
 *     NdisRegisterProtocol @ 0x1C00977F0 (NdisRegisterProtocol.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisIfEnsureNsiInitialized(void)
{
  return RtlRunOnceExecuteOnce(&RunOnce, ndisIfInitializePhase2, 0LL, 0LL);
}
