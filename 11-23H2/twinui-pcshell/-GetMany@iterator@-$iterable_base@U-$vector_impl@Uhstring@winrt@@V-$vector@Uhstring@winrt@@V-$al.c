/*
 * XREFs of ?GetMany@iterator@?$iterable_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@Uhstring@winrt@@@3@@Z @ 0x1806FAB88
 * Callers:
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@U?$IIterator@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x1806FAA10 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@w.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x18052E98C (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::iterator::GetMany(
        _QWORD *a1,
        __m128i *a2)
{
  unsigned int v4; // r8d
  winrt::impl **v5; // rsi
  unsigned int v6; // edi
  unsigned int v7; // r14d
  volatile signed __int32 **v8; // rbx
  __int64 result; // rax

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 3),
    (const struct winrt::impl::collection_version *)(a1[4] + 40LL));
  v5 = (winrt::impl **)a1[5];
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  if ( v6 >= (unsigned int)((__int64)(a1[6] - (_QWORD)v5) >> 3) )
    v6 = (__int64)(a1[6] - (_QWORD)v5) >> 3;
  v7 = v6;
  if ( v6 )
  {
    v8 = (volatile signed __int32 **)a2->m128i_i64[0];
    while ( 1 )
    {
      winrt::hstring::operator=(v8++, v5, v4);
      if ( !--v7 )
        break;
      ++v5;
    }
  }
  result = v6;
  a1[5] += 8LL * v6;
  return result;
}
