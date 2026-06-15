/*
 * XREFs of ??$emplace@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@1@@Z @ 0x1800539F4
 * Callers:
 *     ??0?$unordered_map@U_GUID@@W4ValidEffectPackConfigurationSettings@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@4@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@@std@@QEAA@V?$initializer_list@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@1@@Z @ 0x1800538D8 (--0-$unordered_map@U_GUID@@W4ValidEffectPackConfigurationSettings@@U-$hash@U_GUID@@@std@@U-$equa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180053B34 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@.c)
 *     ??$_Find_last@U_GUID@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@1@AEBU_GUID@@_K@Z @ 0x180053B98 (--$_Find_last@U_GUID@@@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180155210 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettin.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801552AC (-_Forced_rehash@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V-$_Uhas.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::emplace<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings> const &>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3)
{
  unsigned __int64 v5; // rdi
  _OWORD *v6; // rbp
  unsigned __int64 v7; // rdx
  float v8; // xmm0_4
  __int64 v9; // rcx
  float v10; // xmm1_4
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-10h]

  v5 = *a3 ^ a3[1] ^ a3[2] ^ (unsigned __int64)a3[3];
  std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Find_last<_GUID>(
    a1,
    &v15,
    a3,
    v5);
  if ( *((_QWORD *)&v15 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v15 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_1801D0170 == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v16 = &qword_1801D0168;
    v17 &= *((_QWORD *)&v15 + 1);
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(DWORD2(v15) + 40));
    v17 = (unsigned __int64)v6;
    v6[1] = *(_OWORD *)a3;
    *((_DWORD *)v6 + 8) = a3[4];
    v7 = qword_1801D0170 + 1;
    if ( qword_1801D0170 + 1 < 0 )
      v8 = (float)(int)(v7 & 1 | (v7 >> 1)) + (float)(int)(v7 & 1 | (v7 >> 1));
    else
      v8 = (float)(int)v7;
    v9 = qword_1801D0198;
    if ( qword_1801D0198 < 0 )
    {
      v9 = qword_1801D0198 & 1;
      v10 = (float)(int)(v9 | ((unsigned __int64)qword_1801D0198 >> 1))
          + (float)(int)(v9 | ((unsigned __int64)qword_1801D0198 >> 1));
    }
    else
    {
      v10 = (float)(int)qword_1801D0198;
    }
    if ( (float)(v8 / v10) > *(float *)&dword_1801D0160 )
    {
      v12 = std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Desired_grow_bucket_count();
      std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Forced_rehash(
        v13,
        v12);
      v15 = *(_OWORD *)std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Find_last<_GUID>(
                         v14,
                         &v16,
                         v6 + 1,
                         v5);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Insert_new_node_before(
                      v9,
                      v5,
                      v15,
                      v6);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
