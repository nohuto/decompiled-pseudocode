/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@1@AEBV?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@1@@Z @ 0x180053950
 * Callers:
 *     ??0?$unordered_map@U_GUID@@W4ValidEffectPackConfigurationSettings@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@4@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@@std@@QEAA@V?$initializer_list@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@1@@Z @ 0x1800538D8 (--0-$unordered_map@U_GUID@@W4ValidEffectPackConfigurationSettings@@U-$hash@U_GUID@@@std@@U-$equa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@2@@Z @ 0x180053C04 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180053C04.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>(
        __int64 a1,
        int *a2)
{
  _QWORD *v2; // rax

  dword_1801D0160 = *a2;
  qword_1801D0168 = 0LL;
  qword_1801D0170 = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_1801D0168 = (__int64)v2;
  qword_1801D0178 = 0LL;
  xmmword_1801D0180 = 0LL;
  qword_1801D0190 = 7LL;
  qword_1801D0198 = 8LL;
  dword_1801D0160 = LODWORD(FLOAT_1_0);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>>>>>::_Assign_grow(
    &qword_1801D0178,
    16LL,
    v2);
  return &dword_1801D0160;
}
