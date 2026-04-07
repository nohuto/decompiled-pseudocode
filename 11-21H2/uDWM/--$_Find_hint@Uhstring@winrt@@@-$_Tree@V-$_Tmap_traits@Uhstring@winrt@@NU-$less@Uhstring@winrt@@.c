/*
 * XREFs of ??$_Find_hint@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800F8D44
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBUhstring@winrt@@N@std@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBUhstring@winrt@@N@1@@Z @ 0x1800F8BE4 (--$_Emplace_hint@AEBU-$pair@$$CBUhstring@winrt@@N@std@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B455C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winr.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800C8988 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x1800F904C (--$_Find_lower_bound@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@.c)
 *     ??$_Lower_bound_duplicate@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800F9160 (--$_Lower_bound_duplicate@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhst.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800F991C (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F9950 (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winr.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Find_hint<winrt::hstring>(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rsi
  __m128i v9; // xmm6
  char **v10; // rax
  __int64 v11; // r12
  __m128i v12; // xmm6
  __m128i v13; // xmm1
  int v14; // eax
  __int64 v15; // rsi
  __m128i v16; // xmm6
  char **v17; // rax
  char v18; // cl
  __int64 result; // rax
  __m128i v20; // xmm6
  __m128i v21; // xmm1
  __int64 *v22; // rax
  __int64 v23; // rsi
  __m128i v24; // xmm6
  char **v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  bool v28; // zf
  __int128 v29; // xmm0
  char v30; // cl
  _BYTE v31[16]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v32; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+40h] [rbp-20h]
  __int64 v34; // [rsp+90h] [rbp+30h] BYREF

  v4 = *a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    if ( *(_BYTE *)(v4[1] + 25LL)
      || (v9 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, v31),
          v10 = (char **)winrt::hstring::operator std::basic_string_view<unsigned short>(v4[2] + 32LL, &v32),
          (int)std::_Traits_compare<std::char_traits<unsigned short>>(
                 *v10,
                 _mm_srli_si128(*(__m128i *)v10, 8).m128i_u64[0],
                 (char *)v9.m128i_i64[0],
                 _mm_srli_si128(v9, 8).m128i_u64[0]) < 0) )
    {
      *(_QWORD *)a2 = v4[2];
      *(_BYTE *)(a2 + 16) = 0;
LABEL_25:
      *(_DWORD *)(a2 + 8) = 0;
      return a2;
    }
    goto LABEL_18;
  }
  v11 = a3 + 32;
  v12 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a3 + 32, &v32);
  v13 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, v31);
  v14 = std::_Traits_compare<std::char_traits<unsigned short>>(
          (char *)v13.m128i_i64[0],
          _mm_srli_si128(v13, 8).m128i_u64[0],
          (char *)v12.m128i_i64[0],
          _mm_srli_si128(v12, 8).m128i_u64[0]);
  if ( a3 == *v4 )
  {
    if ( v14 < 0 )
    {
      *(_QWORD *)a2 = a3;
      *(_DWORD *)(a2 + 8) = 1;
      *(_BYTE *)(a2 + 16) = 0;
      return a2;
    }
    goto LABEL_18;
  }
  if ( v14 < 0 )
  {
    v34 = a3;
    v15 = *(_QWORD *)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>,std::_Iterator_base0>::operator--(&v34);
    v16 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, &v32);
    v17 = (char **)winrt::hstring::operator std::basic_string_view<unsigned short>(v15 + 32, v31);
    if ( (int)std::_Traits_compare<std::char_traits<unsigned short>>(
                *v17,
                _mm_srli_si128(*(__m128i *)v17, 8).m128i_u64[0],
                (char *)v16.m128i_i64[0],
                _mm_srli_si128(v16, 8).m128i_u64[0]) >= 0 )
      goto LABEL_18;
    v18 = *(_BYTE *)(*(_QWORD *)(v15 + 16) + 25LL);
    result = a2;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v18 )
    {
      *(_QWORD *)a2 = v15;
LABEL_12:
      *(_DWORD *)(a2 + 8) = 0;
      return result;
    }
    *(_QWORD *)a2 = a3;
    goto LABEL_14;
  }
  v20 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, &v32);
  v21 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(v11, v31);
  if ( (int)std::_Traits_compare<std::char_traits<unsigned short>>(
              (char *)v21.m128i_i64[0],
              _mm_srli_si128(v21, 8).m128i_u64[0],
              (char *)v20.m128i_i64[0],
              _mm_srli_si128(v20, 8).m128i_u64[0]) >= 0 )
  {
    *(_QWORD *)a2 = a3;
    *(_BYTE *)(a2 + 16) = 1;
    goto LABEL_25;
  }
  v34 = a3;
  v22 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>,std::_Iterator_base0>::operator++(&v34);
  v23 = *v22;
  if ( *(_BYTE *)(*v22 + 25)
    || (v24 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(v23 + 32, &v32),
        v25 = (char **)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, v31),
        (int)std::_Traits_compare<std::char_traits<unsigned short>>(
               *v25,
               _mm_srli_si128(*(__m128i *)v25, 8).m128i_u64[0],
               (char *)v24.m128i_i64[0],
               _mm_srli_si128(v24, 8).m128i_u64[0]) < 0) )
  {
    v30 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL);
    result = a2;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v30 )
    {
      *(_QWORD *)a2 = a3;
      goto LABEL_12;
    }
    *(_QWORD *)a2 = v23;
LABEL_14:
    *(_DWORD *)(a2 + 8) = 1;
    return result;
  }
LABEL_18:
  std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Find_lower_bound<winrt::hstring>(
    a1,
    &v32);
  v26 = v33;
  v28 = (unsigned __int8)std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Lower_bound_duplicate<winrt::hstring>(
                           v27,
                           v33,
                           a4) == 0;
  result = a2;
  if ( v28 )
  {
    v29 = v32;
    *(_BYTE *)(a2 + 16) = 0;
    *(_OWORD *)a2 = v29;
  }
  else
  {
    *(_QWORD *)a2 = v26;
    *(_DWORD *)(a2 + 8) = 2;
    *(_BYTE *)(a2 + 16) = 1;
  }
  return result;
}
