/*
 * XREFs of ?ClaimForeground@XamlLauncherState@@UEAAXXZ @ 0x1804503F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncherState::ClaimForeground(XamlLauncherState *this)
{
  _DWORD *v2; // rcx
  int v3; // eax
  int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v2 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                   (__int64)this,
                   _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
  {
    v3 = *((_DWORD *)this + 10);
    v8 = 0;
    v4 = v3;
    v7 = 4;
    v6 = &v4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1806B5A86, 0LL, 0LL, 3u, &v5);
  }
  if ( *((_DWORD *)this + 10) == 5 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 112LL))(*((_QWORD *)this + 8));
  }
  else if ( *((_DWORD *)this + 10) == 16 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 144LL))(*((_QWORD *)this + 7));
  }
}
