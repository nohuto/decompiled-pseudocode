/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18055E680
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHSTRING__@@$$V@?$map@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@_N@1@AEBQEAUHSTRING__@@@Z @ 0x18055E4E4 (--$_Try_emplace@AEBQEAUHSTRING__@@$$V@-$map@PEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighti.c)
 *     ??$_Emplace@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@std@@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@std@@_N@1@AEAIAEAV?$shared_ptr@VWin32ProcessInfo@@@1@@Z @ 0x180566BF0 (--$_Emplace@AEAIAEAV-$shared_ptr@VWin32ProcessInfo@@@std@@@-$_Tree@V-$_Tmap_traits@IV-$shared_pt.c)
 *     ??$_Emplace@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@_N@1@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@1@@Z @ 0x180566CC4 (--$_Emplace@AEAPEAUHWND__@@AEAV-$shared_ptr@VWin32AppViewInfo@@@std@@@-$_Tree@V-$_Tmap_traits@PE.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>(
        __int64 a1)
{
  std::_Ref_count_base **v2; // rcx

  v2 = *(std::_Ref_count_base ***)(a1 + 8);
  if ( v2 )
  {
    if ( v2[6] )
    {
      std::_Ref_count_base::_Decref(v2[6]);
      v2 = *(std::_Ref_count_base ***)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 0x38uLL);
  }
}
