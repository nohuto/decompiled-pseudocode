/*
 * XREFs of ??$_Emplace@PEAUIUnknown@@@?$_Tree@V?$_Tset_traits@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@std@@_N@1@$$QEAPEAUIUnknown@@@Z @ 0x1800A701C
 * Callers:
 *     ?AddBuffer@CPresentationManager@@QEAA_NPEAUIUnknown@@@Z @ 0x1800A733C (-AddBuffer@CPresentationManager@@QEAA_NPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18009912C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUICompositor@Composition@UI@Windows@@.c)
 *     ?_Xlength@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@CAXXZ @ 0x18009932C (-_Xlength@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@std@@CAXXZ.c)
 *     ??$?0PEAUIUnknown@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@1@$$QEAPEAUIUnknown@@@Z @ 0x1800A6F34 (--$-0PEAUIUnknown@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@.c)
 *     ??$_Find_lower_bound@PEAUIUnknown@@@?$_Tree@V?$_Tset_traits@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@std@@@1@AEBQEAUIUnknown@@@Z @ 0x1800A7244 (--$_Find_lower_bound@PEAUIUnknown@@@-$_Tree@V-$_Tset_traits@PEAUIUnknown@@U-$less@PEAUIUnknown@@.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A72DC (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<IUnknown *,std::less<IUnknown *>,std::allocator<IUnknown *>,0>>::_Emplace<IUnknown *>(
        __int64 *a1,
        __int64 a2)
{
  __int64 lower; // rax
  const char *v5; // rcx
  _QWORD *v6; // r10
  __int128 v7; // xmm6
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD v11[4]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h]

  lower = std::_Tree<std::_Tset_traits<IUnknown *,std::less<IUnknown *>,std::allocator<IUnknown *>,0>>::_Find_lower_bound<IUnknown *>(
            a1,
            v11);
  v7 = *(_OWORD *)lower;
  v13 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v13 + 25) || *v6 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::vector<IUnknown *>::_Xlength(v5);
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<IUnknown *,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<IUnknown *,void *>>>(
           v11,
           (__int64)a1,
           *a1,
           v6);
    v9 = v8[1];
    v8[1] = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<IUnknown *,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<IUnknown *,void *>>>(v11);
    v12 = v7;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v12,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
