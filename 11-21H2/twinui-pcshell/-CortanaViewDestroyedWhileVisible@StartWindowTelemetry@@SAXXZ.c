/*
 * XREFs of ?CortanaViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x180450538
 * Callers:
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18012E2A0 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall StartWindowTelemetry::CortanaViewDestroyedWhileVisible(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                   a1,
                   _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1806B5C76, 0LL, 0LL, 2u, &v3);
  }
}
