/*
 * XREFs of ZwPlugPlayControl @ 0x14041D4C0
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1407BC4F0 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1407C07D4 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x1407CDE50 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x1407D2F20 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140854C10 (PiPnpRtlGetDeviceRelationsList.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14095A474 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiCMDeleteDevice @ 0x140968E48 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x14096AA24 (PiCMSetProblem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
