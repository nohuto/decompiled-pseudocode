/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801F0C08
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801F0254 (--$_Try_emplace@AEBK$$V@-$map@KV-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_p.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x1801F11E4 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rsi
  _QWORD **v3; // rdx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  void *v6; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_QWORD ***)(v1 + 40);
    *v3[1] = 0LL;
    v4 = *v3;
    if ( *v3 )
    {
      do
      {
        v5 = (_QWORD *)*v4;
        std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'(v4 + 2);
        std::_Deallocate<16,0>(v4, 0x20uLL);
        v4 = v5;
      }
      while ( v5 );
    }
    std::_Deallocate<16,0>(*(void **)(v1 + 40), 0x20uLL);
  }
  v6 = *(void **)(a1 + 8);
  if ( v6 )
    std::_Deallocate<16,0>(v6, 0x38uLL);
}
