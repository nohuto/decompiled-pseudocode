/*
 * XREFs of ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C012D840
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C00185C0 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0069EC0 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertPnpCapabilitiesToPM(struct _NDIS_PNP_CAPABILITIES *a1, struct _NDIS_PM_CAPABILITIES *a2)
{
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // r9d
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // r8d
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  int v5; // ecx

  *(_OWORD *)&a2->Header.Type = 0LL;
  *(_OWORD *)&a2->MaxWoLPatternSize = 0LL;
  *(_OWORD *)&a2->NumArpOffloadIPv4Addresses = 0LL;
  *(_QWORD *)&a2->MinLinkChangeWakeUp = 0LL;
  a2->MediaSpecificWakeUpEvents = 0;
  a2->Header = (_NDIS_OBJECT_HEADER)3932800;
  MinMagicPacketWakeUp = a1->WakeUpCapabilities.MinMagicPacketWakeUp;
  a2->MinMagicPacketWakeUp = MinMagicPacketWakeUp;
  MinPatternWakeUp = a1->WakeUpCapabilities.MinPatternWakeUp;
  a2->MinPatternWakeUp = MinPatternWakeUp;
  MinLinkChangeWakeUp = a1->WakeUpCapabilities.MinLinkChangeWakeUp;
  v5 = 0;
  a2->MinLinkChangeWakeUp = MinLinkChangeWakeUp;
  a2->SupportedWoLPacketPatterns = 0;
  if ( MinPatternWakeUp == NdisDeviceStateD1
    || MinPatternWakeUp == NdisDeviceStateD2
    || MinPatternWakeUp == NdisDeviceStateD3 )
  {
    a2->SupportedWoLPacketPatterns = 1;
    v5 = 1;
  }
  if ( MinMagicPacketWakeUp == NdisDeviceStateD1 || (unsigned int)(MinMagicPacketWakeUp - 3) <= 1 )
    a2->SupportedWoLPacketPatterns = v5 | 2;
}
