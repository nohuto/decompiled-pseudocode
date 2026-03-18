/*
 * XREFs of Usbh_HRS_Paused @ 0x1C001F180
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001EC80 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseResetLock @ 0x1C0031DCC (UsbhReleaseResetLock.c)
 */

__int64 __fastcall Usbh_HRS_Paused(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // r8
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  unsigned int v12; // ebx
  struct _KSEMAPHORE *v13; // rax
  __int64 Limit; // rcx

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920159827, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  v6 = v3 - 1;
  if ( !v6 )
  {
LABEL_13:
    if ( (v4[640] & 0x10) == 0 )
    {
      v13 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8));
      v12 = 2;
      v13[87].Limit = 2;
      *(_DWORD *)(a1 + 68) = 2;
      *(_DWORD *)(a1 + 64) = 1734964085;
      Limit = (unsigned int)v13[28].Limit;
      v13[41].Header.WaitListHead.Flink = 0LL;
      v13[Limit + 29].Header.SignalState = 2;
      KeReleaseSemaphore(v13 + 88, 16, 1, 0);
      return v12;
    }
    KeResetEvent((PRKEVENT)(v4 + 712));
    IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), UsbhHardResetWorker, DelayedWorkQueue, 0LL);
    v8 = 3LL;
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = 1LL;
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
  }
  v8 = 6LL;
  v9 = v7 - 1;
  if ( !v9 || (v10 = v9 - 6) == 0 )
  {
    v4[640] |= 0x10u;
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      v8 = v5;
      return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
    }
    goto LABEL_13;
  }
  return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
}
