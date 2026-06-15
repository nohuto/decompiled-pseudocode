/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18001501C
 * Callers:
 *     _dynamic_atexit_destructor_for__TsSessionList__ @ 0x18004B9A0 (_dynamic_atexit_destructor_for__TsSessionList__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18001ED60 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180033538 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_delete.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdx
  _QWORD **v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)(a1 + 24);
  v8 = v2;
  v3 = (*(_QWORD *)(a1 + 32) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
  v7 = v3;
  if ( v3 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v8, &v7);
    v3 = v7;
    v2 = v8;
  }
  operator delete(v2, v3);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD ***)(a1 + 8);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( *v4 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>();
      v5 = v6;
    }
    while ( v6 );
  }
  operator delete(*(void **)(a1 + 8), 0x20uLL);
}
