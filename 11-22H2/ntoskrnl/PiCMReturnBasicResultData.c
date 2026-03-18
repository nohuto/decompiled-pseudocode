/*
 * XREFs of PiCMReturnBasicResultData @ 0x14079A618
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x14079A3C8 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14079C354 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x140968C40 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968DDC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140969250 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969340 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x14096958C (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096973C (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x14096A9C8 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x14096ABC4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096AD80 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
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
