/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18003B34C
 * Callers:
 *     _lambda_4d96e95c7f1dfdf18ba3c0829eb40359_::operator() @ 0x180034630 (_lambda_4d96e95c7f1dfdf18ba3c0829eb40359_--operator().c)
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180039058 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x18003A408 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000ACD0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18000B620 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180033538 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_delete.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::erase(
        __int64 a1,
        const unsigned __int8 *a2)
{
  __int64 appended; // rax
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a2, 4uLL);
  v5 = (__int64 *)std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Find_last<unsigned long>(
                    v4,
                    v13,
                    v3,
                    appended)[1];
  if ( !v5 )
    return 0LL;
  v7 = qword_180063778;
  v8 = 2 * (v6 & qword_180063790);
  if ( *(__int64 **)(qword_180063778 + 16 * (v6 & qword_180063790) + 8) == v5 )
  {
    if ( *(__int64 **)(qword_180063778 + 16 * (v6 & qword_180063790)) == v5 )
    {
      v9 = qword_180063768;
      *(_QWORD *)(qword_180063778 + 16 * (v6 & qword_180063790)) = qword_180063768;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(__int64 **)(qword_180063778 + 16 * (v6 & qword_180063790)) == v5 )
  {
    *(_QWORD *)(qword_180063778 + 16 * (v6 & qword_180063790)) = *v5;
  }
  v10 = *v5;
  --qword_180063770;
  *(_QWORD *)v5[1] = v10;
  v11 = v5[1];
  *(_QWORD *)(v10 + 8) = v11;
  std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>(
    v11,
    (char *)v5);
  return 1LL;
}
