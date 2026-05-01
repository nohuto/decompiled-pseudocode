/*
 * XREFs of ?Release@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@Microsoft@8@X@impl@winrt@@UEAAIXZ @ 0x180046170
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_reference@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@IEAAIXZ @ 0x1800461F0 (-subtract_reference@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::IApplicationOverrides,void>::Release(
        unsigned __int64 a1)
{
  volatile __int64 *v1; // rbx
  unsigned int v2; // edi

  v1 = (volatile __int64 *)((a1 - 40) & ((unsigned __int128)-(__int128)a1 >> 64));
  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::subtract_reference(v1);
  if ( !v2 )
  {
    _InterlockedExchange64(v1 + 2, 1LL);
    if ( v1 )
      (*(void (__fastcall **)(volatile __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return v2;
}
