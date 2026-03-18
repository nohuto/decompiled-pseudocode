/*
 * XREFs of UsbhReset1Complete @ 0x1C0002B20
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCancelResetTimeout @ 0x1C00015A0 (UsbhCancelResetTimeout.c)
 *     UsbhCreateDevice @ 0x1C0002364 (UsbhCreateDevice.c)
 *     UsbhResetPort @ 0x1C0002918 (UsbhResetPort.c)
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C00031B0 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C00098E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhRawWait @ 0x1C0019670 (UsbhRawWait.c)
 *     UsbhAllocateTimeoutObject @ 0x1C001B9D8 (UsbhAllocateTimeoutObject.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     UsbhWait @ 0x1C002E204 (UsbhWait.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhClearTt @ 0x1C003708C (UsbhClearTt.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E9B8 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset1Complete(__int64 a1, __int64 a2, void *a3)
{
  unsigned int v6; // r14d
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // al
  int FrameCounter; // eax
  int v10; // ecx
  unsigned int v11; // r9d
  int v13; // eax
  PVOID v14; // rbx
  int v15; // ebp
  int v16; // eax
  int v17; // [rsp+30h] [rbp-78h]
  int v18; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  int v20[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v21; // [rsp+60h] [rbp-48h]
  __int16 v22; // [rsp+62h] [rbp-46h]

  v22 = 0;
  P = 0LL;
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884434787, a2, 0LL);
  v7 = (KSPIN_LOCK *)(FdoExt(a1) + 3064);
  v8 = KeAcquireSpinLockRaiseToDpc(v7);
  KeReleaseSpinLock(v7, v8);
  UsbhCancelResetTimeout(a1, a2, 0);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET1_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v10 = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v20[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v20[1] = v10;
  v21 = FrameCounter;
  if ( v10 )
  {
    UsbhWait(a1, 100LL);
  }
  else
  {
    Log(a1, 8, 2002872692, 32, 0LL);
    UsbhRawWait(v11);
  }
  if ( (int)UsbhCreateDevice(a1, a3, *(_WORD *)(a2 + 420), *(_WORD *)(a2 + 4)) < 0 )
    goto LABEL_16;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_ENUM_CREATE_DEVICE_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  if ( (*(_WORD *)(a2 + 420) & 0x400) != 0
    && !*(_DWORD *)(a2 + 544)
    && !dword_1C006B6CC
    && (*(_DWORD *)(FdoExt(a1) + 2560) & 0x8000000) == 0 )
  {
    return UsbhReset2Complete(a1);
  }
  v13 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v14 = P;
  v15 = v13;
  if ( v13 >= 0 )
  {
    v6 = 2;
LABEL_20:
    UsbhResetPort(a1, a2, (__int64)v14);
    return v6;
  }
  if ( !P )
  {
LABEL_16:
    v16 = UsbhAllocateTimeoutObject(a1, a2, &P);
    v14 = P;
    v15 = v16;
  }
  if ( *(_DWORD *)(a2 + 544) >= 3u )
  {
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
  }
  else if ( v14 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v15);
    UsbhWait(a1, 500LL);
    ++*(_DWORD *)(a2 + 544);
    UsbhClearTt(a1);
    goto LABEL_20;
  }
  UsbhSetEnumerationFailed(a1, (int)v20, v15, v17, v18, 1509);
  return 0LL;
}
