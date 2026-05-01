/*
 * XREFs of ?Insert@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAXPEA_N@Z @ 0x180713D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Insert@?$map_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@@winrt@@QEAA_NAEB_KAEBUhstring@2@@Z @ 0x180713B5C (-Insert@-$map_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$all.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>>::Insert(
        __int64 a1,
        unsigned __int64 a2,
        winrt::impl *a3,
        bool *a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  winrt::impl *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v5 = a1 + 24;
  if ( !a1 )
    v5 = 40LL;
  try
  {
    *a4 = winrt::map_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned __int64,winrt::hstring>::Insert(
            (volatile signed __int32 *)v5,
            &v8,
            &v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
