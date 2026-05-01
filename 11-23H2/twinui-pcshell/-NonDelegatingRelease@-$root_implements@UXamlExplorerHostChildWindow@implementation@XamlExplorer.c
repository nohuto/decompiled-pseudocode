/*
 * XREFs of ?NonDelegatingRelease@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1801A0AA8
 * Callers:
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@X@impl@winrt@@UEAAIXZ @ 0x1801A0A90 (-Release@-$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Inter.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAIXZ @ 0x1804F7C10 (-Release@-$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos_ea_1804F7C10.c)
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1804F8550 (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1801A0B04 (-subtract_reference@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::NonDelegatingRelease(
        volatile __int64 *a1)
{
  unsigned int v2; // edi
  __int64 v4; // r8

  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::subtract_reference(a1);
  if ( !v2 )
  {
    v4 = _InterlockedExchange64(a1 + 1, 1LL);
    if ( a1 )
      (*(void (__fastcall **)(volatile __int64 *, __int64, __int64))(*a1 + 8))(a1, 1LL, v4);
  }
  return v2;
}
