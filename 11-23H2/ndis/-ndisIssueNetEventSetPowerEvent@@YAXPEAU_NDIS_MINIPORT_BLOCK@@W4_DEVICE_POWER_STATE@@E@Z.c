/*
 * XREFs of ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x1C010F78C
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016A30 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1C008C774 (ndisWdfDevicePowerOn.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0135E54 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0146970 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0014E1C (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001DC74 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167A0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisIssueNetEventSetPowerEvent(struct _NDIS_MINIPORT_BLOCK *a1, enum _DEVICE_POWER_STATE a2, char a3)
{
  bool v5; // al
  enum _DEVICE_POWER_STATE v6; // [rsp+20h] [rbp-D8h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v7; // [rsp+30h] [rbp-C8h] BYREF

  v6 = a2;
  memset(&v7, 0, sizeof(v7));
  ndisInitializeNetPnPEvent(&v7, 0LL);
  v7.NetPnPEvent.NetEvent = NetEventSetPower;
  v7.NetPnPEvent.Buffer = &v6;
  v7.NetPnPEvent.BufferLength = 4;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v7);
  v5 = 1;
  if ( v6 != PowerDeviceD0 || !a3 )
    v5 = 0;
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, v5);
}
