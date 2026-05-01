/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18072893C
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180728B3C (-clear@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180728654 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@_KU-$hash@_.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned __int64>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // r13
  __int64 v7; // rsi
  _QWORD *v8; // r12
  const unsigned __int8 *const *v9; // rax
  __int64 v10; // rcx
  __int64 appended; // rax
  __int64 i; // r11
  __int64 v13; // r15
  __int64 v14; // rax
  bool v15; // bl
  const unsigned __int8 *const *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r13
  bool v21; // bl
  _QWORD *v22; // rax
  _QWORD v24[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v25; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v26; // [rsp+38h] [rbp-18h]
  __int64 v27; // [rsp+40h] [rbp-10h]
  __int64 v29; // [rsp+98h] [rbp+48h]
  __int64 v30; // [rsp+A0h] [rbp+50h]

  if ( a2 != a3 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = a1[3];
    v8 = (_QWORD *)a1[1];
    v27 = a2;
    v25 = a1 + 1;
    v26 = v6;
    v9 = (const unsigned __int8 *const *)winrt::hstring::operator std::basic_string_view<unsigned short>(
                                           (__int64 *)(a2 + 16),
                                           v24);
    appended = std::_Fnv1a_append_bytes(v10, *v9, 2 * _mm_srli_si128(*(__m128i *)v9, 8).m128i_u64[0]);
    v13 = 2 * (a1[6] & appended);
    v29 = *(_QWORD *)(v7 + 16 * (a1[6] & appended));
    v14 = *(_QWORD *)(v7 + 16 * (a1[6] & appended) + 8);
    v30 = v14;
    while ( 1 )
    {
      v15 = i == v14;
      std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned __int64>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>>,0>>::_Range_eraser::_Bump_erased(&v25);
      if ( v15 )
        break;
      i = v27;
      v14 = v30;
      if ( v27 == a3 )
      {
        if ( v29 == a2 )
          *(_QWORD *)(v7 + 8 * v13) = v27;
        goto LABEL_14;
      }
    }
    if ( v29 == a2 )
    {
      *(_QWORD *)(v7 + 8 * v13) = v8;
      v6 = v8;
    }
    *(_QWORD *)(v7 + 8 * v13 + 8) = v6;
    for ( i = v27; i != a3; *(_QWORD *)(v7 + 8 * v19 + 8) = v8 )
    {
      v16 = (const unsigned __int8 *const *)winrt::hstring::operator std::basic_string_view<unsigned short>(
                                              (__int64 *)(i + 16),
                                              v24);
      v18 = std::_Fnv1a_append_bytes(v17, *v16, 2 * _mm_srli_si128(*(__m128i *)v16, 8).m128i_u64[0]);
      v19 = 2 * (a1[6] & v18);
      v20 = *(_QWORD *)(v7 + 16 * (a1[6] & v18) + 8);
      while ( 1 )
      {
        v21 = i == v20;
        std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned __int64>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>>,0>>::_Range_eraser::_Bump_erased(&v25);
        i = v27;
        if ( v21 )
          break;
        if ( v27 == a3 )
        {
          *(_QWORD *)(v7 + 8 * v19) = v27;
          goto LABEL_14;
        }
      }
      *(_QWORD *)(v7 + 8 * v19) = v8;
    }
LABEL_14:
    v22 = v26;
    *v26 = i;
    *(_QWORD *)(i + 8) = v22;
  }
  return a3;
}
