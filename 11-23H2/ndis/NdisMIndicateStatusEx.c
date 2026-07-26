/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C001A410
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0008860 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFOidRequest @ 0x1C000A650 (NdisFOidRequest.c)
 *     ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001A270 (-ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006CCAC (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1C006D3B0 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D7FC (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMIndicateStatus @ 0x1C006F4F0 (NdisMIndicateStatus.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C007128C (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ndisWdfDevicePowerDown @ 0x1C008C51C (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C008C774 (ndisWdfDevicePowerOn.c)
 *     ?ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093A3C (-ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPMRejectAsync@@YAXPEAX@Z @ 0x1C0097A80 (-ndisPMRejectAsync@@YAXPEAX@Z.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0098C8C (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0098EDC (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostLinkSpeed@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A05B0 (-ndisOidPostLinkSpeed@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostMediaState@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A0890 (-ndisOidPostMediaState@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3700 (-ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0146970 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMIndicateStatusEx(NDIS_HANDLE MiniportAdapterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  __int64 v2; // r10

  v2 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 896LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_STATUS_INDICATION))((char *)g_MiniportHookDrivers + v2 + 64))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v2 + 24),
    *((_QWORD *)MiniportAdapterHandle + 660),
    MiniportAdapterHandle,
    StatusIndication);
}
