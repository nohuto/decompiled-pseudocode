/*
 * XREFs of ??$_Find_unchecked1@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@Uhstring@winrt@@@std@@YA?AV?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@0@V10@V10@AEBUhstring@winrt@@U?$integral_constant@_N$0A@@0@@Z @ 0x1801E6E24
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1801EA284 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E8DE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1803D4BA8 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 */

_QWORD *__fastcall std::_Find_unchecked1<std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>,winrt::hstring>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 i; // rbx
  __m128i v8; // xmm6
  __m128i v9; // xmm1
  _QWORD *result; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  for ( i = a2; i != a3; i = v13 )
  {
    v8 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, &v11);
    v9 = *(__m128i *)std::wstring::operator std::basic_string_view<unsigned short>(i + 32, v12);
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(
           v9.m128i_i64[0],
           _mm_srli_si128(v9, 8).m128i_i64[0],
           v8.m128i_i64[0],
           _mm_srli_si128(v8, 8).m128i_i64[0]) )
    {
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(&v13);
  }
  result = a1;
  *a1 = i;
  return result;
}
