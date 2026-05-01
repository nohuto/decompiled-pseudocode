/*
 * XREFs of ?HasKey@?$produce@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEA_N@Z @ 0x1807137C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x18070A624 (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@URemoteSystem@Shell@Internal@W.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>::HasKey(
        __int64 a1,
        __int64 a2,
        bool *a3)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = (a1 - 24) & -(__int64)(a1 != 0);
  *a3 = std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::Windows::Internal::Shell::RemoteSystem>>,0>>::_Find<winrt::hstring>(
          (v3 & -(__int64)(v3 != -40)) + 48,
          (__int64)&v5) != *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x30);
  return 0LL;
}
