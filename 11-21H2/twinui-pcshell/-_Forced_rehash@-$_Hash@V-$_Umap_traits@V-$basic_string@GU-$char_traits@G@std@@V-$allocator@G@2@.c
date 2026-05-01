/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180018A60
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800189A8 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@@Z @ 0x18010B784 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18010B784.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x1803B5E18 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r11
  _QWORD *i; // rbx
  unsigned __int64 result; // rax
  _QWORD *v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  _QWORD *v15; // rsi
  __int64 v16; // r9
  _QWORD *v17; // r10
  __int64 v18; // r11
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // r14
  __int64 v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rax

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = (_QWORD *)a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>>>>>::_Assign_grow(
    a1 + 3,
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v8 = *(_QWORD **)a1[1];
  for ( i = v8; ; v8 = i )
  {
    result = 0xCBF29CE484222325uLL;
    if ( v8 == v4 )
      break;
    v11 = v8 + 2;
    i = (_QWORD *)*i;
    if ( v8[5] >= 8uLL )
      v11 = (_QWORD *)v8[2];
    v12 = 0xCBF29CE484222325uLL;
    v13 = 0LL;
    v14 = 2LL * v8[4];
    if ( v14 )
    {
      do
      {
        v7 = *((unsigned __int8 *)v11 + v13++);
        v12 = 0x100000001B3LL * (v7 ^ v12);
      }
      while ( v13 < v14 );
    }
    v15 = (_QWORD *)(a1[3] + 16 * (v12 & a1[6]));
    if ( (_QWORD *)*v15 == v4 )
    {
      *v15 = v8;
      v15[1] = v8;
    }
    else if ( (unsigned __int8)std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                                 v7,
                                 v8 + 2,
                                 v15[1] + 16LL,
                                 v14) )
    {
      v22 = v17;
      while ( (_QWORD *)*v15 != v22 )
      {
        v22 = (_QWORD *)v17[1];
        if ( !(unsigned __int8)std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                                 v7,
                                 v18 + 16,
                                 v22 + 2,
                                 v16) )
        {
          v23 = *v17;
          v24 = *(_QWORD **)(v18 + 8);
          *v24 = i;
          v7 = i[1];
          *(_QWORD *)v7 = v23;
          v25 = *(_QWORD **)(v23 + 8);
          *v25 = v18;
          *(_QWORD *)(v23 + 8) = v7;
          i[1] = v24;
          *(_QWORD *)(v18 + 8) = v25;
          goto LABEL_10;
        }
      }
      v26 = *(_QWORD **)(v18 + 8);
      *v26 = i;
      v7 = i[1];
      *(_QWORD *)v7 = v22;
      v27 = (_QWORD *)v22[1];
      *v27 = v18;
      v22[1] = v7;
      i[1] = v26;
      *(_QWORD *)(v18 + 8) = v27;
      *v15 = v18;
    }
    else
    {
      v19 = *v17;
      if ( *v17 != v18 )
      {
        v20 = *(_QWORD **)(v18 + 8);
        *v20 = i;
        v7 = i[1];
        *(_QWORD *)v7 = v19;
        v21 = *(_QWORD **)(v19 + 8);
        *v21 = v18;
        *(_QWORD *)(v19 + 8) = v7;
        i[1] = v20;
        *(_QWORD *)(v18 + 8) = v21;
      }
      v15[1] = v18;
    }
LABEL_10:
    ;
  }
  return result;
}
