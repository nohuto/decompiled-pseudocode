/*
 * XREFs of PnpDereferenceNotify @ 0x14078F428
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x1403205FC (PnpUnregisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078335C (PnpNotifyTargetDeviceChange.c)
 *     PnpProcessDeferredRegistrations @ 0x140786B44 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F280 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14095669C (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x14096D340 (PipKsrNotifyDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x1402A8DC0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDereferenceNotify(PVOID P)
{
  PVOID *v3; // rcx
  PVOID *v4; // rax
  void *v5; // rcx
  void *v6; // rcx

  if ( (*((_WORD *)P + 28))-- == 1 )
  {
    v3 = *(PVOID **)P;
    if ( v3[1] != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    ObfDereferenceObject(*((PVOID *)P + 6));
    if ( *((_DWORD *)P + 4) == 3 )
    {
      v6 = (void *)*((_QWORD *)P + 11);
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        *((_QWORD *)P + 11) = 0LL;
      }
    }
    v5 = (void *)*((_QWORD *)P + 3);
    if ( v5 )
    {
      ZwClose(v5);
      *((_QWORD *)P + 3) = 0LL;
    }
    ExDeleteResourceLite(*((PERESOURCE *)P + 9));
    ExFreePoolWithTag(*((PVOID *)P + 9), 0x56706E50u);
    ExFreePoolWithTag(P, 0);
  }
}
