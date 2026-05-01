/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180622DDC
 * Callers:
 *     ??$_Emplace@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@std@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@U?$less@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@_N@1@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@1@@Z @ 0x1806227C4 (--$_Emplace@AEAPEAUIWinRTApplicationView@@AEAV-$shared_ptr@VUwpAppViewInfo@@@std@@@-$_Tree@V-$_T.c)
 *     _std::_Tree_std::_Tmap_traits_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__std::shared_ptr_UwpAppViewInfo__std::less_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy____std::allocator_std::pair_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const__std::shared_ptr_UwpAppViewInfo______0___::_Emplace_IWinRTApplicationView___&_std::shared_ptr_UwpAppViewInfo__&__::_1_::dtor$0 @ 0x18062289E (_std--_Tree_std--_Tmap_traits_wil--com_ptr_t_IWinRTApplicationView_wil--err_exception_policy__st.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rbx
  std::_Ref_count_base *v3; // rcx
  void *v4; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(std::_Ref_count_base **)(v1 + 48);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(v1 + 32));
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 0x38uLL);
}
