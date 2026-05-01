/*
 * XREFs of ?GetMany@?$vector_view_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@Uhstring@winrt@@@2@@Z @ 0x1806FAAC4
 * Callers:
 *     ?GetMany@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x1806FA890 (-GetMany@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstrin.c)
 *     ?GetMany@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVectorView@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x1806FA950 (-GetMany@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allo_ea_1806FA950.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

__int64 __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v8; // esi
  __int64 v9; // rax
  volatile signed __int32 **v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // ebp
  winrt::impl **i; // rbx

  v3 = a2;
  v4 = a1 + 16;
  v5 = a1 + 8;
  if ( !a1 )
  {
    v5 = 48LL;
    v4 = 56LL;
  }
  if ( a2 >= (unsigned int)((__int64)(*(_QWORD *)v4 - *(_QWORD *)v5) >> 3) )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 8);
  v9 = a1 + 8;
  v10 = *(volatile signed __int32 ***)a3;
  v11 = a1 + 16;
  if ( !a1 )
  {
    v11 = 56LL;
    v9 = 48LL;
  }
  v12 = *(_QWORD *)v11 - *(_QWORD *)v9;
  v13 = a1 + 8;
  v14 = (v12 >> 3) - v3;
  if ( v8 >= v14 )
    v8 = v14;
  v15 = v8;
  if ( !a1 )
    v13 = 48LL;
  if ( v8 )
  {
    for ( i = (winrt::impl **)(*(_QWORD *)v13 + 8 * v3); ; ++i )
    {
      winrt::hstring::operator=(v10++, i, a3);
      if ( !--v15 )
        break;
    }
  }
  return v8;
}
