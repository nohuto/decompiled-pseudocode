/*
 * XREFs of ?GetMany@?$vector_view_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@URect@Foundation@Windows@winrt@@@2@@Z @ 0x1805238C4
 * Callers:
 *     ?GetMany@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAURect@Foundation@Windows@3@PEAI@Z @ 0x1805236D0 (-GetMany@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Win.c)
 *     ?GetMany@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAURect@Foundation@Windows@3@PEAI@Z @ 0x180523750 (-GetMany@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@F_ea_180523750.c)
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

__int64 __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect,winrt::impl::collection_version>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // edx

  v3 = a2;
  v4 = a1 + 16;
  v5 = a1 + 8;
  if ( !a1 )
    v5 = 48LL;
  if ( !a1 )
    v4 = 56LL;
  if ( a2 >= (unsigned int)((__int64)(*(_QWORD *)v4 - *(_QWORD *)v5) >> 4) )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 8);
  v9 = a1 + 8;
  v10 = a1 + 16;
  if ( !a1 )
  {
    v9 = 48LL;
    v10 = 56LL;
  }
  v11 = *(_QWORD *)v10 - *(_QWORD *)v9;
  v12 = a1 + 8;
  v13 = (v11 >> 4) - v3;
  if ( v8 >= v13 )
    v8 = v13;
  if ( !a1 )
    v12 = 48LL;
  if ( v8 )
    memmove_0(*(void **)a3, (const void *)(*(_QWORD *)v12 + 16 * v3), 16LL * v8);
  return v8;
}
