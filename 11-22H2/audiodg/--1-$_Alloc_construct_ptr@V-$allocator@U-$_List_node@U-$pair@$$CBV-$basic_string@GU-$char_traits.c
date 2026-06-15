/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x14006B8EC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____wil::com_ptr_t_CAPOEndpointNotificationsHandler_wil::err_returncode_policy__std::_Uhash_compare_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::hash_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::equal_to_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__wil::com_ptr_t_CAPOEndpointNotificationsHandler_wil::err_returncode_policy______0___::emplace_unsigned_short___CAPOEndpointNotificationsHandler___&__::_1_::dtor$1 @ 0x14006AE66 (_std--_Hash_std--_Umap_traits_std--basic_string_unsigned_short_std--char_traits_unsigned_short__.c)
 *     _std::_Hash_std::_Umap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____wil::com_ptr_t_CMicBoostNotificationsHandler_wil::err_returncode_policy__std::_Uhash_compare_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::hash_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::equal_to_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__wil::com_ptr_t_CMicBoostNotificationsHandler_wil::err_returncode_policy______0___::emplace_unsigned_short___CMicBoostNotificationsHandler___&__::_1_::dtor$1 @ 0x14006B036 (_std--_Hash_std--_Umap_traits_std--basic_string_unsigned_short_std--char_traits_uns_ea_14006B036.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x38uLL);
}
