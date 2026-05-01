/*
 * XREFs of ?Remove@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x180717A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$map_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@IUhstring@3@@winrt@@QEAAXAEBI@Z @ 0x1807177D0 (-Remove@-$map_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$alloca.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>>::Remove(
        __int64 a1,
        unsigned int a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = a1 + 24;
  if ( !a1 )
    v3 = 40LL;
  try
  {
    winrt::map_base<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned int,winrt::hstring>::Remove(
      (volatile signed __int32 *)v3,
      &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
