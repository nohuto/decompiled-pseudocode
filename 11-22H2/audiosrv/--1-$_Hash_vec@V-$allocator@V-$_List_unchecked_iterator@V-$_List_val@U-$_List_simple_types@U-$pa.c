/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x1800D13A0
 * Callers:
 *     _std::_Hash_std::_Umap_traits__GUID_enum_ValidEffectPackConfigurationSettings_std::_Uhash_compare__GUID_std::hash__GUID__std::equal_to__GUID____std::allocator_std::pair__GUID_const__enum_ValidEffectPackConfigurationSettings____0___::_Hash_std::_Umap_traits__GUID_enum_ValidEffectPackConfigurationSettings_std::_Uhash_compare__GUID_std::hash__GUID__std::equal_to__GUID____std::allocator_std::pair__GUID_const__enum_ValidEffectPackConfigurationSettings____0____::_1_::dtor$1 @ 0x18007CC42 (_std--_Hash_std--_Umap_traits__GUID_enum_ValidEffectPackConfigurationSettings_std--_ea_18007CC42.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$19 @ 0x18007D5BC (_AtmosCheck--AtmosCheck_--_1_--dtor$19.c)
 *     _CEndpointCharacteristicsCache::CEndpointCharacteristicsCache_::_1_::dtor$11 @ 0x18007DCBD (_CEndpointCharacteristicsCache--CEndpointCharacteristicsCache_--_1_--dtor$11.c)
 *     _std::_Hash_std::_Uset_traits_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::_Uhash_compare_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::hash_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____std::equal_to_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____0___::_Hash_std::_Uset_traits_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::_Uhash_compare_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::hash_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____std::equal_to_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____0____::_1_::dtor$1 @ 0x1800D12A9 (_std--_Hash_std--_Uset_traits_wil--com_ptr_t_IProcessSubmixProxy_wil--err_returncod_ea_1800D12A9.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>>>>>(
        __int64 a1)
{
  __int64 result; // rax

  std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
