/*
 * XREFs of ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x180086E1C
 * Callers:
 *     ?EnableSystemResourceManagerForCurrentProcess_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18002DC14 (-EnableSystemResourceManagerForCurrentProcess_WASDK@implementation@WASDK@XamlExplorerHost@Shell@.c)
 *     ?EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x180085D5C (-EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x180085ECC (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 *     ??0StartExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x180234B78 (--0StartExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z.c)
 *     ??0WidgetPlatformPackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x180234C50 (--0WidgetPlatformPackageHelper@@QEAA@W4PackageInstallScenario@@@Z.c)
 *     _lambda_a7ff001bd589f864b6844592adbd9d86_::operator() @ 0x180236C54 (_lambda_a7ff001bd589f864b6844592adbd9d86_--operator().c)
 *     _lambda_fa22f7386584b172c2544cf81792da3a_::operator() @ 0x1802378EC (_lambda_fa22f7386584b172c2544cf81792da3a_--operator().c)
 *     ??0Win32PrimaryAppInformation@@QEAA@PEBG@Z @ 0x1805A7220 (--0Win32PrimaryAppInformation@@QEAA@PEBG@Z.c)
 *     ?IsSameAppId@Win32PrimaryAppInformation@@QEAA_NPEAUIApplicationView@@@Z @ 0x1805A8D44 (-IsSameAppId@Win32PrimaryAppInformation@@QEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x180097E50 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
        _QWORD *a1,
        __int64 a2,
        ...)
{
  int v3; // eax
  _BYTE v5[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v6[14]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v7; // [rsp+A8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  *a1 = 0LL;
  *a1 = 0LL;
  v7 = a2;
  v6[0] = &wistd::__function::__func<_lambda_3d453455108c7f795be0d1854de3cf6b_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v6[1] = &v7;
  v6[13] = v6;
  v3 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
         a1,
         v5);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x187,
      (unsigned int)"OneCore\\Internal\\Sdk\\Inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)(unsigned int)v3,
      1);
  return a1;
}
