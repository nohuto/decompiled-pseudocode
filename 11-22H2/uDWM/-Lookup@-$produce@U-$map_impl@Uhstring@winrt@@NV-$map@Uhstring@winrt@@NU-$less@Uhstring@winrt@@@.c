/*
 * XREFs of ?Lookup@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAN@Z @ 0x1800FDEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lookup@?$map_view_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@NUcollection_version@23@@winrt@@QEBANAEBUhstring@2@@Z @ 0x1800FDE48 (-Lookup@-$map_view_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@wi.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>>::Lookup(
        __int64 a1,
        __int64 a2,
        double *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = a1 + 24;
  if ( !a1 )
    v4 = 40LL;
  try
  {
    *a3 = winrt::map_view_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::hstring,double,winrt::impl::collection_version>::Lookup(
            v4,
            (__int64)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
