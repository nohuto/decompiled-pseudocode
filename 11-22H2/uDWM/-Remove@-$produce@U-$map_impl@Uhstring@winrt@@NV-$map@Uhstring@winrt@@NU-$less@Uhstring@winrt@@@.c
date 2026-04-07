/*
 * XREFs of ?Remove@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1800FEED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$map_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@N@winrt@@QEAAXAEBUhstring@2@@Z @ 0x1800FEE0C (-Remove@-$map_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>>::Remove(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = a1 + 24;
  if ( !a1 )
    v3 = 40LL;
  try
  {
    winrt::map_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::hstring,double>::Remove(
      (volatile signed __int32 *)v3,
      (__int64)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
