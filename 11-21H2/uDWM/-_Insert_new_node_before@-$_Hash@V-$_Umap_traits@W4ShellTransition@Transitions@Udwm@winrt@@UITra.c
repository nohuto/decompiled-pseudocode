/*
 * XREFs of ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18005B388
 * Callers:
 *     ??$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@_N@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@@Z @ 0x18005B208 (--$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4Shell.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Insert_new_node_before(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++a1[2];
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = a1[3];
  v6 = 2 * (a2 & a1[6]);
  v7 = *(_QWORD *)(v5 + 16 * (a2 & a1[6]));
  if ( v7 == a1[1] )
  {
    *(_QWORD *)(v5 + 8 * v6) = a4;
  }
  else
  {
    if ( v7 == a3 )
    {
      *(_QWORD *)(v5 + 8 * v6) = a4;
      return a4;
    }
    if ( *(_QWORD **)(v5 + 8 * v6 + 8) != v4 )
      return a4;
  }
  *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
  return a4;
}
