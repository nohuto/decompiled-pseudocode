/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x1C000AFE0
 * Callers:
 *     UsbhBusIf_SuspendChildHub @ 0x1C00014F0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0001A6C (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoDevicePowerState @ 0x1C0005200 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C00055F0 (UsbhPdoSetD0.c)
 *     UsbhSshPropagateResume @ 0x1C001E15C (UsbhSshPropagateResume.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C00398B8 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003C2B4 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x1C0005CA0 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhSet_Pdo_Dx(struct _DEVICE_OBJECT *a1, POWER_STATE a2)
{
  _DWORD *DeviceExtension; // rax
  LONG result; // eax
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r8d

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *DeviceExtension != 1329877064 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  DeviceExtension[197] = a2.SystemState;
  PoSetPowerState(a1, DevicePowerState, a2);
  if ( a2.SystemState == PowerSystemWorking )
  {
    v6 = PdoExt(a1);
    v7 = PdoExt(a1);
    v8 = 2;
  }
  else
  {
    result = a2.SystemState - 2;
    if ( (unsigned int)(a2.SystemState - 2) > 2 )
      return result;
    v6 = PdoExt(a1);
    v7 = PdoExt(a1);
    v8 = 1;
  }
  return UsbhSshSetPortsBusyState(*(_QWORD *)(v7 + 1184), *(_WORD *)(v6 + 1428), v8, 0);
}
