/*
 * XREFs of UsbhLogSignalResumeEvent @ 0x1C001B7B8
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C001B150 (Usbh_PCE_BusReset_Action.c)
 *     UsbhSignalResumeEvent @ 0x1C001B710 (UsbhSignalResumeEvent.c)
 *     UsbhiSignalResumeEvent @ 0x1C0036604 (UsbhiSignalResumeEvent.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhLogSignalResumeEvent(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // r14
  int v8; // r10d

  v2 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v6 = (KSPIN_LOCK *)(v5 + 4944);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 4944));
  Log(a1, 16, 1936282195, *(int *)(a2 + 696), *(unsigned __int16 *)(a2 + 4));
  if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    Log(a1, v8, 1936282232, 3LL, *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
    v2 = 1;
  }
  KeReleaseSpinLock(v6, v7);
  return v2;
}
