/*
 * XREFs of ??1?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@QEAA@XZ @ 0x18071D1FC
 * Callers:
 *     ?GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AUAppWindowRemoteDesktopProperties@3456@_K@Z @ 0x1800BDAE0 (-GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

void __fastcall std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>::~pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>(
        volatile signed __int32 **a1)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(a1 + 1);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
}
