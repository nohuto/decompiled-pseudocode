/*
 * XREFs of UsbhFreePortChangeQueueObject @ 0x1C000D6AC
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001BF60 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D610 (UsbhFlushPortChangeQueue.c)
 *     UsbhCancelQueuedTimeout @ 0x1C001F1AC (UsbhCancelQueuedTimeout.c)
 *     UsbhFlushQueuedDriverReset @ 0x1C003718C (UsbhFlushQueuedDriverReset.c)
 * Callees:
 *     UsbhUnlatchPdo @ 0x1C0002650 (UsbhUnlatchPdo.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000F168 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C001E030 (UsbhLogSignalDriverResetEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00331D8 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhSetPcqEventStatus @ 0x1C00348C0 (UsbhSetPcqEventStatus.c)
 *     UsbhiSignalResumeEvent @ 0x1C0035BCC (UsbhiSignalResumeEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0035C0C (UsbhiSignalSuspendEvent.c)
 */

void __fastcall UsbhFreePortChangeQueueObject(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // r9
  int v9; // ecx
  __int16 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  KSPIN_LOCK *v15; // r14
  KIRQL v16; // r15
  __int64 v17; // r8

  Log(a1, 512, 1969836099, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      54,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  FdoExt(a1);
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_WORD *)(a2 + 420);
  v11 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v12 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v11;
  v13 = a2 + 32 * (v11 + 27);
  *(_DWORD *)v13 = v12;
  *(_DWORD *)(v13 + 4) = v9;
  *(_WORD *)(v13 + 18) = 256;
  *(_WORD *)(v13 + 16) = v10;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_DWORD *)(v13 + 20) = 0;
  *(_DWORD *)(v13 + 28) = 1;
  if ( a4 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( v14 == 4 )
    {
      UsbhiSignalResumeEvent(a1, a2);
      v14 = *(_DWORD *)(a3 + 8);
    }
    if ( v14 == 0x80000 )
    {
      v15 = (KSPIN_LOCK *)FdoExt(a1);
      Log(a1, 16, 1936281683, 0LL, *(unsigned __int16 *)(a2 + 4));
      v16 = KeAcquireSpinLockRaiseToDpc(v15 + 618);
      if ( *(_QWORD *)(a2 + 792) )
      {
        *(_QWORD *)(a2 + 792) = 0LL;
        KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
      }
      KeReleaseSpinLock(v15 + 618, v16);
      v14 = *(_DWORD *)(a3 + 8);
    }
    if ( v14 == 4 )
      UsbhiSignalSuspendEvent(a1, a2);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
  {
    if ( a4 )
    {
      UsbhSignalSyncDeviceResetPdo(a1, *(_QWORD *)(a3 + 40), 3221225473LL);
      if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 3LL);
    }
  }
  else if ( *(_DWORD *)(a3 + 48) == 2 )
  {
    v17 = *(_QWORD *)(a3 + 40);
    LOBYTE(v8) = a4;
    *(_QWORD *)(a3 + 40) = 0LL;
    UsbhFreePortChangeQueueTimeoutObject(a1, a2, v17, v8);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
    UsbhUnlatchPdo(a1, *(_QWORD *)(a3 + 40), a3, 0x49515043u);
  Log(a1, 512, 1718767684, a2, a3);
  ExFreePoolWithTag((PVOID)a3, 0);
}
