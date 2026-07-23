/*
 * XREFs of PiCMReturnBufferResultData @ 0x1406D063C
 * Callers:
 *     PiCMGetObjectProperty @ 0x1406D0A04 (PiCMGetObjectProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140799EE0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMGetRegistryProperty @ 0x1407C0B44 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1407C53EC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceIdList @ 0x1407C7C4C (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceList @ 0x1407C9EDC (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x14086C82C (PiCMGetObjectList.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140969B9C (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x14096A218 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14096A474 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A884 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
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
