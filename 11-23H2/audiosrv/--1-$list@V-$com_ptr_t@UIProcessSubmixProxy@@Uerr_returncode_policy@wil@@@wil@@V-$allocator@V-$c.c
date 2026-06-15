/*
 * XREFs of ??1?$list@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800D13C4
 * Callers:
 *     _std::_Hash_std::_Uset_traits_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::_Uhash_compare_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::hash_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____std::equal_to_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____0___::_Hash_std::_Uset_traits_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::_Uhash_compare_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::hash_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____std::equal_to_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy______std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____0____::_1_::dtor$0 @ 0x1800D1249 (_std--_Hash_std--_Uset_traits_wil--com_ptr_t_IProcessSubmixProxy_wil--err_returncod_ea_1800D1249.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D0BB4 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_.c)
 */

void __fastcall std::list<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::~list<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
        void **a1)
{
  std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x18uLL);
}
