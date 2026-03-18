/*
 * XREFs of Controller_IsSecureDevice @ 0x1C000B128
 * Callers:
 *     Endpoint_Create @ 0x1C006D664 (Endpoint_Create.c)
 *     TR_Create @ 0x1C006DE38 (TR_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006E440 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Register_Create @ 0x1C006FE80 (Register_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C00700FC (Command_CreateCommandWatchdogTimer.c)
 *     Interrupter_CreateInterrupter @ 0x1C00701D8 (Interrupter_CreateInterrupter.c)
 *     RootHub_PrepareHardware @ 0x1C0070700 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071BC8 (Register_ParseCapabilityRegister.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00725E0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A70 (Controller_WdfEvtDevicePrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0072F6C (CommonBuffer_Create.c)
 *     Register_PrepareHardware @ 0x1C00733C8 (Register_PrepareHardware.c)
 *     Controller_PopulateDeviceFlags @ 0x1C00738F4 (Controller_PopulateDeviceFlags.c)
 *     Bulk_GetConfiguration @ 0x1C00752F0 (Bulk_GetConfiguration.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0078B30 (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C00794C0 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 601);
}
