/*
 * XREFs of PnpAllocatePWSTR @ 0x1406CCC6C
 * Callers:
 *     PiDqPnPGetObjectProperty @ 0x1406CCD20 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407886C0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpPropertySet @ 0x14079C8E8 (PiSwIrpPropertySet.c)
 *     PiDqActionDataCreate @ 0x1407F9B24 (PiDqActionDataCreate.c)
 *     PiSwPdoPnPDispatch @ 0x140818DA0 (PiSwPdoPnPDispatch.c)
 *     PiSwInstanceInfoInit @ 0x1408196F0 (PiSwInstanceInfoInit.c)
 *     PiSwPnPInfoInit @ 0x1408198A0 (PiSwPnPInfoInit.c)
 *     PiSwCompleteCreate @ 0x140819AB4 (PiSwCompleteCreate.c)
 *     PnpCopyDevProperty @ 0x140819F00 (PnpCopyDevProperty.c)
 *     PiSwBusRelationAdd @ 0x140819F98 (PiSwBusRelationAdd.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14081A3E0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwInterfaceCreate @ 0x14081B638 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x14081B814 (PiSwDeviceInterfaceSetState.c)
 *     PiDmObjectCreate @ 0x14086B99C (PiDmObjectCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140967C00 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14022B114 (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x14022C750 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x14022CF3C (RtlULongLongMult.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocatePWSTR(NTSTRSAFE_PCWSTR pszSrc, size_t a2, ULONG a3, PVOID *a4)
{
  NTSTATUS v4; // ebx
  wchar_t *Pool2; // rax
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  pcchLength = 0LL;
  pullResult = 0LL;
  *a4 = 0LL;
  if ( pszSrc )
  {
    v4 = RtlStringCchLengthW(pszSrc, a2, &pcchLength);
    if ( v4 >= 0 )
    {
      if ( !pcchLength )
        return (unsigned int)v4;
      v4 = RtlULongLongMult(pcchLength + 1, 2uLL, &pullResult);
      if ( v4 >= 0 )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, pullResult, a3);
        *a4 = Pool2;
        if ( Pool2 )
        {
          v4 = RtlStringCbCopyW(Pool2, pullResult, pszSrc);
          if ( v4 >= 0 )
            return (unsigned int)v4;
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
    if ( *a4 )
    {
      ExFreePoolWithTag(*a4, a3);
      *a4 = 0LL;
    }
  }
  return (unsigned int)v4;
}
