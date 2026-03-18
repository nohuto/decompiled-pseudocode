/*
 * XREFs of UsbhSignalPauseEvent @ 0x1C003530C
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001C090 (Usbh_PCE_psPAUSED_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

void __fastcall UsbhSignalPauseEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  KSPIN_LOCK *v5; // rbx
  KIRQL v6; // si

  FdoExt(a1);
  Log(a1, 16, 1936281683, 0LL, *(unsigned __int16 *)(a2 + 4));
  v5 = (KSPIN_LOCK *)(v4 + 4944);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4944));
  if ( *(_QWORD *)(a2 + 792) )
  {
    *(_QWORD *)(a2 + 792) = 0LL;
    KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
  }
  KeReleaseSpinLock(v5, v6);
}
