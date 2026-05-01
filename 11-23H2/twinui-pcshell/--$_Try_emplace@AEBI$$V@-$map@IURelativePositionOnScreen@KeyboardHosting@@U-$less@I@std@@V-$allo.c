/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18017B820
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18014A6FC (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18014AB40 (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1805321EC (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180534758 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180535540 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18017B92C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801F02CC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801F0340 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803DCE94 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
        __int64 ***a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 **v3; // r9
  BOOL v6; // ebp
  __int64 **v7; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // rax
  unsigned int v10; // edx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 **v15; // r10
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rcx
  char v21; // [rsp+30h] [rbp-28h] BYREF
  void *v22; // [rsp+38h] [rbp-20h]
  unsigned int *v23; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = 0;
  v7 = v3;
  v8 = v3[1];
  if ( !*((_BYTE *)v8 + 25) )
  {
    v9 = v3[1];
    do
    {
      v10 = *((_DWORD *)v9 + 7);
      v8 = v9;
      if ( v10 < *a3 )
      {
        v9 = (__int64 *)v9[2];
      }
      else
      {
        v7 = (__int64 **)v9;
        v9 = (__int64 *)*v9;
      }
      v6 = v10 >= *a3;
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( !*((_BYTE *)v7 + 25) && *a3 >= *((_DWORD *)v7 + 7) )
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( a1[1] == (__int64 **)0x555555555555555LL )
    std::_Throw_tree_length_error();
  v23 = a3;
  v12 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>(
          (unsigned int)&v21,
          (_DWORD)a1,
          (_DWORD)v3,
          (_DWORD)v3,
          (__int64)&v23);
  v14 = *(_QWORD *)(v12 + 8);
  *(_QWORD *)(v12 + 8) = 0LL;
  if ( v22 )
    std::_Deallocate<16,0>(v22, 0x30uLL);
  a1[1] = (__int64 **)((char *)a1[1] + 1);
  v15 = *a1;
  *(_QWORD *)(v14 + 8) = v8;
  if ( v8 == (__int64 *)v15 )
  {
    *v15 = (__int64 *)v14;
    v15[1] = (__int64 *)v14;
    v15[2] = (__int64 *)v14;
    *(_BYTE *)(v14 + 24) = 1;
    goto LABEL_15;
  }
  if ( v6 )
  {
    *v8 = v14;
    if ( v8 == *v15 )
      *v15 = (__int64 *)v14;
  }
  else
  {
    v8[2] = v14;
    if ( v8 == v15[2] )
      v15[2] = (__int64 *)v14;
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
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
          a1,
          *(_QWORD *)(v17 + 8));
      *(_BYTE *)(*(_QWORD *)(v17 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL),
        v13,
        v17);
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
          *(_QWORD *)(v17 + 8),
          v13,
          *(_QWORD *)(v17 + 8));
      *(_BYTE *)(*(_QWORD *)(v17 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL));
    }
LABEL_33:
    v16 = *(_QWORD *)(v17 + 8);
  }
  *((_BYTE *)v15[1] + 24) = 1;
LABEL_15:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
