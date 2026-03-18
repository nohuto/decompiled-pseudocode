/*
 * XREFs of TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x1C0087FF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000BFF4 (RtlUnicodeStringPrintf.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x1C00132C0 (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C003EF98 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C003F0A0 (WPP_RECORDER_SF_qqq.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0043B00 (memset.c)
 *     TUNNEL_UpdateUsb4HostPowerRelations @ 0x1C00890B4 (TUNNEL_UpdateUsb4HostPowerRelations.c)
 */

__int64 __fastcall TUNNEL_EvtWorkitemPnpInterfaceNotification(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  int v7; // eax
  int v8; // esi
  _UNKNOWN **v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // [rsp+28h] [rbp-E0h]
  __int64 v17; // [rsp+30h] [rbp-D8h]
  __int16 DestinationString; // [rsp+40h] [rbp-C8h]
  struct _UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v20[9]; // [rsp+58h] [rbp-B0h] BYREF
  char v21; // [rsp+E8h] [rbp-20h] BYREF

  memset(v20, 0, 0x88uLL);
  DestinationString_8.Buffer = (wchar_t *)&v21;
  *(_QWORD *)&DestinationString_8.Length = 0x2000000LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C0067198);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00672A8);
  v5 = *(_QWORD *)(v4 + 512);
  v6 = RtlUnicodeStringPrintf(&DestinationString_8, L"%sUSB-%p", v4, *(_QWORD *)(v3 + 24));
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2520),
        2u,
        3u,
        0x10u,
        (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids,
        v6);
LABEL_9:
    *(_DWORD *)(v5 + 24) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  }
  *((_QWORD *)&v20[1] + 1) = TUNNEL_EvtIoTargetRemoveComplete;
  *(_QWORD *)&v20[0] = 0x200000088LL;
  v20[3] = DestinationString_8;
  LODWORD(v20[4]) = 1;
  LODWORD(v20[5]) = 64;
  HIDWORD(v20[4]) = 1;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _OWORD *))(WdfFunctions_01015 + 1344))(
         WdfDriverGlobals,
         *(_QWORD *)(v5 + 8),
         v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2520),
        2u,
        3u,
        0x11u,
        (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids,
        v7);
    if ( SBYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      DestinationString = *(_WORD *)(v3 + 2468);
      LOWORD(v17) = *(_WORD *)(v3 + 2464);
      LODWORD(v16) = v8;
      McTemplateK0pqhhh_EtwWriteTransfer(
        (__int64)v9,
        &USBHUB3_ETW_EVENT_USB4_POWER_RELATIONS_FAILURE,
        0LL,
        *(_QWORD *)(v3 + 248),
        v16,
        v17,
        *(_WORD *)(v3 + 2466),
        DestinationString);
    }
    goto LABEL_9;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 2744),
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 16),
    0LL);
  if ( *(_DWORD *)(v5 + 24) == 1 )
    *(_DWORD *)(v5 + 24) = 2;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1432))(
          WdfDriverGlobals,
          *(_QWORD *)(v5 + 8));
  v11 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 32) = v10;
  *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v11,
                off_1C00670A8)
            + 8) = v5;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 16));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 2744));
  TUNNEL_UpdateUsb4HostPowerRelations(v3, v5);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(v13, v12, v14, *(_QWORD *)(v3 + 248), *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 32));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(*(_QWORD *)(v3 + 2520), v12, v14, 0x12u, v16);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
