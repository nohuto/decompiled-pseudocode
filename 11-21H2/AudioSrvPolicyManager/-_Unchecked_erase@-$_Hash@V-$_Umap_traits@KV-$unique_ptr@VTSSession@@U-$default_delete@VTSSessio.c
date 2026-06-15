/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180031530
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180031710 (-clear@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@s.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18002B530 (--1TSSession@@QEAA@XZ.c)
 */

char *__fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        char *a2,
        char *a3)
{
  char *v6; // rbx
  char **v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  char *v13; // r12
  char *v14; // rax
  TSSession *v15; // rax
  char **v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  char *v21; // r12
  void *v22; // rbp
  char *v23; // [rsp+20h] [rbp-58h]
  char *v24; // [rsp+28h] [rbp-50h]
  char **v25; // [rsp+30h] [rbp-48h]
  char **v26; // [rsp+88h] [rbp+10h]
  TSSession *v27; // [rsp+90h] [rbp+18h]
  char *v28; // [rsp+90h] [rbp+18h]
  char *v29; // [rsp+98h] [rbp+20h]

  if ( a2 != a3 )
  {
    v6 = a2;
    v7 = (char **)*((_QWORD *)a2 + 1);
    v8 = 0xCBF29CE484222325uLL;
    v9 = a1[3];
    v26 = (char **)a1[1];
    v10 = 0LL;
    v25 = v7;
    do
    {
      v11 = (unsigned __int8)a2[v10 + 16];
      ++v10;
      v8 = 0x100000001B3LL * (v11 ^ v8);
    }
    while ( v10 < 4 );
    v12 = 2 * (a1[6] & v8);
    v13 = *(char **)(v9 + 8 * v12);
    v23 = *(char **)(v9 + 8 * v12 + 8);
    while ( 1 )
    {
      v14 = v6;
      v24 = v6;
      v29 = v6;
      v6 = *(char **)v6;
      v15 = (TSSession *)*((_QWORD *)v14 + 3);
      v27 = v15;
      if ( v15 )
      {
        TSSession::~TSSession(v15);
        operator delete(v27);
      }
      std::_Deallocate<16,0>(v29, 0x20uLL);
      --a1[2];
      if ( v24 == v23 )
        break;
      if ( v6 == a3 )
      {
        if ( v13 == a2 )
LABEL_10:
          *(_QWORD *)(v9 + 8 * v12) = v6;
        goto LABEL_11;
      }
    }
    if ( v13 == a2 )
    {
      *(_QWORD *)(v9 + 8 * v12) = v26;
      v17 = v26;
    }
    else
    {
      v17 = v7;
    }
    while ( 1 )
    {
      *(_QWORD *)(v9 + 8 * v12 + 8) = v17;
      if ( v6 == a3 )
        break;
      v18 = 0LL;
      v19 = 0xCBF29CE484222325uLL;
      do
      {
        v20 = (unsigned __int8)v6[v18++ + 16];
        v19 = 0x100000001B3LL * (v20 ^ v19);
      }
      while ( v18 < 4 );
      v7 = v25;
      v12 = 2 * (a1[6] & v19);
      v28 = *(char **)(v9 + 8 * v12 + 8);
      while ( 1 )
      {
        v21 = v6;
        v6 = *(char **)v6;
        v22 = (void *)*((_QWORD *)v21 + 3);
        if ( v22 )
        {
          TSSession::~TSSession(*((TSSession **)v21 + 3));
          operator delete(v22);
        }
        std::_Deallocate<16,0>(v21, 0x20uLL);
        --a1[2];
        if ( v21 == v28 )
          break;
        if ( v6 == a3 )
          goto LABEL_10;
      }
      v17 = v26;
      *(_QWORD *)(v9 + 8 * v12) = v26;
    }
LABEL_11:
    *v7 = v6;
    *((_QWORD *)v6 + 1) = v7;
  }
  return a3;
}
