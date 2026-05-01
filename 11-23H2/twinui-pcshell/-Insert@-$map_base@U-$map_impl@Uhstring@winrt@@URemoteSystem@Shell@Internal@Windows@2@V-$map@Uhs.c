/*
 * XREFs of ?Insert@?$map_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@URemoteSystem@Shell@Internal@Windows@3@@winrt@@QEAA_NAEBUhstring@2@AEBURemoteSystem@Shell@Internal@Windows@2@@Z @ 0x180713A9C
 * Callers:
 *     ?Insert@?$produce@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX0PEA_N@Z @ 0x180713C90 (-Insert@-$produce@U-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V-$map@Uhst.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$_Emplace@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@2@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@4@@Z @ 0x18070A1A4 (--$_Emplace@AEBUhstring@winrt@@AEBURemoteSystem@Shell@Internal@Windows@2@@-$_Tree@V-$_Tmap_trait.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::map_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::Insert(
        volatile signed __int32 *a1,
        winrt::impl **a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v5; // rcx
  char v6; // bl
  winrt::Windows::Foundation::IUnknown *v7; // rcx
  __int64 v8; // rax
  bool v9; // bl
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  char v12; // [rsp+28h] [rbp-18h]
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  char v14; // [rsp+38h] [rbp-8h]

  v12 = 0;
  _InterlockedIncrement(a1);
  v5 = (__int64)(a1 + 2);
  if ( !a1 )
    v5 = 48LL;
  std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>,0>>::_Emplace<winrt::hstring const &,winrt::Windows::Internal::Shell::RemoteSystem const &>(
    (__int64 *)v5,
    (__int64)&v13,
    a2,
    a3);
  v6 = v14;
  if ( !v14 )
  {
    v7 = (winrt::Windows::Foundation::IUnknown *)(v13 + 40);
    v8 = *(_QWORD *)(v13 + 40);
    *(_QWORD *)(v13 + 40) = 0LL;
    v11 = v8;
    v12 = 1;
    winrt::Windows::Foundation::IUnknown::operator=(v7, a3);
  }
  v9 = v6 == 0;
  if ( v12 && v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  return v9;
}
