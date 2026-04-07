/*
 * XREFs of ?Lookup@?$map_view_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@NUcollection_version@23@@winrt@@QEBANAEBUhstring@2@@Z @ 0x1800FA688
 * Callers:
 *     ?Lookup@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAN@Z @ 0x1800FA6F0 (-Lookup@-$produce@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@.c)
 *     ?Lookup@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAN@Z @ 0x1800FA770 (-Lookup@-$produce@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhst_ea_1800FA770.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800F8CFC (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800F9734 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

double __fastcall winrt::map_view_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::hstring,double,winrt::impl::collection_version>::Lookup(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  v4 = std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Find<winrt::hstring>(
         v3,
         a2);
  v5 = a1 + 8;
  if ( !a1 )
    v5 = 48LL;
  if ( v4 == *(_QWORD *)v5 )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  return *(double *)(v4 + 40);
}
