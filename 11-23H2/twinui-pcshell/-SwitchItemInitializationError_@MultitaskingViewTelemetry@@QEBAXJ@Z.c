/*
 * XREFs of ?SwitchItemInitializationError_@MultitaskingViewTelemetry@@QEBAXJ@Z @ 0x180571FF8
 * Callers:
 *     ??$SwitchItemInitializationError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z @ 0x180571D7C (--$SwitchItemInitializationError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall MultitaskingViewTelemetry::SwitchItemInitializationError_(MultitaskingViewTelemetry *this, int a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v3 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = a2;
      v8 = 4;
      tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18086693F, 0LL, 0LL, 3u, &v6);
    }
  }
}
