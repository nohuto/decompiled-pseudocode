/*
 * XREFs of UsbDevice_UpdateCompletion @ 0x1C0018310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0010E7C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x1C0011110 (WPP_RECORDER_SF_dqD.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001843C (UsbDevice_UpdateUsbDevice.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dqDL @ 0x1C0047C1C (WPP_RECORDER_SF_dqDL.c)
 */

__int64 __fastcall UsbDevice_UpdateCompletion(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r14
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rsi
  char v10; // cl
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-78h]
  _OWORD v14[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+70h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 424);
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  LOWORD(v14[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    v5,
    v14);
  v9 = *((_QWORD *)&v14[0] + 1);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        4u,
        0xCu,
        0x1Du,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        *(unsigned __int8 *)(v2 + 135),
        *(_QWORD *)v2);
    goto LABEL_13;
  }
  v10 = *(_BYTE *)(a1 + 60);
  if ( v10 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dqDL(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v7, v8);
      v10 = *(_BYTE *)(a1 + 60);
    }
    if ( v10 == 29 )
      *(_DWORD *)(v9 + 56) |= 1u;
LABEL_13:
    v11 = 3221225473LL;
    goto LABEL_6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL), v6, *(unsigned __int8 *)(a1 + 61), 0x1Eu, v13);
  UsbDevice_UpdateUsbDevice(v2, v9);
  v11 = 0LL;
LABEL_6:
  *(_QWORD *)(v2 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v5,
           v11);
}
