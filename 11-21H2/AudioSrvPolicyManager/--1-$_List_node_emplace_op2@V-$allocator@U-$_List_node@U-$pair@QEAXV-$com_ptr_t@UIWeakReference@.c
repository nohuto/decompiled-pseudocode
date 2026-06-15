/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180014B08
 * Callers:
 *     _std::_Hash_std::_Umap_traits_void___wil::com_ptr_t_IWeakReference_wil::err_returncode_policy__std::_Uhash_compare_void___std::hash_void____std::equal_to_void______std::allocator_std::pair_void___const_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy______0___::emplace_IAudioSessionInfo___&_wil::com_ptr_t_IWeakReference_wil::err_returncode_policy__&__::_1_::dtor$0 @ 0x180045174 (_std--_Hash_std--_Umap_traits_void___wil--com_ptr_t_IWeakReference_wil--err_returncode_policy__s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 24);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*(_QWORD *)(v2 + 24));
      v2 = *(_QWORD *)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>((char *)v2, 0x20uLL);
  }
}
