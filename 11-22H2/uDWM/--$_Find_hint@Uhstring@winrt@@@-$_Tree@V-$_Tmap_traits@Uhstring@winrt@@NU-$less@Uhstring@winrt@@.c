/*
 * XREFs of ??$_Find_hint@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FBDB8
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBUhstring@winrt@@N@std@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBUhstring@winrt@@N@1@@Z @ 0x1800FBC58 (--$_Emplace_hint@AEBU-$pair@$$CBUhstring@winrt@@N@std@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B7684 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winr.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800CD0D8 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x1800FC0C0 (--$_Find_lower_bound@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@.c)
 *     ??$_Lower_bound_duplicate@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FC1D4 (--$_Lower_bound_duplicate@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhst.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800FCEC0 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800FCEF4 (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winr.c)
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
  int v11; // eax
  __int64 v12; // r12
  __m128i v13; // xmm6
  __m128i v14; // xmm1
  int v15; // eax
  __int64 v16; // rsi
  __m128i v17; // xmm6
  char **v18; // rax
  int v19; // eax
  char v20; // cl
  __int64 result; // rax
  __m128i v22; // xmm6
  __m128i v23; // xmm1
  int v24; // eax
  __int64 *v25; // rax
  __int64 v26; // rsi
  __m128i v27; // xmm6
  char **v28; // rax
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rcx
  bool v32; // zf
  __int128 v33; // xmm0
  char v34; // cl
  _BYTE v35[16]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v36; // [rsp+30h] [rbp-30h] BYREF
  __int64 v37; // [rsp+40h] [rbp-20h]
  __int64 v38; // [rsp+90h] [rbp+30h] BYREF

  v4 = *a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    if ( *(_BYTE *)(v4[1] + 25LL)
      || (v9 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, v35),
          v10 = (char **)winrt::hstring::operator std::basic_string_view<unsigned short>(v4[2] + 32LL, &v36),
          LOBYTE(v11) = std::_Traits_compare<std::char_traits<unsigned short>>(
                          *v10,
                          _mm_srli_si128(*(__m128i *)v10, 8).m128i_u64[0],
                          (char *)v9.m128i_i64[0],
                          _mm_srli_si128(v9, 8).m128i_u64[0]),
          v11 < 0) )
    {
      *(_QWORD *)a2 = v4[2];
      *(_BYTE *)(a2 + 16) = 0;
LABEL_25:
      *(_DWORD *)(a2 + 8) = 0;
      return a2;
    }
    goto LABEL_18;
  }
  v12 = a3 + 32;
  v13 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a3 + 32, &v36);
  v14 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, v35);
  LOBYTE(v15) = std::_Traits_compare<std::char_traits<unsigned short>>(
                  (char *)v14.m128i_i64[0],
                  _mm_srli_si128(v14, 8).m128i_u64[0],
                  (char *)v13.m128i_i64[0],
                  _mm_srli_si128(v13, 8).m128i_u64[0]);
  if ( a3 == *v4 )
  {
    if ( v15 < 0 )
    {
      *(_QWORD *)a2 = a3;
      *(_DWORD *)(a2 + 8) = 1;
      *(_BYTE *)(a2 + 16) = 0;
      return a2;
    }
    goto LABEL_18;
  }
  if ( v15 < 0 )
  {
    v38 = a3;
    v16 = *(_QWORD *)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>,std::_Iterator_base0>::operator--(&v38);
    v17 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, &v36);
    v18 = (char **)winrt::hstring::operator std::basic_string_view<unsigned short>(v16 + 32, v35);
    LOBYTE(v19) = std::_Traits_compare<std::char_traits<unsigned short>>(
                    *v18,
                    _mm_srli_si128(*(__m128i *)v18, 8).m128i_u64[0],
                    (char *)v17.m128i_i64[0],
                    _mm_srli_si128(v17, 8).m128i_u64[0]);
    if ( v19 >= 0 )
      goto LABEL_18;
    v20 = *(_BYTE *)(*(_QWORD *)(v16 + 16) + 25LL);
    result = a2;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v20 )
    {
      *(_QWORD *)a2 = v16;
LABEL_12:
      *(_DWORD *)(a2 + 8) = 0;
      return result;
    }
    *(_QWORD *)a2 = a3;
    goto LABEL_14;
  }
  v22 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, &v36);
  v23 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(v12, v35);
  LOBYTE(v24) = std::_Traits_compare<std::char_traits<unsigned short>>(
                  (char *)v23.m128i_i64[0],
                  _mm_srli_si128(v23, 8).m128i_u64[0],
                  (char *)v22.m128i_i64[0],
                  _mm_srli_si128(v22, 8).m128i_u64[0]);
  if ( v24 >= 0 )
  {
    *(_QWORD *)a2 = a3;
    *(_BYTE *)(a2 + 16) = 1;
    goto LABEL_25;
  }
  v38 = a3;
  v25 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>,std::_Iterator_base0>::operator++(&v38);
  v26 = *v25;
  if ( *(_BYTE *)(*v25 + 25)
    || (v27 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(v26 + 32, &v36),
        v28 = (char **)winrt::hstring::operator std::basic_string_view<unsigned short>(a4, v35),
        LOBYTE(v29) = std::_Traits_compare<std::char_traits<unsigned short>>(
                        *v28,
                        _mm_srli_si128(*(__m128i *)v28, 8).m128i_u64[0],
                        (char *)v27.m128i_i64[0],
                        _mm_srli_si128(v27, 8).m128i_u64[0]),
        v29 < 0) )
  {
    v34 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL);
    result = a2;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v34 )
    {
      *(_QWORD *)a2 = a3;
      goto LABEL_12;
    }
    *(_QWORD *)a2 = v26;
LABEL_14:
    *(_DWORD *)(a2 + 8) = 1;
    return result;
  }
LABEL_18:
  std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Find_lower_bound<winrt::hstring>(
    a1,
    &v36);
  v30 = v37;
  v32 = (unsigned __int8)std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Lower_bound_duplicate<winrt::hstring>(
                           v31,
                           v37,
                           a4) == 0;
  result = a2;
  if ( v32 )
  {
    v33 = v36;
    *(_BYTE *)(a2 + 16) = 0;
    *(_OWORD *)a2 = v33;
  }
  else
  {
    *(_QWORD *)a2 = v30;
    *(_DWORD *)(a2 + 8) = 2;
    *(_BYTE *)(a2 + 16) = 1;
  }
  return result;
}
