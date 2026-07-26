/*
 * XREFs of ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0111FD8
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016A30 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x1C0022430 (-ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0030164 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C0060450 (NdisWdfMiniportDataPathPause.c)
 *     NdisWdfMiniportDataPathStart @ 0x1C0060530 (NdisWdfMiniportDataPathStart.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0063924 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     _lambda_41733bf2d8819ac48e8a92fbe4ca966a_::operator() @ 0x1C00649A8 (_lambda_41733bf2d8819ac48e8a92fbe4ca966a_--operator().c)
 *     NdisEnumerateFilterModules @ 0x1C0067140 (NdisEnumerateFilterModules.c)
 *     NdisMSetMiniportSecondary @ 0x1C006FBE0 (NdisMSetMiniportSecondary.c)
 *     ?ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C007E9B4 (-ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@.c)
 *     ndisWdfDevicePowerOn @ 0x1C008C774 (ndisWdfDevicePowerOn.c)
 *     _lambda_e707af44feb2328f0567bcb6066c5fb7_::operator() @ 0x1C009BCF8 (_lambda_e707af44feb2328f0567bcb6066c5fb7_--operator().c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C34C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C009CC10 (-ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C009CDF0 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0146970 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01477A0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C014B36C (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01534F0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C0156158 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::BeginPolicyUpdates(Ndis::BindEngine *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
}
