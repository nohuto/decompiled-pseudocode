/*
 * XREFs of ?HasKey@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEA_N@Z @ 0x1807135E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find@I@?$_Tree@V?$_Tmap_traits@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@AEBI@Z @ 0x18070A5E8 (--$_Find@I@-$_Tree@V-$_Tmap_traits@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUhs.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>>::HasKey(
        __int64 a1,
        unsigned int a2,
        bool *a3)
{
  __int64 v3; // rdi
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  *a3 = std::_Tree<std::_Tmap_traits<unsigned int,winrt::hstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,winrt::hstring>>,0>>::_Find<unsigned int>(
          (__int64 *)((v3 & -(__int64)(v3 != -40)) + 48),
          &v5) != *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x30);
  return 0LL;
}
