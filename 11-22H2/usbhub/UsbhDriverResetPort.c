/*
 * XREFs of UsbhDriverResetPort @ 0x1C001B8C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0001CD0 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0001DA8 (UsbhSignalDriverResetEvent.c)
 *     UsbhResetPort @ 0x1C0002918 (UsbhResetPort.c)
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0004C60 (UsbhAcquireEnumBusLock.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSignalResumeEvent @ 0x1C001B710 (UsbhSignalResumeEvent.c)
 *     UsbhAllocateTimeoutObject @ 0x1C001B9D8 (UsbhAllocateTimeoutObject.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhDriverResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  int v7; // eax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  Log(a1, 1024, 1884443460, a2, 0LL);
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      40,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  UsbhSignalResumeEvent(a1, a2);
  v7 = UsbhAllocateTimeoutObject(a1, a2, &v12);
  if ( v7 < 0 )
  {
    v6 = 0;
    UsbhSignalSyncDeviceResetPdo(a1, a3, v7);
    UsbhSignalDriverResetEvent(a1, a2);
  }
  else
  {
    *(_DWORD *)(a2 + 2408) |= 1u;
    *(_DWORD *)(a2 + 544) = 0;
    if ( a3 )
    {
      v8 = PdoExt(a3);
      v8[355] &= ~0x1000u;
      v9 = PdoExt(a3);
      UsbhDecHubBusy(a1, v10, *((_QWORD **)v9 + 107));
      *((_QWORD *)PdoExt(a3) + 107) = 0LL;
    }
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    UsbhResetPort(a1, a2, v12);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 10);
  }
  return v6;
}
