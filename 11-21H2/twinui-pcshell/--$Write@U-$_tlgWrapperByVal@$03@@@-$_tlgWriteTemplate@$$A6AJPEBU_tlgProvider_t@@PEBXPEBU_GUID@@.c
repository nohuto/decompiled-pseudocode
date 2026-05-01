/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180348A04
 * Callers:
 *     ??$HideInitiatedWhileAnotherHideInProgress@AEAW4SearchAppState@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4SearchAppState@@@Z @ 0x1801990AC (--$HideInitiatedWhileAnotherHideInProgress@AEAW4SearchAppState@@@SearchAppExperienceManagerTelem.c)
 *     ??$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry@@SAXAEB_N@Z @ 0x18019A1A8 (--$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry.c)
 *     ?OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FD1C (-OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     _lambda_7e117e86fbbf7389a420f5618d976754_::operator()_winrt::Windows::Foundation::IInspectable_ @ 0x1801C163C (_lambda_7e117e86fbbf7389a420f5618d976754_--operator()_winrt--Windows--Foundation--IInspectable_.c)
 *     ??$WebExperienceInstallerPackageInstallWaitComplete@AEBW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@DashboardManagerTelemetry@@SAXAEBW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z @ 0x1801C1ED4 (--$WebExperienceInstallerPackageInstallWaitComplete@AEBW4AppInstallState@InstallControl@Preview@.c)
 *     ??$WebExperienceInstallerRestartingPackageInstall@W4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@DashboardManagerTelemetry@@SAX$$QEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z @ 0x1801C1F18 (--$WebExperienceInstallerRestartingPackageInstall@W4AppInstallState@InstallControl@Preview@Store.c)
 *     ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18038F478 (-OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 4;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 3u, &v6);
}
