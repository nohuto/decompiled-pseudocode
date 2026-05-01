/*
 * XREFs of ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x18011D0AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___::Run @ 0x180181600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011CEA0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18011E160 (--$GetActivationFactory@V-$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Mi.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SearchNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x180449BC8 (--$SearchNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ??$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x180449C38 (--$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ??$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x180449CA8 (--$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
void XamlLauncher::LogErrorIfStartOrCortanaArentInstalled(void)
{
  __int64 v0; // rbx
  __int64 (__fastcall *v1)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, _BYTE *); // rdi
  _BYTE v8[4]; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]

  v10 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Application",
    0x2Du,
    0x2Cu);
  if ( (int)Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IApplicationStatics>>(
              v12,
              &v10) >= 0 )
  {
    v8[0] = 0;
    v0 = v10;
    v1 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v10 + 184LL);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
      0x38u,
      0x37u);
    v9 = v1(v0, 0LL, v12, v8);
    if ( v9 < 0 || !v8[0] )
      StartWindowTelemetry::ShellExperienceHostNotInstalled<long const &>(&v9);
    v2 = v10;
    v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v10 + 184LL);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy!App",
      0x3Cu,
      0x3Bu);
    v9 = v3(v2, 0LL, v12, v8);
    if ( v9 < 0 || !v8[0] )
      StartWindowTelemetry::StartMenuExperienceHostNotInstalled<long const &>(&v9);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
      1u,
      v4,
      v5);
    v6 = v10;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v10 + 184LL);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI",
      0x31u,
      0x30u);
    v9 = v7(v6, 0LL, v12, v8);
    if ( v9 < 0 || !v8[0] )
      StartWindowTelemetry::SearchNotInstalled<long const &>(&v9);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
}
