/*
 * XREFs of ??0WidgetPlatformPackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x180234C50
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008610C (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x180086E1C (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??0LockScreenWidgetPackageHelperBase@@QEAA@W4PackageInstallScenario@@PEBG1UPackageVersion@ApplicationModel@Windows@winrt@@1@Z @ 0x180234B0C (--0LockScreenWidgetPackageHelperBase@@QEAA@W4PackageInstallScenario@@PEBG1UPackageVersion@Applic.c)
 */

_QWORD *__fastcall WidgetPlatformPackageHelper::WidgetPlatformPackageHelper(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  void *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  v2 = wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
         &v5,
         (__int64)L"%SystemRoot%\\InboxApps\\Microsoft.WidgetsPlatformRuntime_8wekyb3d8bbwe.msixbundle");
  LockScreenWidgetPackageHelperBase::LockScreenWidgetPackageHelperBase(
    (__int64)a1,
    v3,
    (__int64)L"9N3RK8ZV2ZR8",
    (__int64)L"Microsoft.WidgetsPlatformRuntime_8wekyb3d8bbwe",
    262145LL,
    (_WORD *)*v2);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v5);
  *a1 = &WidgetPlatformPackageHelper::`vftable';
  return a1;
}
