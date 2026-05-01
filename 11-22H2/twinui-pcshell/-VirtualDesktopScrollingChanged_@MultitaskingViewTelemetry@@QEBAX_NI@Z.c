/*
 * XREFs of ?VirtualDesktopScrollingChanged_@MultitaskingViewTelemetry@@QEBAX_NI@Z @ 0x180592ECC
 * Callers:
 *     ??$VirtualDesktopScrollingChanged@AEA_NH@MultitaskingViewTelemetry@@SAXAEA_N$$QEAH@Z @ 0x180591138 (--$VirtualDesktopScrollingChanged@AEA_NH@MultitaskingViewTelemetry@@SAXAEA_N$$QEAH@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall MultitaskingViewTelemetry::VirtualDesktopScrollingChanged_(
        MultitaskingViewTelemetry *this,
        char a2,
        int a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  char v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  char *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v5 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    if ( tlgKeywordOn((__int64)v5, 0x200000000000LL) )
    {
      v15 = 0;
      v12 = 0;
      v13 = &v8;
      v14 = 4;
      v10 = &v7;
      v8 = a3;
      v7 = a2;
      v11 = 1;
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1808672D4, 0LL, 0LL, 4u, &v9);
    }
  }
}
