/*
 * XREFs of XilUsbDevice_CreateSecureObject @ 0x1C0045964
 * Callers:
 *     XilUsbDevice_Create @ 0x1C0015F1C (XilUsbDevice_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilUsbDevice_CreateSecureObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v5; // r14
  __int64 v6; // rbx
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-59h]
  __int128 v17; // [rsp+40h] [rbp-39h] BYREF
  int v18; // [rsp+50h] [rbp-29h]
  _QWORD v19[10]; // [rsp+60h] [rbp-19h] BYREF

  v18 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v17 = 0LL;
  v5 = *(_QWORD **)(v3 + 8);
  v6 = v5[14];
  memset(v19, 0, sizeof(v19));
  v7 = *(_OWORD *)(a2 + 4);
  LODWORD(v19[4]) = 30;
  v8 = *(_QWORD *)(a2 + 20);
  v19[5] = v5[71];
  LODWORD(v19[6]) = *(_DWORD *)a2;
  *(_OWORD *)((char *)&v19[6] + 4) = v7;
  *(_QWORD *)((char *)&v19[8] + 4) = v8;
  v9 = SecureChannel_SendRequestSynchronously(v6, v19, 80LL, &v17, 24);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v11 = v17;
    if ( (int)v17 >= 0 )
    {
      *(_QWORD *)a1 = *((_QWORD *)&v17 + 1);
      *(_BYTE *)(a1 + 48) = v18;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(v5[9], v10, 12, 11, (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids, v17);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v12,
            v13,
            v14,
            v16,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
            135,
            "IOCTL succeeded but UsbDeviceCreate failed in VTL-1 failed");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(v5[9], v10, 12, 10, (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids, v9);
  }
  return v11;
}
