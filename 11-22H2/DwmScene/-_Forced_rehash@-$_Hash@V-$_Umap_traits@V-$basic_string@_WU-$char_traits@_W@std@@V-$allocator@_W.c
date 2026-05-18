/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800DF1A8
 * Callers:
 *     ??4ConfigurationValue@Utils@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE344 (--4ConfigurationValue@Utils@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800DF368 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@.c)
 * Callees:
 *     ??$_Hash_array_representation@_W@std@@YA_KQEB_W_K@Z @ 0x18001E9B4 (--$_Hash_array_representation@_W@std@@YA_KQEB_W_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180042718 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$?RV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x18006182C (--$-RV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V01@@-$_Uhash_compare@V-$b.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800DE2C8 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,Spectre::Utils::ConfigurationValue,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // r11
  _QWORD *v8; // rbx
  __int64 *v9; // r14
  unsigned __int8 *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // r10
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // r15
  __int64 v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v31; // [rsp+58h] [rbp+10h] BYREF

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v7 = *(_QWORD **)a1[1];
  v8 = v7;
  while ( v7 != (_QWORD *)v4 )
  {
    v8 = (_QWORD *)*v8;
    v9 = v7 + 2;
    v10 = (unsigned __int8 *)(v7 + 2);
    if ( v7[5] >= 8uLL )
      v10 = (unsigned __int8 *)*v9;
    v11 = std::_Hash_array_representation<wchar_t>(v10, v7[4]);
    v14 = a1[3];
    v15 = 2 * (a1[6] & v11);
    if ( *(_QWORD *)(v14 + 16 * (a1[6] & v11)) == v4 )
    {
      *(_QWORD *)(v14 + 16 * (a1[6] & v11)) = v13;
LABEL_9:
      *(_QWORD *)(v14 + 8 * v15 + 8) = v13;
      goto LABEL_18;
    }
    if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
            v12,
            v9,
            *(_QWORD *)(v14 + 16 * (a1[6] & v11) + 8) + 16LL) )
    {
      v18 = *v17;
      if ( *v17 != v13 )
      {
        v19 = *(_QWORD **)(v13 + 8);
        *v19 = v8;
        v20 = (_QWORD *)v8[1];
        *v20 = v18;
        v21 = *(_QWORD **)(v18 + 8);
        *v21 = v13;
        *(_QWORD *)(v18 + 8) = v20;
        v8[1] = v19;
        *(_QWORD *)(v13 + 8) = v21;
      }
      goto LABEL_9;
    }
    v22 = v17;
    while ( *(_QWORD **)(v14 + 8 * v15) != v22 )
    {
      v22 = (_QWORD *)v17[1];
      if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
              v16,
              v9,
              (__int64)(v22 + 2)) )
      {
        v23 = *v17;
        v24 = *(_QWORD **)(v13 + 8);
        *v24 = v8;
        v25 = (_QWORD *)v8[1];
        *v25 = v23;
        v26 = *(_QWORD **)(v23 + 8);
        *v26 = v13;
        *(_QWORD *)(v23 + 8) = v25;
        v8[1] = v24;
        *(_QWORD *)(v13 + 8) = v26;
        goto LABEL_18;
      }
    }
    v27 = *(_QWORD **)(v13 + 8);
    *v27 = v8;
    v28 = (_QWORD *)v8[1];
    *v28 = v17;
    v29 = (_QWORD *)v17[1];
    *v29 = v13;
    v17[1] = v28;
    v8[1] = v27;
    *(_QWORD *)(v13 + 8) = v29;
    *(_QWORD *)(v14 + 8 * v15) = v13;
LABEL_18:
    v7 = v8;
  }
  v31 = 0LL;
  return std::_Hash<std::_Umap_traits<std::wstring,Spectre::Utils::ConfigurationValue,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>,0>>::_Clear_guard::~_Clear_guard(&v31);
}
