/*
 * XREFs of PnpAllocatePWSTR @ 0x1406CCC3C
 * Callers:
 *     PiDqPnPGetObjectProperty @ 0x1406CCCF0 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407884D0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpPropertySet @ 0x14079C6F8 (PiSwIrpPropertySet.c)
 *     PiDqActionDataCreate @ 0x1407F9854 (PiDqActionDataCreate.c)
 *     PiSwPdoPnPDispatch @ 0x140818AD0 (PiSwPdoPnPDispatch.c)
 *     PiSwInstanceInfoInit @ 0x140819420 (PiSwInstanceInfoInit.c)
 *     PiSwPnPInfoInit @ 0x1408195D0 (PiSwPnPInfoInit.c)
 *     PiSwCompleteCreate @ 0x1408197E4 (PiSwCompleteCreate.c)
 *     PnpCopyDevProperty @ 0x140819C30 (PnpCopyDevProperty.c)
 *     PiSwBusRelationAdd @ 0x140819CC8 (PiSwBusRelationAdd.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14081A110 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwInterfaceCreate @ 0x14081B368 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x14081B544 (PiSwDeviceInterfaceSetState.c)
 *     PiDmObjectCreate @ 0x14086B75C (PiDmObjectCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140967A00 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14022B004 (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x14022C640 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x14022CE2C (RtlULongLongMult.c)
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
