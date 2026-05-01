/*
 * XREFs of ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x1801A0464
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___::Run @ 0x1801BF060 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x18009355C (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1801F045C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ.c)
 *     ?UndockedSearchFullTrustAppNotInstalled@StartWindowTelemetry@@SAXXZ @ 0x1802014AC (-UndockedSearchFullTrustAppNotInstalled@StartWindowTelemetry@@SAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x1804FF968 (--$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ??$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x1804FFA08 (--$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ?UndockedSearchNotInstalled@StartWindowTelemetry@@SAXXZ @ 0x1805026D4 (-UndockedSearchNotInstalled@StartWindowTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void XamlLauncher::LogErrorIfStartOrCortanaArentInstalled(void)
{
  __int64 v0; // rbx
  __int64 v1; // rbx
  __int64 (__fastcall *v2)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD, __int64, _BYTE *); // rdi
  const struct winrt::param::hstring *v5; // rax
  bool v6; // bl
  const struct winrt::param::hstring *v7; // rax
  bool v8; // bl
  _BYTE v9[4]; // [rsp+30h] [rbp-50h] BYREF
  int v10; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  void *v12; // [rsp+40h] [rbp-40h] BYREF
  void *v13; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h]

  v11 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Application",
    0x2Du,
    0x2Cu);
  v0 = v15;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  if ( (int)RoGetActivationFactory(v0, &GUID_07adcc9a_e505_48c2_b471_45af8561f6af, &v11) >= 0 )
  {
    v9[0] = 0;
    v1 = v11;
    v2 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v11 + 184LL);
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
      0x38u,
      0x37u);
    v10 = v2(v1, 0LL, v15, v9);
    if ( v10 < 0 || !v9[0] )
      StartWindowTelemetry::ShellExperienceHostNotInstalled<long const &>(&v10);
    v3 = v11;
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v11 + 184LL);
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy!App",
      0x3Cu,
      0x3Bu);
    v10 = v4(v3, 0LL, v15, v9);
    if ( v10 < 0 || !v9[0] )
      StartWindowTelemetry::StartMenuExperienceHostNotInstalled<long const &>(&v10);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53852258>::GetImpl'::`2'::impl) )
    {
      v10 = 1;
      hstringHeader.Reserved.Reserved1 = *(PVOID *)winrt::hstring::hstring(
                                                     (winrt::hstring *)&v13,
                                                     L"com.microsoft.windows.app.searchMI");
      v5 = winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
             (const struct winrt::param::hstring *)&v12,
             (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)&hstringHeader,
             (__int64)&v10);
      v6 = wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(v5);
      winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)&v12);
      winrt::hstring::~hstring(&v13);
      if ( !v6 )
        StartWindowTelemetry::UndockedSearchFullTrustAppNotInstalled();
    }
    v10 = 1;
    hstringHeader.Reserved.Reserved1 = *(PVOID *)winrt::hstring::hstring(
                                                   (winrt::hstring *)&v12,
                                                   L"com.microsoft.windows.app.search");
    v7 = winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
           (const struct winrt::param::hstring *)&v13,
           (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)&hstringHeader,
           (__int64)&v10);
    v8 = wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(v7);
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)&v13);
    winrt::hstring::~hstring(&v12);
    if ( !v8 )
      StartWindowTelemetry::UndockedSearchNotInstalled();
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
}
