/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18071D1D0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteSessionWindowManager_::_1_::dtor$64 @ 0x1802BAC08 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Remot_ea_1802BAC08.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18071CF38 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$shared_ptr@URemoteSe.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>::~list<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x28uLL);
}
