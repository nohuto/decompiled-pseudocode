/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1806F67D0
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1806F6A34 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$ha.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x1806F62E4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1806F62E4.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v3; // rbp
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 result; // rax
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v7; // rbx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v8; // rdi
  const unsigned __int8 *const *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // r15
  __int64 v14; // r14
  _QWORD *v15; // rsi
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v16; // r8
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v17; // rdx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v18; // rcx
  _QWORD *v19; // r13
  __int64 *v20; // r8
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v21; // r8
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v22; // rdx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v23; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26[7]; // [rsp+20h] [rbp-38h] BYREF

  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_180990158;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  result = (__int64)std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,std::wstring>>>>>>::_Assign_grow(
                      (__int64)&qword_180990168,
                      2 * v5,
                      (unsigned __int64)qword_180990158);
  qword_180990188 = v5;
  qword_180990180 = v5 - 1;
  v7 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)qword_180990158;
  v8 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)qword_180990158;
  while ( v7 != v3 )
  {
    v8 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)v8;
    v9 = (const unsigned __int8 *const *)winrt::hstring::operator std::basic_string_view<unsigned short>(
                                           (__int64 *)v7 + 2,
                                           v26);
    result = std::_Fnv1a_append_bytes(v10, *v9, 2 * _mm_srli_si128(*(__m128i *)v9, 8).m128i_u64[0]);
    v13 = qword_180990168;
    v14 = 2 * (v12 & result);
    if ( *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(qword_180990168 + 16 * (v12 & result)) == v3 )
    {
      *(_QWORD *)(qword_180990168 + 16 * (v12 & result)) = v7;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v7;
      goto LABEL_16;
    }
    v15 = *(_QWORD **)(qword_180990168 + 16 * (v12 & result) + 8);
    result = winrt::operator==((__int64)v7 + 16, (__int64)(v15 + 2), v11);
    if ( (_BYTE)result )
    {
      v16 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)*v15;
      if ( (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)*v15 != v7 )
      {
        v17 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v7 + 1);
        *v17 = v8;
        v18 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v8 + 1);
        *v18 = v16;
        result = *((_QWORD *)v16 + 1);
        *(_QWORD *)result = v7;
        *((_QWORD *)v16 + 1) = v18;
        *((_QWORD *)v8 + 1) = v17;
        *((_QWORD *)v7 + 1) = result;
      }
      goto LABEL_7;
    }
    v19 = v15;
    while ( 1 )
    {
      v20 = v15 + 1;
      if ( *(_QWORD **)(v13 + 8 * v14) == v19 )
        break;
      v15 = (_QWORD *)*v20;
      v19 = (_QWORD *)*v20;
      if ( (unsigned __int8)winrt::operator==((__int64)v7 + 16, *v20 + 16, (__int64)v20) )
      {
        v21 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)*v15;
        v22 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v7 + 1);
        *v22 = v8;
        v23 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v8 + 1);
        *v23 = v21;
        result = *((_QWORD *)v21 + 1);
        *(_QWORD *)result = v7;
        *((_QWORD *)v21 + 1) = v23;
        *((_QWORD *)v8 + 1) = v22;
        *((_QWORD *)v7 + 1) = result;
        goto LABEL_16;
      }
    }
    v24 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener **)*((_QWORD *)v7 + 1);
    *v24 = v8;
    result = *((_QWORD *)v8 + 1);
    *(_QWORD *)result = v15;
    v25 = (_QWORD *)*v20;
    *v25 = v7;
    *v20 = result;
    *((_QWORD *)v8 + 1) = v24;
    *((_QWORD *)v7 + 1) = v25;
    *(_QWORD *)(v13 + 8 * v14) = v7;
LABEL_16:
    v7 = v8;
  }
  return result;
}
