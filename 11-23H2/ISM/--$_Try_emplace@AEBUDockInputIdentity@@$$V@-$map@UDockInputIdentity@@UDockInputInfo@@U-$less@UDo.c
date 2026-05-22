/*
 * XREFs of ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x18019B7B4
 * Callers:
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18019CB80 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18005AD04 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800A7AAC (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBUDockInputIdentity@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUDockInputIdentity@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18019AF8C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBUDockInputIdentity@@@1@V-$tuple@$$V@1@@-$_Tree_t.c)
 */

__int64 __fastcall std::map<DockInputIdentity,DockInputInfo>::_Try_emplace<DockInputIdentity const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v3; // r11
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned int v8; // r10d
  bool v9; // cf
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  bool v12; // cf
  unsigned __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  void *v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  int v20; // [rsp+48h] [rbp-20h]
  unsigned int *v21; // [rsp+70h] [rbp+8h] BYREF

  v3 = *a1;
  v20 = 0;
  v6 = v3;
  v7 = *(_QWORD *)(v3 + 8);
  v19 = v7;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *a3;
    do
    {
      v19 = v7;
      v9 = *(_DWORD *)(v7 + 32) < v8;
      if ( *(_DWORD *)(v7 + 32) == v8 )
      {
        v10 = *((_QWORD *)a3 + 1);
        v9 = *(_QWORD *)(v7 + 40) < v10;
        if ( *(_QWORD *)(v7 + 40) == v10 )
          v9 = *(_WORD *)(v7 + 48) < *((_WORD *)a3 + 8);
      }
      if ( v9 )
      {
        v20 = 0;
        v7 = *(_QWORD *)(v7 + 16);
      }
      else
      {
        v6 = v7;
        v20 = 1;
        v7 = *(_QWORD *)v7;
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_16;
  v11 = *(_DWORD *)(v6 + 32);
  v12 = *a3 < v11;
  if ( *a3 == v11 )
  {
    v13 = *(_QWORD *)(v6 + 40);
    v12 = *((_QWORD *)a3 + 1) < v13;
    if ( *((_QWORD *)a3 + 1) == v13 )
      v12 = *((_WORD *)a3 + 8) < *(_WORD *)(v6 + 48);
  }
  if ( v12 )
  {
LABEL_16:
    if ( a1[1] == 0x1C71C71C71C71C7LL )
      std::_Throw_tree_length_error();
    v21 = a3;
    v14 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DockInputInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DockInputInfo>,void *>>>(
            &v17,
            (__int64)a1,
            v3,
            v7,
            (_OWORD **)&v21);
    v15 = v14[1];
    v14[1] = 0LL;
    if ( v18 )
      std::_Deallocate<16,0>(v18, 0x90uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v19,
                      v15);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
