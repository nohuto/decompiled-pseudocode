/*
 * XREFs of ?IsDisconnecting@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUguid@6@@Z @ 0x180721D50
 * Callers:
 *     ?IsDisconnecting@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUguid@3@PEA_N@Z @ 0x180721CF0 (-IsDisconnecting@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x18070BA54 (--$find@X@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implem.c)
 *     ?GetSystemIdForDesktop@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUguid@6@@Z @ 0x18072FEE8 (-GetSystemIdForDesktop@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?IsDisconnecting@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180733A14 (-IsDisconnecting@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsDisconnecting(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this,
        const struct winrt::guid *a2)
{
  _QWORD *v4; // rax
  bool IsDisconnecting; // bl
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  volatile signed __int32 *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 104LL))(
                   *((_QWORD *)this + 5),
                   v7);
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetSystemIdForDesktop(*v4, &v9, a2);
  IsDisconnecting = 0;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::find<void>(
    (_QWORD *)this + 9,
    &v10,
    (__int64 *)&v9);
  if ( v10 != *((_QWORD *)this + 10) )
    IsDisconnecting = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsDisconnecting(*(winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **)(v10 + 24));
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  return IsDisconnecting;
}
