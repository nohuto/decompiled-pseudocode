/*
 * XREFs of PiCMReturnBasicResultData @ 0x14079A2F8
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x14079A0A8 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14079C034 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x140968D90 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968F2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140969048 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1409693A0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969490 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409696DC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096988C (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x14096AB18 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x14096AD14 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096AED0 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBasicResultData(int a1, int a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h]

  *a5 = 0;
  v6 = 0;
  if ( a4 >= 8 && a2 == 8 )
  {
    LODWORD(v8) = 8;
    HIDWORD(v8) = a1;
    ProbeForWrite(a3, a4, 4u);
    *a3 = v8;
    *a5 = 8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
