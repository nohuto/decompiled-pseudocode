/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1806F6600
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1806F6A08 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x1806F62E4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1806F62E4.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  __int64 *v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  const unsigned __int8 *const *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // r14
  _QWORD *v16; // rsi
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // r13
  __int64 *v21; // r8
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27[7]; // [rsp+20h] [rbp-38h] BYREF

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  v5 = a1 + 3;
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,std::wstring>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v7,
    v4);
  result = v7 - 1;
  a1[7] = v7;
  a1[6] = v7 - 1;
  v9 = *(_QWORD **)a1[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = (const unsigned __int8 *const *)winrt::hstring::operator std::basic_string_view<unsigned short>(v9 + 2, v27);
    result = std::_Fnv1a_append_bytes(v12, *v11, 2 * _mm_srli_si128(*(__m128i *)v11, 8).m128i_u64[0]);
    v14 = *v5;
    v15 = 2 * (a1[6] & result);
    if ( *(_QWORD *)(*v5 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v14 + 16 * (a1[6] & result)) = v9;
      *(_QWORD *)(v14 + 8 * v15 + 8) = v9;
    }
    else
    {
      v16 = *(_QWORD **)(v14 + 16 * (a1[6] & result) + 8);
      result = winrt::operator==((__int64)(v9 + 2), (__int64)(v16 + 2), v13);
      if ( (_BYTE)result )
      {
        v17 = (_QWORD *)*v16;
        if ( (_QWORD *)*v16 != v9 )
        {
          v18 = (_QWORD *)v9[1];
          *v18 = v10;
          v19 = (_QWORD *)v10[1];
          *v19 = v17;
          result = v17[1];
          *(_QWORD *)result = v9;
          v17[1] = v19;
          v10[1] = v18;
          v9[1] = result;
        }
        *(_QWORD *)(v14 + 8 * v15 + 8) = v9;
      }
      else
      {
        v20 = v16;
        while ( 1 )
        {
          v21 = v16 + 1;
          if ( *(_QWORD **)(v14 + 8 * v15) == v20 )
            break;
          v16 = (_QWORD *)*v21;
          v20 = (_QWORD *)*v21;
          if ( (unsigned __int8)winrt::operator==((__int64)(v9 + 2), *v21 + 16, (__int64)v21) )
          {
            v22 = *v16;
            v23 = (_QWORD *)v9[1];
            *v23 = v10;
            v24 = (_QWORD *)v10[1];
            *v24 = v22;
            result = *(_QWORD *)(v22 + 8);
            *(_QWORD *)result = v9;
            *(_QWORD *)(v22 + 8) = v24;
            v10[1] = v23;
            v9[1] = result;
            goto LABEL_16;
          }
        }
        v25 = (_QWORD *)v9[1];
        *v25 = v10;
        result = v10[1];
        *(_QWORD *)result = v16;
        v26 = (_QWORD *)*v21;
        *v26 = v9;
        *v21 = result;
        v10[1] = v25;
        v9[1] = v26;
        *(_QWORD *)(v14 + 8 * v15) = v9;
      }
LABEL_16:
      v5 = a1 + 3;
    }
    v9 = v10;
  }
  return result;
}
