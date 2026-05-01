/*
 * XREFs of ?UndockedSearchAppExperienceManager_LastResortSuspensionTimerCanceled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x180062F40
 * Callers:
 *     ?CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B4AA0 (-CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_LastResortSuspensionTimerCanceled(
        __int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_DWORD **)(wil::details::static_lazy<SearchAppLauncherLogging>::get(
                      a1,
                      _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v1, (int)&dword_1808544EC, 0, 0, 2u, &v2);
}
