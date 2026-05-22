/*
 * XREFs of ??$_Emplace_hint@AEBU?$pair@$$CBGI@std@@@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBGI@1@@Z @ 0x18005A934
 * Callers:
 *     ??0?$map@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBGI@std@@@1@@Z @ 0x1800550E8 (--0-$map@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@@std@@QEAA@V-$initializer_list@U-$.c)
 * Callees:
 *     ??$?0AEBU?$pair@$$CBGI@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@AEBU?$pair@$$CBGI@1@@Z @ 0x18005A89C (--$-0AEBU-$pair@$$CBGI@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBGI@std@@PE.c)
 *     ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@AEBG@Z @ 0x18005AA44 (--$_Find_hint@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@$0A.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005AC50 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUGestureAnimationData@Input.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18005AD04 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800A7AAC (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Emplace_hint<std::pair<unsigned short const,unsigned int> const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  __int128 v5; // xmm6
  _QWORD *v7; // rax
  __int64 v8; // rbx
  _QWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h]

  v4 = std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_hint<unsigned short>(
         a1,
         v9,
         a2,
         a3);
  v5 = *(_OWORD *)v4;
  v11 = *(_QWORD *)(v4 + 16);
  v10 = v5;
  if ( (_BYTE)v11 )
    return v10;
  if ( qword_180268CA8 == 0x666666666666666LL )
    std::_Throw_tree_length_error();
  v7 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,unsigned int>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned short const,unsigned int>,void *>>>(
         v9,
         (__int64)&qword_180268CA0,
         qword_180268CA0,
         a3);
  v8 = v7[1];
  v7[1] = 0LL;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>,void *>>>(v9);
  v10 = v5;
  return std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
           &qword_180268CA0,
           &v10,
           v8);
}
