/*
 * XREFs of XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0037038
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x1C00105E0 (XilDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilUsbDevice_GetDeviceContextBufferLA @ 0x1C0010814 (XilUsbDevice_GetDeviceContextBufferLA.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilDeviceSlot_SendSetDeviceContextRequest(__int64 *a1, __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-A8h]
  int v17[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v18[8]; // [rsp+50h] [rbp-78h] BYREF

  v6 = *(_QWORD *)(a1[9] + 8);
  v7 = *(_QWORD *)(v6 + 112);
  memset(v18, 0, sizeof(v18));
  v8 = *a1;
  v17[0] = 0;
  v18[3] = v8;
  v18[5] = *(_QWORD *)(a2 + 608);
  LODWORD(v18[4]) = 26;
  LODWORD(v18[6]) = a3;
  v18[7] = XilUsbDevice_GetDeviceContextBufferLA(a2);
  v9 = SecureChannel_SendRequestSynchronously(v7, v18, 64LL, v17, 4);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v11 = v17[0];
    if ( v17[0] < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v10,
          10,
          24,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v17[0]);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v12,
            v13,
            v14,
            v16,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
            131,
            "IOCTL succeeded but DeviceSlotSetDeviceContext failed in VTL-1 failed");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v10, 10, 23, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v9);
  }
  return v11;
}
