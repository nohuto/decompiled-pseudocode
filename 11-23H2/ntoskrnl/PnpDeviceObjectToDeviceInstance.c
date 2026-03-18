/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x140798794
 * Callers:
 *     PnpSaveDeviceCapabilities @ 0x140798474 (PnpSaveDeviceCapabilities.c)
 *     PiUpdateDevicePanel @ 0x140798C40 (PiUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x14079B9C4 (PipProcessStartPhase3.c)
 *     PiCreateDriverSwDevices @ 0x14079C080 (PiCreateDriverSwDevices.c)
 *     PiQueryRemovableDeviceOverride @ 0x1407C1190 (PiQueryRemovableDeviceOverride.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x140954D18 (PiGetDeviceRegistryProperty.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x14096B8C4 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1406CE0C4 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 48)) != 0 )
    return CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v5, 16, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
