/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18014DC28
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18014DDC8 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@2@@Z @ 0x180041F8C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180078570 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x1801092F0 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<std::wstring,Windows::UI::Composition::RedirectedPropertyInfo,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Windows::UI::Composition::RedirectedPropertyInfo>>,0>>::_Forced_rehash(
        const char *a1,
        unsigned __int64 a2)
{
  const char *v2; // r13
  char v3; // cl
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 appended; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  char *v11; // r15
  const unsigned __int8 *v12; // rdx
  __int64 v13; // r11
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 *v16; // rdi
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 *v19; // r8
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rdx

  v2 = a1;
  _BitScanReverse64((unsigned __int64 *)&a1, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Dwm_Xlength_error(a1);
  v4 = *((_QWORD *)v2 + 1);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IUnknown * const,IUnknown *>>>>>>::_Assign_grow(
    (unsigned __int64 **)v2 + 3,
    2 * v6,
    v4);
  *((_QWORD *)v2 + 7) = v6;
  LOBYTE(appended) = v6 - 1;
  *((_QWORD *)v2 + 6) = v6 - 1;
  v9 = (_QWORD *)**((_QWORD **)v2 + 1);
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = (char *)(v9 + 2);
    v12 = (const unsigned __int8 *)(v9 + 2);
    if ( v9[5] >= 8uLL )
      v12 = *(const unsigned __int8 **)v11;
    appended = std::_Fnv1a_append_bytes((__int64)v7, v12, 2LL * v9[4]);
    v14 = *((_QWORD *)v2 + 3);
    v15 = 2 * (*((_QWORD *)v2 + 6) & appended);
    if ( *(_QWORD *)(v14 + 16 * (*((_QWORD *)v2 + 6) & appended)) == v4 )
    {
      *(_QWORD *)(v14 + 16 * (*((_QWORD *)v2 + 6) & appended)) = v13;
LABEL_9:
      *(_QWORD *)(v14 + 8 * v15 + 8) = v13;
      goto LABEL_17;
    }
    v16 = *(__int64 **)(v14 + 16 * (*((_QWORD *)v2 + 6) & appended) + 8);
    LOBYTE(appended) = std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                         (__int64)v7,
                         v11,
                         v16 + 2);
    if ( !(_BYTE)appended )
    {
      v17 = *v16;
      if ( *v16 != v13 )
      {
        v18 = *(_QWORD **)(v13 + 8);
        *v18 = v10;
        v7 = (_QWORD *)v10[1];
        *v7 = v17;
        appended = *(_QWORD *)(v17 + 8);
        *(_QWORD *)appended = v13;
        *(_QWORD *)(v17 + 8) = v7;
        v10[1] = v18;
        *(_QWORD *)(v13 + 8) = appended;
      }
      goto LABEL_9;
    }
    while ( 1 )
    {
      v19 = v16 + 1;
      if ( *(__int64 **)(v14 + 8 * v15) == v16 )
        break;
      v16 = (__int64 *)*v19;
      if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
              (__int64)v7,
              v11,
              (_QWORD *)(*v19 + 16)) )
      {
        v20 = *v16;
        v21 = *(_QWORD **)(v13 + 8);
        *v21 = v10;
        v7 = (_QWORD *)v10[1];
        *v7 = v20;
        appended = *(_QWORD *)(v20 + 8);
        *(_QWORD *)appended = v13;
        *(_QWORD *)(v20 + 8) = v7;
        v10[1] = v21;
        *(_QWORD *)(v13 + 8) = appended;
        goto LABEL_17;
      }
    }
    v22 = *(_QWORD **)(v13 + 8);
    *v22 = v10;
    appended = v10[1];
    *(_QWORD *)appended = v16;
    v7 = (_QWORD *)*v19;
    *v7 = v13;
    *v19 = appended;
    v10[1] = v22;
    *(_QWORD *)(v13 + 8) = v7;
    *(_QWORD *)(v14 + 8 * v15) = v13;
LABEL_17:
    v9 = v10;
  }
  return appended;
}
