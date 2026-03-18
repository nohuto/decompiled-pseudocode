/*
 * XREFs of UsbhReferenceListAdd @ 0x1C001AD54
 * Callers:
 *     UsbhResetPort @ 0x1C001AB54 (UsbhResetPort.c)
 *     UsbhGetTopOfBusStack @ 0x1C002C348 (UsbhGetTopOfBusStack.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C002D0CC (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhSetTimer @ 0x1C002D368 (UsbhSetTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C002D414 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C002F130 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C002F2A0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0038A80 (UsbhResetPortTimerDpc.c)
 *     UsbhTimerPnpStart @ 0x1C003B290 (UsbhTimerPnpStart.c)
 *     UsbhReferenceListOpen @ 0x1C004100C (UsbhReferenceListOpen.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 */

__int64 __fastcall UsbhReferenceListAdd(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // di
  _DWORD *v7; // rbx
  __int64 Pool2; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rdx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v7 = FdoExt(a1);
  if ( *((_BYTE *)v7 + 2480) )
  {
    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1397515890;
      *(_DWORD *)(Pool2 + 40) = a3;
      *(_QWORD *)(Pool2 + 16) = a2;
      *(_QWORD *)(Pool2 + 8) = a1;
      v10 = (_QWORD *)(Pool2 + 24);
      v11 = (_QWORD *)*((_QWORD *)v7 + 315);
      if ( (_DWORD *)*v11 != v7 + 628 )
        __fastfail(3u);
      *v10 = v7 + 628;
      v10[1] = v11;
      *v11 = v10;
      *((_QWORD *)v7 + 315) = v10;
    }
    else
    {
      ++v7[632];
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6);
    return 0LL;
  }
  else
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6);
    return 3221225473LL;
  }
}
