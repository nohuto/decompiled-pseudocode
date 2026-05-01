/*
 * XREFs of ?UndockedSearchAppExperienceManager_ActivationTimeoutPolicyDisabled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18009E4D8
 * Callers:
 *     ?DisableActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009DF40 (-DisableActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivationTimeoutPolicyDisabled(
        __int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                   a1,
                   _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_1806AC3FD, 0LL, 0LL, 2u, &v2);
}
