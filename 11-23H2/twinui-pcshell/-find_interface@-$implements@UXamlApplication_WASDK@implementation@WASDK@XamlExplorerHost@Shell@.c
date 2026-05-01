/*
 * XREFs of ?find_interface@?$implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18002E590
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v7; // rax

  if ( (unsigned __int8)winrt::operator==(
                          a2,
                          &winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDK>) )
  {
    v7 = v3 + 24;
    return v7 & -(__int64)(v3 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(
                          v2,
                          &winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>) )
  {
    v7 = v3 + 32;
    return v7 & -(__int64)(v3 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(v4, &winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::IApplicationOverrides>) )
  {
    v7 = v3 + 40;
    return v7 & -(__int64)(v3 != 0);
  }
  return v5;
}
