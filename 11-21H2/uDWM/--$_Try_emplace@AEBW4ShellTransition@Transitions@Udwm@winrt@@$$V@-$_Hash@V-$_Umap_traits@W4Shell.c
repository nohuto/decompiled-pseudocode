/*
 * XREFs of ??$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@_N@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@@Z @ 0x18005B208
 * Callers:
 *     ?RegisterTransitionHandler@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHHPEAX@Z @ 0x18005CE90 (-RegisterTransitionHandler@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@U.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_last@W4ShellTransition@Transitions@Udwm@winrt@@@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@_K@Z @ 0x180040CB0 (--$_Find_last@W4ShellTransition@Transitions@Udwm@winrt@@@-$_Hash@V-$_Umap_traits@W4ShellTransiti.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005B364 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellTransition@Transitions.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18005B388 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITra.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAAXXZ @ 0x1800FBA64 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHan.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180107A14 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Try_emplace<enum winrt::Udwm::Transitions::ShellTransition const &,>(
        float *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v6; // rsi
  unsigned __int64 i; // rcx
  const char *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rcx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v6);
  std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Find_last<enum winrt::Udwm::Transitions::ShellTransition>(
    a1,
    v17,
    a3,
    v6);
  if ( *((_QWORD *)&v17[0] + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v17[0] + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error(v8);
    v16[0] = a1 + 2;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(DWORD2(v17[0]) + 32));
    v16[1] = v9;
    *(_DWORD *)(v9 + 16) = *a3;
    *(_QWORD *)(v9 + 24) = 0LL;
    v10 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *((_QWORD *)a1 + 7);
    if ( v12 < 0 )
    {
      v15 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v12 >> 1);
      v13 = (float)(int)v15 + (float)(int)v15;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    if ( (float)(v11 / v13) > *a1 )
    {
      std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Rehash_for_1(a1);
      v17[0] = *(_OWORD *)std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Find_last<enum winrt::Udwm::Transitions::ShellTransition>(
                            a1,
                            v17,
                            (_DWORD *)(v9 + 16),
                            v6);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Insert_new_node_before(
                      a1,
                      v6,
                      *(_QWORD *)&v17[0],
                      v9,
                      v16[0],
                      0LL);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(v16);
  }
  return a2;
}
