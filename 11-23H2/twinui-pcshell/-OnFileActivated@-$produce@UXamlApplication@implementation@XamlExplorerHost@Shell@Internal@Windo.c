/*
 * XREFs of ?OnFileActivated@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@@impl@winrt@@UEAAHPEAX@Z @ 0x1804F6250
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?OnFileActivated@?$IApplicationOverridesT@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@Xaml@UI@Windows@winrt@@QEBA@AEBUFileActivatedEventArgs@Activation@ApplicationModel@45@@Z @ 0x1804F619C (-OnFileActivated@-$IApplicationOverridesT@UXamlApplication@implementation@XamlExplorerHost@Shell.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileActivated(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v3 = a2;
    winrt::Windows::UI::Xaml::IApplicationOverridesT<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication>::OnFileActivated(
      (a1 - 40) & -(__int64)(a1 != 0),
      &v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
