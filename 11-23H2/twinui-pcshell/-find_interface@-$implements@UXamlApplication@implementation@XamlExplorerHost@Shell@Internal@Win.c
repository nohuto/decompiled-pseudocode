/*
 * XREFs of ?find_interface@?$implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D8970
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r10
  __int64 v7; // rax
  __int64 v9; // rax

  if ( (unsigned __int8)winrt::operator==(
                          a2,
                          &winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplication>) )
  {
    v9 = v3 + 24;
    return v9 & -(__int64)(v3 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(
                          v2,
                          &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>) )
  {
    v9 = v3 + 32;
    return v9 & -(__int64)(v3 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(v4, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IApplicationOverrides>) )
  {
    v9 = v3 + 40;
    return v9 & -(__int64)(v3 != 0);
  }
  v7 = *v6 - winrt::impl::guid_v<winrt::Windows::UI::Xaml::IApplicationOverrides2>;
  if ( *v6 == winrt::impl::guid_v<winrt::Windows::UI::Xaml::IApplicationOverrides2> )
    v7 = v6[1] + 0x7627E402CBFBB13ALL;
  if ( !v7 )
  {
    v9 = v3 + 48;
    return v9 & -(__int64)(v3 != 0);
  }
  return v5;
}
