/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009B7A4
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@1@@Z @ 0x180098648 (--$emplace@AEBU-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Layer@.c)
 * Callees:
 *     ??$_Hash_array_representation@D@std@@YA_KQEBD_K@Z @ 0x18001E9A0 (--$_Hash_array_representation@D@std@@YA_KQEBD_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180042718 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$?RV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@0@Z @ 0x18009831C (--$-RV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180098A20 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<std::string,enum Spectre::Framework::MaterialMaker::Layer,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  unsigned __int8 *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r13
  _QWORD *v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF

  v29 = a1;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_1801D8A58;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>>>>>::_Assign_grow(
    (__int64)&qword_1801D8A68,
    2 * v5,
    qword_1801D8A58);
  qword_1801D8A88 = v5;
  qword_1801D8A80 = v5 - 1;
  v6 = *(_QWORD **)qword_1801D8A58;
  v7 = *(_QWORD **)qword_1801D8A58;
  while ( v6 != (_QWORD *)v3 )
  {
    v7 = (_QWORD *)*v7;
    v8 = (unsigned __int8 *)(v6 + 2);
    if ( v6[5] >= 0x10uLL )
      v8 = (unsigned __int8 *)v6[2];
    v9 = std::_Hash_array_representation<char>(v8, v6[4]);
    v12 = qword_1801D8A68;
    v13 = 2 * (v11 & v9);
    if ( *(_QWORD *)(qword_1801D8A68 + 16 * (v11 & v9)) == v3 )
    {
      *(_QWORD *)(qword_1801D8A68 + 16 * (v11 & v9)) = v6;
LABEL_9:
      *(_QWORD *)(v12 + 8 * v13 + 8) = v6;
      goto LABEL_18;
    }
    v14 = *(_QWORD *)(qword_1801D8A68 + 16 * (v11 & v9) + 8);
    if ( !std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>::operator()<std::string,std::string>(
            v10,
            v6 + 2,
            (const void **)(v14 + 16)) )
    {
      v16 = *(_QWORD **)v14;
      if ( *(_QWORD **)v14 != v6 )
      {
        v17 = (_QWORD *)v6[1];
        *v17 = v7;
        v18 = (_QWORD *)v7[1];
        *v18 = v16;
        v19 = (_QWORD *)v16[1];
        *v19 = v6;
        v16[1] = v18;
        v7[1] = v17;
        v6[1] = v19;
      }
      goto LABEL_9;
    }
    v20 = v14;
    while ( *(_QWORD *)(v12 + 8 * v13) != v20 )
    {
      v14 = *(_QWORD *)(v14 + 8);
      v20 = v14;
      if ( !std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>::operator()<std::string,std::string>(
              v15,
              v6 + 2,
              (const void **)(v14 + 16)) )
      {
        v21 = *(_QWORD **)v14;
        v22 = (_QWORD *)v6[1];
        *v22 = v7;
        v23 = (_QWORD *)v7[1];
        *v23 = v21;
        v24 = (_QWORD *)v21[1];
        *v24 = v6;
        v21[1] = v23;
        v7[1] = v22;
        v6[1] = v24;
        goto LABEL_18;
      }
    }
    v25 = (_QWORD *)v6[1];
    *v25 = v7;
    v26 = (_QWORD *)v7[1];
    *v26 = v14;
    v27 = *(_QWORD **)(v14 + 8);
    *v27 = v6;
    *(_QWORD *)(v14 + 8) = v26;
    v7[1] = v25;
    v6[1] = v27;
    *(_QWORD *)(v12 + 8 * v13) = v6;
LABEL_18:
    v6 = v7;
  }
  v29 = 0LL;
  return std::_Hash<std::_Umap_traits<std::string,enum Spectre::Framework::MaterialMaker::Layer,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>,0>>::_Clear_guard::~_Clear_guard(&v29);
}
