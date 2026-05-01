/*
 * XREFs of ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x18069F790
 * Callers:
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x18069F680 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1806A3964 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54F0 (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     ?RequestorPackageAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A553C (-RequestorPackageAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?RequestorProcessAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A5588 (-RequestorProcessAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?RequestorWindowAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A55D4 (-RequestorWindowAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@.c)
 */

char __fastcall AreEquivalentPinSources(_QWORD *a1, _QWORD *a2)
{
  __m128i v4; // xmm6
  __m128i v5; // xmm1
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  __m128i v11; // xmm6
  __m128i *v12; // rax
  bool v13; // al
  std::_Ref_count_base *v14; // rcx
  bool v15; // si
  std::_Ref_count_base *v16; // rcx
  _BYTE v17[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v18[16]; // [rsp+30h] [rbp-20h] BYREF

  v4 = *(__m128i *)PinRequestContext::RequestorImagePath(*a2, v18);
  v5 = *(__m128i *)PinRequestContext::RequestorImagePath(*a1, v17);
  if ( std::_Traits_equal<std::char_traits<unsigned short>>(
         v5.m128i_i64[0],
         _mm_srli_si128(v5, 8).m128i_i64[0],
         v4.m128i_i64[0],
         _mm_srli_si128(v4, 8).m128i_i64[0]) )
  {
    v6 = (std::_Ref_count_base *)a1[1];
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    v7 = (std::_Ref_count_base *)a2[1];
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    return 1;
  }
  if ( *(_QWORD *)(PinRequestContext::RequestorPackageAppId(*a1, v17) + 8)
    || *(_QWORD *)(PinRequestContext::RequestorPackageAppId(*a2, v17) + 8) )
  {
    v11 = *(__m128i *)PinRequestContext::RequestorPackageAppId(*a2, v17);
    v12 = (__m128i *)PinRequestContext::RequestorPackageAppId(*a1, v18);
  }
  else if ( *(_QWORD *)(PinRequestContext::RequestorWindowAppId(*a1, v17) + 8)
         || *(_QWORD *)(PinRequestContext::RequestorWindowAppId(*a2, v17) + 8) )
  {
    v11 = *(__m128i *)PinRequestContext::RequestorWindowAppId(*a2, v17);
    v12 = (__m128i *)PinRequestContext::RequestorWindowAppId(*a1, v18);
  }
  else
  {
    if ( !*(_QWORD *)(PinRequestContext::RequestorProcessAppId(*a1, v17) + 8)
      && !*(_QWORD *)(PinRequestContext::RequestorProcessAppId(*a2, v17) + 8) )
    {
      v9 = (std::_Ref_count_base *)a1[1];
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      v10 = (std::_Ref_count_base *)a2[1];
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      return 0;
    }
    v11 = *(__m128i *)PinRequestContext::RequestorProcessAppId(*a2, v17);
    v12 = (__m128i *)PinRequestContext::RequestorProcessAppId(*a1, v18);
  }
  v13 = std::_Traits_equal<std::char_traits<unsigned short>>(
          v12->m128i_i64[0],
          _mm_srli_si128(*v12, 8).m128i_i64[0],
          v11.m128i_i64[0],
          _mm_srli_si128(v11, 8).m128i_i64[0]);
  v14 = (std::_Ref_count_base *)a1[1];
  v15 = v13;
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  v16 = (std::_Ref_count_base *)a2[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  return v15;
}
