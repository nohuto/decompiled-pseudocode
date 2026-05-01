/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180480174
 * Callers:
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x180480BF0 (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180482B2C (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180483510 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801B80A0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180340C88 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18047F04C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@1@V-$tuple@$$V@1@@-$_Tree_temp_no_ea_18047F04C.c)
 */

__int64 __fastcall std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  void *v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+48h] [rbp-20h]
  _DWORD *v16; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0;
  v5 = *a1;
  v7 = v5;
  v8 = *(_QWORD *)(v5 + 8);
  v14 = v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    a4 = (unsigned int)*a3;
    do
    {
      v14 = v8;
      if ( *(_DWORD *)(v8 + 28) >= (unsigned int)a4 )
      {
        v7 = v8;
        v15 = 1;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        v15 = 0;
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( *(_BYTE *)(v7 + 25) || *a3 < *(_DWORD *)(v7 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v16 = a3;
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *>>>(
           &v12,
           (__int64)a1,
           v5,
           a4,
           &v16);
    v10 = v9[1];
    v9[1] = 0LL;
    if ( v13 )
      std::_Deallocate<16,0>(v13, 0x28uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,enum JavaOption>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v14,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
