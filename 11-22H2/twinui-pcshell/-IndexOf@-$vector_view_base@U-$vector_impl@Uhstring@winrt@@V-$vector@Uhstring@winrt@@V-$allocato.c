/*
 * XREFs of ?IndexOf@?$vector_view_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEBA_NAEBUhstring@2@AEAI@Z @ 0x1806FADB0
 * Callers:
 *     ?IndexOf@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x1806FACD0 (-IndexOf@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstrin.c)
 *     ?IndexOf@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVectorView@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x1806FAD40 (-IndexOf@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allo_ea_1806FAD40.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

bool __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  v7 = *(_QWORD *)v3;
  v8 = a1 + 16;
  if ( !a1 )
    v8 = 56LL;
  v9 = *(_QWORD *)v8;
  while ( v7 != v9 && !(unsigned __int8)winrt::operator==(a2, v7, (__int64)a3) )
    v7 += 8LL;
  v10 = a1 + 8;
  v11 = a1 + 16;
  if ( !a1 )
    v10 = 48LL;
  v12 = v7 - *(_QWORD *)v10;
  v13 = a1 + 8;
  v14 = v12 >> 3;
  *a3 = v14;
  if ( !a1 )
  {
    v11 = 56LL;
    v13 = 48LL;
  }
  return (unsigned int)v14 < (unsigned int)((__int64)(*(_QWORD *)v11 - *(_QWORD *)v13) >> 3);
}
