/*
 * XREFs of ??1?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@QEAA@XZ @ 0x1800D1450
 * Callers:
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$2 @ 0x1800D2302 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D0BB4 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_.c)
 */

void __fastcall std::unordered_set<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::~unordered_set<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x18uLL);
}
