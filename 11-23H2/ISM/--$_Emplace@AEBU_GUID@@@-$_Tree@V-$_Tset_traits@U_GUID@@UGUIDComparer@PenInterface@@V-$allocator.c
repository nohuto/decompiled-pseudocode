/*
 * XREFs of ??$_Emplace@AEBU_GUID@@@?$_Tree@V?$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U_GUID@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x1801A6508
 * Callers:
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x1801A7474 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18005AD04 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     memcmp_0 @ 0x180065914 (memcmp_0.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800A7AAC (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBU_GUID@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U_GUID@@PEAX@std@@@1@PEAU?$_Tree_node@U_GUID@@PEAX@1@AEBU_GUID@@@Z @ 0x1801A63E8 (--$-0AEBU_GUID@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>,0>>::_Emplace<_GUID const &>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v3; // r15
  __int64 v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  void *v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h]

  v3 = *a1;
  v15 = 0;
  v7 = v3;
  v8 = *(_QWORD *)(v3 + 8);
  v14 = v8;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    v14 = v8;
    if ( memcmp_0((const void *)(v8 + 28), a3, 0x10uLL) >= 0 )
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
  if ( *(_BYTE *)(v7 + 25) || memcmp_0(a3, (const void *)(v7 + 28), 0x10uLL) < 0 )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<_GUID,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<_GUID,void *>>>(
           &v12,
           (__int64)a1,
           v3,
           a3);
    v10 = v9[1];
    v9[1] = 0LL;
    if ( v13 )
      std::_Deallocate<16,0>(v13, 0x30uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
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
