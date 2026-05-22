/*
 * XREFs of ??$_Emplace@AEBUObjectPropertyPair@@@?$_Tree@V?$_Tset_traits@UObjectPropertyPair@@U?$less@UObjectPropertyPair@@@std@@V?$allocator@UObjectPropertyPair@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@std@@_N@1@AEBUObjectPropertyPair@@@Z @ 0x180169D3C
 * Callers:
 *     ?DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z @ 0x18016BAC0 (-DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@UObjectPropertyPair@@@?$_Tree@V?$_Tset_traits@UObjectPropertyPair@@U?$less@UObjectPropertyPair@@@std@@V?$allocator@UObjectPropertyPair@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@AEBUObjectPropertyPair@@@Z @ 0x18004C2F8 (--$_Find_lower_bound@UObjectPropertyPair@@@-$_Tree@V-$_Tset_traits@UObjectPropertyPair@@U-$less@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18009912C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUICompositor@Composition@UI@Windows@@.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$?0AEBUObjectPropertyPair@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@1@AEBUObjectPropertyPair@@@Z @ 0x1801697D8 (--$-0AEBUObjectPropertyPair@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@UObjectPropertyPair@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<ObjectPropertyPair,std::less<ObjectPropertyPair>,std::allocator<ObjectPropertyPair>,0>>::_Emplace<ObjectPropertyPair const &>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 lower; // rax
  const char *v6; // rcx
  __int64 v7; // r11
  __int128 v8; // xmm6
  unsigned int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  void *v14; // [rsp+28h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]

  lower = std::_Tree<std::_Tset_traits<ObjectPropertyPair,std::less<ObjectPropertyPair>,std::allocator<ObjectPropertyPair>,0>>::_Find_lower_bound<ObjectPropertyPair>(
            a1,
            (__int64)&v13,
            a3);
  v8 = *(_OWORD *)lower;
  v16 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v16 + 25)
    || (v9 = *(_DWORD *)(v16 + 28), *(_DWORD *)v7 < v9)
    || *(_DWORD *)v7 == v9 && *(_DWORD *)(v7 + 4) < *(_DWORD *)(v16 + 32) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Dwm_Xlength_error(v6);
    v10 = std::_Tree_temp_node<std::allocator<std::_Tree_node<ObjectPropertyPair,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<ObjectPropertyPair,void *>>>(
            &v13,
            (__int64)a1,
            *a1,
            (_QWORD *)v7);
    v11 = v10[1];
    v10[1] = 0LL;
    if ( v14 )
      std::_Deallocate<16,0>(v14, 0x28uLL);
    v15 = v8;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v15,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v16;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
