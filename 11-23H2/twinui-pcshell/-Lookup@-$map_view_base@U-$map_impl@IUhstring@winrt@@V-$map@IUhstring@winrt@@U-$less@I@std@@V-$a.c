/*
 * XREFs of ?Lookup@?$map_view_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@IUhstring@3@Ucollection_version@23@@winrt@@QEBA?AUhstring@2@AEBI@Z @ 0x1807158DC
 * Callers:
 *     ?Lookup@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x180715A70 (-Lookup@-$produce@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocat.c)
 *     ?Lookup@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x180715B00 (-Lookup@-$produce@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@st_ea_180715B00.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??$_Find@I@?$_Tree@V?$_Tmap_traits@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBIUhstring@winrt@@@std@@PEAX@1@AEBI@Z @ 0x18070A5E8 (--$_Find@I@-$_Tree@V-$_Tmap_traits@IUhstring@winrt@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUhs.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::map_view_base<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned int,winrt::hstring,winrt::impl::collection_version>::Lookup(
        __int64 a1,
        struct winrt::impl::hstring_header **a2,
        unsigned int *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  struct winrt::impl::hstring_header *v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a1 + 8;
  if ( !a1 )
    v5 = 48LL;
  v6 = std::_Tree<std::_Tmap_traits<unsigned int,winrt::hstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,winrt::hstring>>,0>>::_Find<unsigned int>(
         (__int64 *)v5,
         a3);
  v9 = a1 + 8;
  if ( !a1 )
    v9 = 48LL;
  if ( v6 == *(_QWORD *)v9 )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  *a2 = winrt::impl::duplicate_hstring(*(winrt::impl **)(v6 + 40), v7, v8);
  return a2;
}
