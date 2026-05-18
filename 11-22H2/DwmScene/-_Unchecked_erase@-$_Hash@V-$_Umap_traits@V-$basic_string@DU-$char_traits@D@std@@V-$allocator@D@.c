/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18009B9E0
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180098A20 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 * Callees:
 *     ??$_Hash_array_representation@D@std@@YA_KQEBD_K@Z @ 0x18001E9A0 (--$_Hash_array_representation@D@std@@YA_KQEBD_K@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18009B670 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$al.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::string,enum Spectre::Framework::MaterialMaker::Layer,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // r15
  unsigned __int8 *v10; // rcx
  bool v11; // cf
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _QWORD *v14; // r11
  __int64 v15; // r14
  _QWORD *v16; // rax
  bool v17; // bl
  _QWORD *v18; // rax
  unsigned __int8 *v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rbp
  bool v23; // bl
  _QWORD *v24; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-50h]
  _QWORD *v26; // [rsp+30h] [rbp-48h]
  _QWORD *v27; // [rsp+88h] [rbp+10h]
  _QWORD *v28; // [rsp+90h] [rbp+18h]

  if ( a2 != a3 )
  {
    v6 = (_QWORD *)a2[1];
    v7 = a1 + 1;
    v8 = a1[3];
    v9 = (_QWORD *)a1[1];
    v10 = (unsigned __int8 *)(a2 + 2);
    v11 = a2[5] < 0x10uLL;
    v26 = a2;
    v12 = a2[4];
    v24 = v7;
    v25 = v6;
    if ( !v11 )
      v10 = *(unsigned __int8 **)v10;
    v13 = std::_Hash_array_representation<char>(v10, v12);
    v15 = 2 * (a1[6] & v13);
    v27 = *(_QWORD **)(v8 + 16 * (a1[6] & v13));
    v16 = *(_QWORD **)(v8 + 16 * (a1[6] & v13) + 8);
    v28 = v16;
    while ( 1 )
    {
      v17 = v14 == v16;
      std::_Hash<std::_Umap_traits<std::string,enum Spectre::Framework::MaterialMaker::Layer,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>,0>>::_Range_eraser::_Bump_erased(&v24);
      if ( v17 )
        break;
      v14 = v26;
      v16 = v28;
      if ( v26 == a3 )
      {
        if ( v27 == a2 )
LABEL_8:
          *(_QWORD *)(v8 + 8 * v15) = v14;
        goto LABEL_9;
      }
    }
    if ( v27 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v15) = v9;
      v6 = v9;
    }
    for ( *(_QWORD *)(v8 + 8 * v15 + 8) = v6; ; *(_QWORD *)(v8 + 8 * v15 + 8) = v9 )
    {
      v14 = v26;
      if ( v26 == a3 )
        break;
      v20 = (unsigned __int8 *)(v26 + 2);
      if ( v26[5] >= 0x10uLL )
        v20 = *(unsigned __int8 **)v20;
      v21 = std::_Hash_array_representation<char>(v20, v26[4]);
      v15 = 2 * (a1[6] & v21);
      v22 = *(_QWORD **)(v8 + 16 * (a1[6] & v21) + 8);
      while ( 1 )
      {
        v23 = v14 == v22;
        std::_Hash<std::_Umap_traits<std::string,enum Spectre::Framework::MaterialMaker::Layer,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>,0>>::_Range_eraser::_Bump_erased(&v24);
        if ( v23 )
          break;
        v14 = v26;
        if ( v26 == a3 )
          goto LABEL_8;
      }
      *(_QWORD *)(v8 + 8 * v15) = v9;
    }
LABEL_9:
    v18 = v25;
    *v25 = v14;
    v14[1] = v18;
  }
  return a3;
}
