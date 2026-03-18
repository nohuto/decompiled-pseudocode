/*
 * XREFs of UsbhReferenceListAdd @ 0x1C0002650
 * Callers:
 *     UsbhResetPort @ 0x1C0002918 (UsbhResetPort.c)
 *     UsbhGetTopOfBusStack @ 0x1C002CD18 (UsbhGetTopOfBusStack.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C002DA9C (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhSetTimer @ 0x1C002DD38 (UsbhSetTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C002DDE4 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C002FB00 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C002FC70 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C00394C0 (UsbhResetPortTimerDpc.c)
 *     UsbhTimerPnpStart @ 0x1C003BCF0 (UsbhTimerPnpStart.c)
 *     UsbhReferenceListOpen @ 0x1C00418C8 (UsbhReferenceListOpen.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

__int64 __fastcall UsbhReferenceListAdd(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // di
  __int64 v7; // rbx
  __int64 Pool2; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rdx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v7 = FdoExt(a1);
  if ( *(_BYTE *)(v7 + 2480) )
  {
    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1397515890;
      *(_DWORD *)(Pool2 + 40) = a3;
      *(_QWORD *)(Pool2 + 16) = a2;
      *(_QWORD *)(Pool2 + 8) = a1;
      v10 = (_QWORD *)(Pool2 + 24);
      v11 = *(_QWORD **)(v7 + 2520);
      if ( *v11 != v7 + 2512 )
        __fastfail(3u);
      *v10 = v7 + 2512;
      v10[1] = v11;
      *v11 = v10;
      *(_QWORD *)(v7 + 2520) = v10;
    }
    else
    {
      ++*(_DWORD *)(v7 + 2528);
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
