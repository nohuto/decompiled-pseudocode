/*
 * XREFs of ?ndisMInitializePmParametersForAoAc@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0059318
 * Callers:
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B524 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     McTemplateK0jqqqqqqqqqq_EtwWriteTransfer @ 0x1C005AD2C (McTemplateK0jqqqqqqqqqq_EtwWriteTransfer.c)
 */

struct _NDIS_PM_PARAMETERS *__fastcall ndisMInitializePmParametersForAoAc(
        struct _NDIS_PM_PARAMETERS *__return_ptr retstr,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int MediaSpecificWakeUpEvents; // eax
  int v4; // r9d
  unsigned int SupportedWakeUpEvents; // ecx

  MediaSpecificWakeUpEvents = a2->PMCurrentParameters.MediaSpecificWakeUpEvents;
  v4 = 0;
  *(_OWORD *)&retstr->Header.Type = *(_OWORD *)&a2->PMCurrentParameters.Header.Type;
  retstr->MediaSpecificWakeUpEvents = MediaSpecificWakeUpEvents;
  if ( ndisIdleCondition == NdisIdleConditionL2ConnectedOnly )
    retstr->EnabledWoLPacketPatterns = 0;
  SupportedWakeUpEvents = a2->PMAdvertisedCapabilities.SupportedWakeUpEvents;
  retstr->WakeUpFlags = 0;
  if ( (SupportedWakeUpEvents & 2) != 0 )
  {
    retstr->WakeUpFlags = 2;
    v4 = 2;
  }
  if ( (SupportedWakeUpEvents & 1) != 0 )
    retstr->WakeUpFlags = v4 | 1;
  if ( (byte_1C00F7643 & 4) != 0 )
    McTemplateK0jqqqqqqqqqq_EtwWriteTransfer(
      SupportedWakeUpEvents,
      (_DWORD)a2,
      (_DWORD)a2 + 4008,
      (_DWORD)a2 + 4008,
      a2->PMAdvertisedCapabilities.Flags,
      a2->PMAdvertisedCapabilities.SupportedWoLPacketPatterns,
      a2->PMAdvertisedCapabilities.SupportedProtocolOffloads,
      SupportedWakeUpEvents,
      a2->PMAdvertisedCapabilities.MediaSpecificWakeUpEvents);
  return retstr;
}
