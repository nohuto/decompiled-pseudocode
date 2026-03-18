/*
 * XREFs of PiCMReturnBasicResultData @ 0x14079A108
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x140799EB8 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14079BE44 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x140968B90 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968D2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140968E48 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1409691A0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969290 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409694DC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096968C (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x14096A918 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x14096AB14 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096ACD0 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x140729380 (ProbeForWrite.c)
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
