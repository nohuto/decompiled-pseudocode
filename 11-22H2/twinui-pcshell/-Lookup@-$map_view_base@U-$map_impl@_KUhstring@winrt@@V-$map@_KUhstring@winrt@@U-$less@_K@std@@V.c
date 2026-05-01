/*
 * XREFs of ?Lookup@?$map_view_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@Ucollection_version@23@@winrt@@QEBA?AUhstring@2@AEB_K@Z @ 0x1807159E0
 * Callers:
 *     ?Lookup@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x180715CD0 (-Lookup@-$produce@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$allo.c)
 *     ?Lookup@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x180715D60 (-Lookup@-$produce@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K_ea_180715D60.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??$_Find@_K@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@1@AEB_K@Z @ 0x18070A66C (--$_Find@_K@-$_Tree@V-$_Tmap_traits@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::map_view_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned __int64,winrt::hstring,winrt::impl::collection_version>::Lookup(
        __int64 a1,
        struct winrt::impl::hstring_header **a2,
        unsigned __int64 *a3)
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
  v6 = std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Find<unsigned __int64>(
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
