/*
 * XREFs of ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x18072B25C
 * Callers:
 *     ?find@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x18072BEC8 (-find@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@std@@V-$allocator@U-$.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1802D21B6 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x18070A6A8 (--$_Find_lower_bound@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstri.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::_Find<winrt::hstring>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rbx
  __m128i v5; // xmm6
  char **v6; // rax
  int v7; // eax
  bool v8; // sf
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]

  std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::_Find_lower_bound<winrt::hstring>(
    a1,
    (__int64)v11,
    a2);
  v4 = v12;
  if ( *(_BYTE *)(v12 + 25) )
    return *a1;
  v5 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)(v12 + 32), &v10);
  v6 = (char **)winrt::hstring::operator std::basic_string_view<unsigned short>(a2, v11);
  LOBYTE(v7) = std::_Traits_compare<std::char_traits<unsigned short>>(
                 *v6,
                 _mm_srli_si128(*(__m128i *)v6, 8).m128i_u64[0],
                 (char *)v5.m128i_i64[0],
                 _mm_srli_si128(v5, 8).m128i_u64[0]);
  v8 = v7 < 0;
  result = v4;
  if ( v8 )
    return *a1;
  return result;
}
