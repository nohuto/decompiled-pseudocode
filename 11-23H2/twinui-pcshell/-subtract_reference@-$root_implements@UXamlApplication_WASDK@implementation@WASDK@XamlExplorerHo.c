/*
 * XREFs of ?subtract_reference@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@IEAAIXZ @ 0x1800461F0
 * Callers:
 *     ?Release@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@Microsoft@8@X@impl@winrt@@UEAAIXZ @ 0x180046170 (-Release@-$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Inter.c)
 *     ?Release@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication_WASDK@345678@X@impl@winrt@@UEAAIXZ @ 0x1800461B0 (-Release@-$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHos_ea_1800461B0.c)
 *     ??1?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@MEAA@XZ @ 0x1804FD0E0 (--1-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal.c)
 *     ?Release@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@X@impl@winrt@@UEAAIXZ @ 0x1804FD900 (-Release@-$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHos_ea_1804FD900.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::subtract_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // edx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 16);
  do
  {
    if ( v1 < 0 )
      return winrt::impl::weak_ref<1,1>::decrement_strong(2 * v1);
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v1 - 1, v1);
  }
  while ( v4 != v1 );
  return v3;
}
