/*
 * XREFs of ?QueryInterface@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804FD870
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180015598 (-query_interface@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,void>::QueryInterface(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64, __int64 *); // rcx

  v5 = (a1 - 32) & ((unsigned __int128)-(__int128)a1 >> 64);
  result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::query_interface(
             (volatile signed __int64 *)v5,
             a2,
             a3);
  if ( (_DWORD)result == -2147467262 )
  {
    v7 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(v5 + 8);
    if ( v7 )
      return (**v7)(v7, a2, a3);
  }
  return result;
}
