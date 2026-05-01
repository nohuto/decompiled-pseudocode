/*
 * XREFs of ?subtract_reference@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAIXZ @ 0x1801A8E80
 * Callers:
 *     ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x1801A8E40 (-Release@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_1801A8E40.c)
 *     ??1?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@MEAA@XZ @ 0x1804F53CC (--1-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 *     ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x1804F6A10 (-Release@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_1804F6A10.c)
 *     ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAIXZ @ 0x1804F6A80 (-Release@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_1804F6A80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::subtract_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 16);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v1 - 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v1));
}
