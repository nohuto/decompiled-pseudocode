/*
 * XREFs of NdisCmNotifyCloseAddressFamily @ 0x1C00BD010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00BC8C0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00BC9D0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1C00C1310 (NdisCoRequestComplete.c)
 */

NDIS_STATUS __stdcall NdisCmNotifyCloseAddressFamily(NDIS_HANDLE NdisAfHandle)
{
  NDIS_STATUS result; // eax
  KIRQL v3; // al
  KSPIN_LOCK *v4; // rcx
  KIRQL v5; // dl
  NDIS_STATUS v6; // edx
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD, char *); // rbp
  KIRQL v8; // al

  if ( !ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)NdisAfHandle) )
    return -1073741823;
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
    v4 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
    v5 = v3;
    if ( (*((_DWORD *)NdisAfHandle + 2) & 0x40000000) != 0 )
    {
      *((_QWORD *)NdisAfHandle + 73) = 0LL;
LABEL_6:
      *((_BYTE *)NdisAfHandle + 592) = 1;
      KeReleaseSpinLock(v4, v5);
      return 259;
    }
    KeReleaseSpinLock(v4, v3);
    result = (*((__int64 (__fastcall **)(_QWORD))NdisAfHandle + 45))(*((_QWORD *)NdisAfHandle + 47));
    if ( result == 259 )
      return result;
    v6 = result;
LABEL_9:
    NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, v6);
    return 259;
  }
  memset((char *)NdisAfHandle + 408, 0, 0xB0uLL);
  *((_DWORD *)NdisAfHandle + 110) = 1;
  *((_DWORD *)NdisAfHandle + 112) = -33554422;
  *((_QWORD *)NdisAfHandle + 57) = 0LL;
  *((_DWORD *)NdisAfHandle + 116) = 0;
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))*((_QWORD *)NdisAfHandle + 10);
  *((_QWORD *)NdisAfHandle + 62) = *((_QWORD *)NdisAfHandle + 6);
  if ( !v7 )
  {
    v6 = -1073741637;
    goto LABEL_9;
  }
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  v4 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  v5 = v8;
  if ( (*((_DWORD *)NdisAfHandle + 2) & 0x40000000) != 0 )
  {
    *((_QWORD *)NdisAfHandle + 73) = (char *)NdisAfHandle + 408;
    goto LABEL_6;
  }
  KeReleaseSpinLock(v4, v8);
  result = v7(*((_QWORD *)NdisAfHandle + 47), 0LL, 0LL, (char *)NdisAfHandle + 408);
  if ( result == 259 )
    return result;
  NdisCoRequestComplete(result, NdisAfHandle, 0LL, 0LL, (char *)NdisAfHandle + 408);
  return 259;
}
