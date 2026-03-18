/*
 * XREFs of UsbhCancelResetTimeout @ 0x1C000DCF0
 * Callers:
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhReset1Complete @ 0x1C001BA90 (UsbhReset1Complete.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001BF60 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhCancelEnumeration @ 0x1C001EB50 (UsbhCancelEnumeration.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003975C (UsbhSoftDisconnectPdo.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004C6E0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C004D320 (UsbhReset1Debounce.c)
 *     UsbhReset1DropDevice @ 0x1C004D590 (UsbhReset1DropDevice.c)
 *     UsbhReset2CycleDevice @ 0x1C004DB10 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C004DB80 (UsbhReset2DropDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhReferenceListRemove @ 0x1C001DCEC (UsbhReferenceListRemove.c)
 *     UsbhWaitForResetTimeout @ 0x1C001EEA4 (UsbhWaitForResetTimeout.c)
 *     UsbhCancelQueuedTimeout @ 0x1C001F1AC (UsbhCancelQueuedTimeout.c)
 *     UsbhWait @ 0x1C002D834 (UsbhWait.c)
 *     UsbhDisablePort @ 0x1C0036D8C (UsbhDisablePort.c)
 */

void __fastcall UsbhCancelResetTimeout(__int64 a1, __int64 a2, int a3)
{
  char v5; // bp
  KSPIN_LOCK *v7; // rdi
  KIRQL v8; // r14
  void *v9; // r10
  KIRQL v10; // al
  KIRQL v11; // al
  KIRQL v12; // r10

  v5 = 1;
  Log(*(_QWORD *)(a2 + 16), 4, 1667322452, a2, *(unsigned __int16 *)(a2 + 4));
  v7 = (KSPIN_LOCK *)(FdoExt(*(_QWORD *)(a2 + 16)) + 1236);
  if ( KeCancelTimer((PKTIMER)(a2 + 552)) )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(v7);
    Log(*(_QWORD *)(a2 + 16), 4, 1667322417, a2, _InterlockedExchange64((volatile __int64 *)(a2 + 680), 0LL));
    *(_DWORD *)(a2 + 696) = 0;
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( !a3 )
      *(_DWORD *)(a2 + 696) = 0;
    Log(*(_QWORD *)(a2 + 16), 4, 1667323992, a2, *(unsigned __int16 *)(a2 + 4));
    KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
    if ( *(_DWORD *)(a2 + 696) == 1 )
    {
      *(_DWORD *)(a2 + 696) = 0;
      KeReleaseSpinLock(v7, v8);
      UsbhWait(a1, 50LL);
    }
    else
    {
      KeReleaseSpinLock(v7, v8);
    }
    if ( a3 == 1 )
      UsbhDisablePort(a1);
  }
  else
  {
    v5 = 0;
    v11 = KeAcquireSpinLockRaiseToDpc(v7);
    if ( *(_DWORD *)(a2 + 696) == 4 )
    {
      KeReleaseSpinLock(v7, v11);
      if ( !(unsigned __int8)UsbhCancelQueuedTimeout(a1, a2) )
        UsbhWaitForResetTimeout(a1, a2);
    }
    else
    {
      Log(*(_QWORD *)(a2 + 16), 4, 1668768052, 0LL, *(unsigned __int16 *)(a2 + 4));
      KeReleaseSpinLock(v7, v12);
      UsbhWaitForResetTimeout(a1, a2);
      UsbhCancelQueuedTimeout(a1, a2);
    }
  }
  v10 = KeAcquireSpinLockRaiseToDpc(v7);
  KeReleaseSpinLock(v7, v10);
  if ( v5 )
    UsbhReferenceListRemove(*(_QWORD *)(a2 + 16), a2 + 552);
}
