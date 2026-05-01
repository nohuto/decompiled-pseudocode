/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18010B3D8
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800C0C40 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x1800C2934 (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x180480BF0 (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180482B2C (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180483510 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18010B344 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801B81D8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801B8228 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180340C88 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v3; // r9
  BOOL v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned int v11; // edx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // r10
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+38h] [rbp-30h]
  unsigned int *v23; // [rsp+70h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = 0;
  v7 = v3;
  v8 = *(_QWORD *)(v3 + 8);
  v9 = v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    v10 = *(_QWORD *)(v3 + 8);
    do
    {
      v11 = *(_DWORD *)(v10 + 28);
      v9 = v10;
      v8 = v10;
      if ( v11 < *a3 )
      {
        v10 = *(_QWORD *)(v10 + 16);
      }
      else
      {
        v7 = v10;
        v10 = *(_QWORD *)v10;
      }
      v6 = v11 >= *a3;
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  if ( !*(_BYTE *)(v7 + 25) && *a3 >= *(_DWORD *)(v7 + 28) )
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( a1[1] == 0x555555555555555LL )
    std::_Throw_tree_length_error();
  v23 = a3;
  v13 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>(
          &v21,
          (__int64)a1,
          v3,
          v3,
          &v23);
  v14 = v13[1];
  v13[1] = 0LL;
  if ( v22 )
    std::_Deallocate<16,0>(v22, 48LL);
  ++a1[1];
  v15 = (_QWORD *)*a1;
  *(_QWORD *)(v14 + 8) = v8;
  if ( (_QWORD *)v8 == v15 )
  {
    *v15 = v14;
    v15[1] = v14;
    v15[2] = v14;
    *(_BYTE *)(v14 + 24) = 1;
    goto LABEL_15;
  }
  if ( v6 )
  {
    *(_QWORD *)v8 = v14;
    if ( v9 == *v15 )
      *v15 = v14;
  }
  else
  {
    *(_QWORD *)(v8 + 16) = v14;
    if ( v9 == v15[2] )
      v15[2] = v14;
  }
  v16 = *(_QWORD *)(v14 + 8);
  v17 = v14;
  while ( !*(_BYTE *)(v16 + 24) )
  {
    v18 = *(_QWORD *)(v17 + 8);
    v19 = *(__int64 **)(v18 + 8);
    v20 = *v19;
    if ( v18 == *v19 )
    {
      v20 = v19[2];
      if ( !*(_BYTE *)(v20 + 24) )
        goto LABEL_36;
      if ( v17 == *(_QWORD *)(v18 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
      *(_BYTE *)(*(_QWORD *)(v17 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v20 + 24) )
      {
LABEL_36:
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(v20 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
        v17 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL);
        goto LABEL_33;
      }
      if ( v17 == *(_QWORD *)v18 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          a1,
          *(_QWORD *)(v17 + 8));
      *(_BYTE *)(*(_QWORD *)(v17 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
    }
LABEL_33:
    v16 = *(_QWORD *)(v17 + 8);
  }
  *(_BYTE *)(v15[1] + 24LL) = 1;
LABEL_15:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
