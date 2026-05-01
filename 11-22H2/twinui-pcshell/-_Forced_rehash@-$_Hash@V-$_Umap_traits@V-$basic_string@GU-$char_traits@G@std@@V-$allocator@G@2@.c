/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180073EE0
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180073E10 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 * Callees:
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180074078 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@@Z @ 0x18014CC04 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18014CC04.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // r15
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  unsigned __int64 result; // rax
  _QWORD *v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9
  _QWORD *v16; // r14
  _QWORD *v17; // r15
  _QWORD *v18; // rbx
  __int64 v19; // r9
  _QWORD *v20; // r13
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // r8
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v30; // [rsp+68h] [rbp+10h]

  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = (_QWORD *)v2[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  v7 = v2 + 3;
  v30 = v2 + 3;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>>>>>::_Assign_grow(
    v2 + 3,
    2 * v6,
    v4);
  v2[7] = v6;
  v2[6] = v6 - 1;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( 1 )
  {
    result = 0xCBF29CE484222325uLL;
    if ( v9 == v4 )
      return result;
    v12 = v9 + 2;
    v10 = (_QWORD *)*v10;
    if ( v9[5] >= 8uLL )
      v12 = (_QWORD *)v9[2];
    v13 = 0xCBF29CE484222325uLL;
    v14 = 0LL;
    v15 = 2LL * v9[4];
    if ( v15 )
    {
      do
      {
        v8 = *((unsigned __int8 *)v12 + v14++);
        v13 = 0x100000001B3LL * (v8 ^ v13);
      }
      while ( v14 < v15 );
    }
    v16 = (_QWORD *)(*v7 + 16 * (v13 & v2[6]));
    v17 = (_QWORD *)*v16;
    if ( (_QWORD *)*v16 == v4 )
    {
      *v16 = v9;
      v16[1] = v9;
    }
    else
    {
      v18 = (_QWORD *)v16[1];
      if ( (unsigned __int8)std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                              v8,
                              v9 + 2,
                              v18 + 2,
                              v15) )
      {
        v20 = v18;
        do
        {
          if ( v17 == v20 )
          {
            v21 = (_QWORD *)v9[1];
            *v21 = v10;
            v8 = v10[1];
            *(_QWORD *)v8 = v18;
            v22 = (_QWORD *)v18[1];
            *v22 = v9;
            v18[1] = v8;
            v10[1] = v21;
            v9[1] = v22;
            *v16 = v9;
            goto LABEL_10;
          }
          v18 = (_QWORD *)v18[1];
          v20 = v18;
        }
        while ( (unsigned __int8)std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                                   v8,
                                   v9 + 2,
                                   v18 + 2,
                                   v19) );
        v26 = (_QWORD *)*v18;
        v27 = (_QWORD *)v9[1];
        *v27 = v10;
        v8 = v10[1];
        *(_QWORD *)v8 = v26;
        v28 = (_QWORD *)v26[1];
        *v28 = v9;
        v26[1] = v8;
        v10[1] = v27;
        v9[1] = v28;
      }
      else
      {
        v23 = *v18;
        if ( (_QWORD *)*v18 != v9 )
        {
          v24 = (_QWORD *)v9[1];
          *v24 = v10;
          v8 = v10[1];
          *(_QWORD *)v8 = v23;
          v25 = *(_QWORD **)(v23 + 8);
          *v25 = v9;
          *(_QWORD *)(v23 + 8) = v8;
          v10[1] = v24;
          v9[1] = v25;
        }
        v16[1] = v9;
      }
    }
LABEL_10:
    v2 = a1;
    v9 = v10;
    v7 = v30;
  }
}
