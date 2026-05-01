/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180121A60
 * Callers:
 *     ??$_Insert_or_assign@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@?$map@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@_N@1@AEBU?$com_ptr@UIApplicationView@@@winrt@@AEAV?$shared_ptr@VInteractionRecord@SnapInteraction@@@1@@Z @ 0x1801218D8 (--$_Insert_or_assign@AEBU-$com_ptr@UIApplicationView@@@winrt@@AEAV-$shared_ptr@VInteractionRecor.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v4 = *(std::_Ref_count_base **)(v1 + 48);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    if ( *(_QWORD *)(v1 + 32) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v1 + 32));
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 56LL);
}
