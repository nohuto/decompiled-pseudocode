/*
 * XREFs of ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800B725C
 * Callers:
 *     ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800B74CC (--$emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@AEBQEAVCWindowData@@@Z @ 0x18005524C (--$_Find_lower_bound@PEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWin.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?0AEAPEAVCWindowData@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@AEAPEAVCWindowData@@@Z @ 0x1800B7120 (--$-0AEAPEAVCWindowData@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800B8B34 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@Q.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010E050 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Emplace<CWindowData * &>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 lower; // rax
  _QWORD *v6; // r10
  __int128 v7; // xmm6
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  void *v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  char *v14; // [rsp+40h] [rbp-28h]

  lower = std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Find_lower_bound<CWindowData *>(
            a1,
            (__int64)&v13,
            a3);
  v7 = *(_OWORD *)lower;
  v14 = *(char **)(lower + 16);
  if ( v14[25] || *v6 < *((_QWORD *)v14 + 4) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Dwm_Xlength_error(v14);
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<CWindowData *,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
           &v11,
           (__int64)a1,
           *a1,
           v6);
    v9 = v8[1];
    v8[1] = 0LL;
    if ( v12 )
      std::_Deallocate<16,0>(v12, 0x28uLL);
    v13 = v7;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Insert_node(
                      a1,
                      &v13,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
