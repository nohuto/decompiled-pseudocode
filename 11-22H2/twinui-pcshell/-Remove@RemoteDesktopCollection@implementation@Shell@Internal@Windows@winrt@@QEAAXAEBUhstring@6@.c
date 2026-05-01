/*
 * XREFs of ?Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18073002C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 *     ?OnRemoteSessionDisconnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@@Z @ 0x180730E80 (-OnRemoteSessionDisconnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBUhstring@winrt@@@Z @ 0x180730118 (-erase@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@V-$_Uhash_compare.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Remove(
        PSRWLOCK SRWLock,
        const struct winrt::hstring *a2)
{
  AcquireSRWLockExclusive(SRWLock);
  std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::erase(
    &SRWLock[1],
    a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
