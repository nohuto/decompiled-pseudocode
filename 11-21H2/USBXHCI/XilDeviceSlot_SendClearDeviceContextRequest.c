/*
 * XREFs of XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0036BC0
 * Callers:
 *     UsbDevice_SetDeviceDisabled @ 0x1C000D1B0 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_DisableCompletion @ 0x1C00462A4 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilDeviceSlot_SendClearDeviceContextRequest(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rax
  int v6; // eax
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+20h] [rbp-68h]
  int v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h]
  __int64 v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-20h]
  int v18; // [rsp+6Ch] [rbp-1Ch]
  __int64 v19; // [rsp+70h] [rbp-18h]

  v2 = *(_QWORD *)(a1[9] + 8);
  v3 = *a1;
  v4 = *(_QWORD *)(v2 + 112);
  v14 = 0LL;
  v18 = 0;
  v13 = 0;
  v15 = 0LL;
  v16 = v3;
  v5 = *(_QWORD *)(a2 + 608);
  v17 = 27;
  v19 = v5;
  v6 = SecureChannel_SendRequestSynchronously(v4, &v14, 48LL, &v13, 4);
  if ( v6 >= 0 )
  {
    LOBYTE(v6) = v13;
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          v7,
          10,
          27,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v13);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v8,
            v9,
            v10,
            v12,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
            17,
            "IOCTL succeeded but DeviceSlotClearDeviceContext failed in VTL-1 failed");
      }
      LOBYTE(v6) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v6 )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    LOBYTE(v6) = WPP_RECORDER_SF_d(
                   *(_QWORD *)(v2 + 72),
                   v7,
                   10,
                   26,
                   (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
                   v6);
  }
  return v6;
}
