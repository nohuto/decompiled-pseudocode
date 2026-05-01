/*
 * XREFs of ??$StartDidntOpenIn10Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z @ 0x18044E18C
 * Callers:
 *     _lambda_eb5df14b175842175d09e10e311e8c49_::_lambda_invoker_cdecl_ @ 0x1801ACDC0 (_lambda_eb5df14b175842175d09e10e311e8c49_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall CommonStartTelemetry::StartDidntOpenIn10Seconds<unsigned int>(int *a1)
{
  __int64 *v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<LauncherTelemetryLogging>::get(
         (__int64)a1,
         _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      v11 = 0;
      v7 = v5;
      v10 = 4;
      v9 = &v7;
      LOBYTE(v2) = tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1806B54CF, 0LL, 0LL, 3u, &v8);
    }
  }
  return (char)v2;
}
