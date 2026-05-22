/*
 * XREFs of ?OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z @ 0x1801B1BF8
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801B1550 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall KeyboardProcessorTelemetry::OnKeyPress(KeyboardProcessorTelemetry *this)
{
  int v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_180266498 > 5
    && (qword_1802664A8 & 0x200000000000LL) != 0
    && (qword_1802664B0 & 0x200000000000LL) == qword_1802664B0 )
  {
    v2 = *(_DWORD *)this;
    v4 = &v2;
    v6 = 0;
    v5 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180266498,
      (unsigned __int8 *)dword_18022866D,
      0LL,
      0LL,
      3u,
      &v3);
  }
  *(_DWORD *)this = 0;
}
