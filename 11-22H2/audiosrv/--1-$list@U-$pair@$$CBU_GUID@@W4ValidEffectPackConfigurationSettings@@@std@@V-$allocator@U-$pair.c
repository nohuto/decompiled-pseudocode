/*
 * XREFs of ??1?$list@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@2@@std@@QEAA@XZ @ 0x1801545AC
 * Callers:
 *     _std::_Hash_std::_Umap_traits__GUID_enum_ValidEffectPackConfigurationSettings_std::_Uhash_compare__GUID_std::hash__GUID__std::equal_to__GUID____std::allocator_std::pair__GUID_const__enum_ValidEffectPackConfigurationSettings____0___::_Hash_std::_Umap_traits__GUID_enum_ValidEffectPackConfigurationSettings_std::_Uhash_compare__GUID_std::hash__GUID__std::equal_to__GUID____std::allocator_std::pair__GUID_const__enum_ValidEffectPackConfigurationSettings____0____::_1_::dtor$0 @ 0x18007CC2C (_std--_Hash_std--_Umap_traits__GUID_enum_ValidEffectPackConfigurationSettings_std--_Uhash_compar.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180154414 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationS.c)
 */

void __fastcall std::list<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>::~list<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>(
        void **a1)
{
  std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
