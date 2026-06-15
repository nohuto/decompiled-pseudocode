/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18003181C
 * Callers:
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18002E750 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18002E8B8 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x180030AB4 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18002B530 (--1TSSession@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::erase(
        __int64 a1,
        _DWORD *a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  void *v13; // rdi

  v3 = 0LL;
  v4 = 0xCBF29CE484222325uLL;
  do
  {
    v5 = *((unsigned __int8 *)a2 + v3++);
    v4 = 0x100000001B3LL * (v5 ^ v4);
  }
  while ( v3 < 4 );
  v6 = qword_18005C6C8;
  v7 = v4 & qword_18005C6E0;
  v8 = qword_18005C6B8;
  v9 = 2 * (v4 & qword_18005C6E0);
  v10 = *(__int64 **)(qword_18005C6C8 + 8 * v9 + 8);
  if ( v10 == (__int64 *)qword_18005C6B8 )
    return 0LL;
  while ( *a2 != *((_DWORD *)v10 + 4) )
  {
    if ( v10 == *(__int64 **)(qword_18005C6C8 + 8 * v9) )
      return 0LL;
    v10 = (__int64 *)v10[1];
  }
  if ( !v10 )
    return 0LL;
  v11 = 2 * v7;
  if ( *(__int64 **)(qword_18005C6C8 + 8 * v11 + 8) == v10 )
  {
    if ( *(__int64 **)(qword_18005C6C8 + 8 * v11) == v10 )
      *(_QWORD *)(qword_18005C6C8 + 8 * v11) = qword_18005C6B8;
    else
      v8 = v10[1];
    *(_QWORD *)(v6 + 8 * v11 + 8) = v8;
  }
  else if ( *(__int64 **)(qword_18005C6C8 + 8 * v11) == v10 )
  {
    *(_QWORD *)(qword_18005C6C8 + 8 * v11) = *v10;
  }
  v12 = *v10;
  --qword_18005C6C0;
  *(_QWORD *)v10[1] = v12;
  *(_QWORD *)(v12 + 8) = v10[1];
  v13 = (void *)v10[3];
  if ( v13 )
  {
    TSSession::~TSSession((TSSession *)v10[3]);
    operator delete(v13);
  }
  std::_Deallocate<16,0>((char *)v10, 0x20uLL);
  return 1LL;
}
