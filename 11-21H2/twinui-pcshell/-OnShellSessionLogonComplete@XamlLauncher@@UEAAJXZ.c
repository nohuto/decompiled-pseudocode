/*
 * XREFs of ?OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ @ 0x18044B7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x180065EFC (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall XamlLauncher::OnShellSessionLogonComplete(XamlLauncher *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                   (__int64)this,
                   _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 4u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1806B3ECD, 0LL, 0LL, 2u, &v4);
  *((_BYTE *)XamlLauncher::s_pLauncher + 325) = 1;
  XamlLauncher::ConsiderShowStartAutomatically((XamlLauncher *)((char *)this - 88));
  return 0LL;
}
