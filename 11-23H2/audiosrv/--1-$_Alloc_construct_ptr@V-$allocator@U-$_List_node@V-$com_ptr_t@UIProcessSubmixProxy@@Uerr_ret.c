/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D1320
 * Callers:
 *     _std::_Hash_std::_Uset_traits_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::_Uhash_compare_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::hash_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____std::equal_to_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____0___::emplace_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__const_&__::_1_::dtor$8 @ 0x1800D0DC4 (_std--_Hash_std--_Uset_traits_wil--com_ptr_t_IProcessSubmixProxy_wil--err_returncode_policy__std.c)
 *     _std::_Hash_std::_Uset_traits_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::_Uhash_compare_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::hash_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____std::equal_to_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____0___::emplace_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____::_1_::dtor$8 @ 0x1800D0EF2 (_std--_Hash_std--_Uset_traits_wil--com_ptr_t_IProcessSubmixProxy_wil--err_returncod_ea_1800D0EF2.c)
 *     _std::forward_list_DisplacedStreamGroup_std::allocator_DisplacedStreamGroup___::_Insert_after_Microsoft::WRL::WeakRef_&_std::unique_ptr_SaDeviceParams_std::default_delete_SaDeviceParams____&__::_1_::dtor$0 @ 0x1800F4E7E (_std--forward_list_DisplacedStreamGroup_std--allocator_DisplacedStreamGroup___--_Insert_after_Mi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x18uLL);
}
