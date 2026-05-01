/*
 * XREFs of ?safeSplitPair@stringutils@@YA?AV?$optional@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1806E47A4
 * Callers:
 *     api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_0 @ 0x1806E1524 (api_alchemy_config--_anonymous_namespace_--specifiers--specifiers_0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1801AF188 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?split@stringutils@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1806E4BF8 (-split@stringutils@@YA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

__int64 __fastcall stringutils::safeSplitPair(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm3
  __int128 v8; // xmm2
  __m128i si128; // xmm0
  _QWORD v11[5]; // [rsp+28h] [rbp-31h] BYREF
  _OWORD v12[2]; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v13[2]; // [rsp+70h] [rbp+17h] BYREF

  v11[3] = a1;
  stringutils::split(v11, a2, a3);
  v4 = v11[0];
  if ( ((v11[1] - v11[0]) & 0xFFFFFFFFFFFFFFE0uLL) == 0x40 )
  {
    v5 = *(_OWORD *)v11[0];
    v6 = *(_OWORD *)(v11[0] + 16LL);
    *(_QWORD *)(v11[0] + 24LL) = 7LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_WORD *)v4 = 0;
    v7 = *(_OWORD *)(v4 + 32);
    v8 = *(_OWORD *)(v4 + 48);
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 7LL;
    *(_WORD *)(v4 + 32) = 0;
    *(_OWORD *)a1 = v5;
    *(_OWORD *)(a1 + 16) = v6;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 48) = v8;
    *(_BYTE *)(a1 + 64) = 1;
    v12[0] = v5;
    v13[0] = v7;
    v12[1] = si128;
    v13[1] = si128;
    LOWORD(v12[0]) = 0;
    LOWORD(v13[0]) = 0;
    std::wstring::_Tidy_deallocate((__int64)v13);
    std::wstring::_Tidy_deallocate((__int64)v12);
  }
  else
  {
    *(_BYTE *)(a1 + 64) = 0;
  }
  std::vector<std::wstring>::_Tidy((__int64)v11);
  return a1;
}
