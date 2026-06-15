/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180031710
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x18000D650 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18002B530 (--1TSSession@@QEAA@XZ.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180031530 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSessio.c)
 */

char *__fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::clear(
        __int64 a1)
{
  char *result; // rax
  char **v3; // rcx
  char *v4; // rbx
  void *v5; // rsi
  char *v6; // rbp
  void *v7; // rdx
  unsigned __int64 v8; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (char *)&retaddr;
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)(a1 + 56) >> 3 <= *(_QWORD *)(a1 + 16) )
    {
      v3 = *(char ***)(a1 + 8);
      *(_QWORD *)v3[1] = 0LL;
      v4 = *v3;
      if ( *v3 )
      {
        do
        {
          v5 = (void *)*((_QWORD *)v4 + 3);
          v6 = *(char **)v4;
          if ( v5 )
          {
            TSSession::~TSSession(*((TSSession **)v4 + 3));
            operator delete(v5);
          }
          std::_Deallocate<16,0>(v4, 0x20uLL);
          v4 = v6;
        }
        while ( v6 );
      }
      **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = 0LL;
      v7 = *(void **)(a1 + 24);
      result = *(char **)(a1 + 8);
      v8 = (unsigned __int64)(*(_QWORD *)(a1 + 32) - (_QWORD)v7 + 7LL) >> 3;
      if ( (unsigned __int64)v7 > *(_QWORD *)(a1 + 32) )
        v8 = 0LL;
      if ( v8 )
        memset64(v7, (unsigned __int64)result, v8);
    }
    else
    {
      return std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Unchecked_erase(
               (_QWORD *)a1,
               **(char ***)(a1 + 8),
               *(char **)(a1 + 8));
    }
  }
  return result;
}
