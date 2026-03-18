/*
 * XREFs of _CmIsRootDevice @ 0x14079A498
 * Callers:
 *     _CmUpdateDevicePanel @ 0x140798CFC (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceMappedProperty @ 0x140799A70 (_CmSetDeviceMappedProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140799CF0 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceParent @ 0x14079A334 (_CmGetDeviceParent.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086C9A0 (_CmSetDeviceRegPropWorker.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B230 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140968E48 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x14096968C (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14096A274 (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6C0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1406DA2F0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &String2, 1u);
}
