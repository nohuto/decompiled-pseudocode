/*
 * XREFs of TR_FreeSecureTransferSegments @ 0x1C003FAF0
 * Callers:
 *     TR_Disable_Internal @ 0x1C0001578 (TR_Disable_Internal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall TR_FreeSecureTransferSegments(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
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

  v14 = 0LL;
  v1 = a1[36];
  v18 = 0;
  v13 = 0;
  v15 = 0LL;
  v16 = v1;
  v3 = a1[22];
  v17 = 41;
  v4 = *(_QWORD *)(v3 + 24);
  v5 = a1[5];
  v19 = v4;
  v6 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v5 + 112), &v14, 48LL, &v13, 4);
  if ( v6 >= 0 )
  {
    LOBYTE(v6) = v13;
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[5] + 72LL),
          v7,
          14,
          28,
          (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids,
          v13);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v8,
            v9,
            v10,
            v12,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
            74,
            "TransferRingFreeSegments Failed");
      }
      LOBYTE(v6) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v6 )
        __debugbreak();
    }
  }
  return v6;
}
