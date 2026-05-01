/*
 * XREFs of ??0?$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010EF9C
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010ED44 (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt@@@Z @ 0x1800AF150 (--R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt.c)
 *     ??$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@?$factory_cache_entry@UApplication@Xaml@UI@Windows@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@Z @ 0x18010E7C8 (--$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@-$factory_cache_entry@UApplication@Xaml@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>(
        _QWORD *a1)
{
  _QWORD *v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v4; // [rsp+40h] [rbp+18h]

  a1[3] = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplication>::`vftable';
  a1[4] = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::`vftable';
  a1[5] = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::UI::Xaml::IApplicationOverrides>::`vftable';
  a1[6] = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::UI::Xaml::IApplicationOverrides2>::`vftable';
  a1[1] = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  a1[2] = 1LL;
  *a1 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>::`vftable';
  v3 = a1;
  v4 = &qword_18098E6E8;
  _InterlockedAdd64(&qword_18098E6E8, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory> )
  {
    _lambda_39ed047273c22ea9d75ce7eaed056bf5_::operator()(
      (__int64 *)&v3,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>);
    _InterlockedDecrement64(&qword_18098E6E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E6E8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>::call<_lambda_39ed047273c22ea9d75ce7eaed056bf5_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))1,
      (__int64 *)&v3);
  }
  return a1;
}
