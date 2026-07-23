/*
 * XREFs of ZwPlugPlayControl @ 0x14041CE00
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1407BCA80 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1407C0D64 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x1407CE3E0 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x1407D34A0 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140855B20 (PiPnpRtlGetDeviceRelationsList.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14095A524 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x14096AAD4 (PiCMSetProblem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwPlugPlayControl(
        PLUGPLAY_CONTROL_CLASS PnPControlClass,
        PVOID PnPControlData,
        ULONG PnPControlDataLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&PnPControlClass);
}
