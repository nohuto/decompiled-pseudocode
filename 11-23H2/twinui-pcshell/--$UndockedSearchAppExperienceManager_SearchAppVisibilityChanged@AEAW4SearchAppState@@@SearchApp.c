/*
 * XREFs of ??$UndockedSearchAppExperienceManager_SearchAppVisibilityChanged@AEAW4SearchAppState@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4SearchAppState@@@Z @ 0x180047AE0
 * Callers:
 *     ?OnViewVisibilityChanged@UndockedSearchAppExperienceManager@@AEAAXAEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUViewVisibilityChangedEventArgs@3456@@Z @ 0x180047A1C (-OnViewVisibilityChanged@UndockedSearchAppExperienceManager@@AEAAXAEBUViewCoordinator@Shell@UI@W.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SearchAppVisibilityChanged<enum SearchAppState &>(
        int *a1)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  int v4; // eax
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  result = wil::details::static_lazy<SearchAppLauncherLogging>::get(
             a1,
             _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(result + 8);
  if ( *v3 > 5u )
  {
    v4 = *a1;
    v9 = 0;
    v5 = v4;
    v8 = 4;
    v7 = &v5;
    return tlgWriteTransfer_EventWriteTransfer((int)v3, (int)&dword_180852495, 0, 0, 3u, &v6);
  }
  return result;
}
