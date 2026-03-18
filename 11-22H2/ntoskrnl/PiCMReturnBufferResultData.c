/*
 * XREFs of PiCMReturnBufferResultData @ 0x1406D06BC
 * Callers:
 *     PiCMGetObjectProperty @ 0x1406D0A84 (PiCMGetObjectProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14079A200 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMGetRegistryProperty @ 0x1407C0E04 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1407C56AC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceIdList @ 0x1407C7F0C (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceList @ 0x1407CA19C (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x14086CABC (PiCMGetObjectList.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140969A4C (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x14096A0C8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14096A324 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A734 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBufferResultData(
        unsigned int a1,
        unsigned int a2,
        int a3,
        const void *a4,
        unsigned int Size,
        int a6,
        _DWORD *Address,
        unsigned int Length,
        _DWORD *a9)
{
  unsigned int v10; // ebx
  __int128 v12; // [rsp+20h] [rbp-38h]

  *a9 = 0;
  v10 = 0;
  if ( Length >= Size + 20 && a6 == 20 )
  {
    LODWORD(v12) = 20;
    *(_QWORD *)((char *)&v12 + 4) = __PAIR64__(a2, a1);
    HIDWORD(v12) = a3;
    ProbeForWrite(Address, Length, 4u);
    *(_OWORD *)Address = v12;
    Address[4] = 0;
    if ( Size )
      memmove(Address + 4, a4, Size);
    *a9 = Size + 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
