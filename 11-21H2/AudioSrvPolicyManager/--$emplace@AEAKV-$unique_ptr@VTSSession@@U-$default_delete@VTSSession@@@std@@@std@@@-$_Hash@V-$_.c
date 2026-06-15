/*
 * XREFs of ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18002AA18
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18002D764 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18003122C (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::emplace<unsigned long &,std::unique_ptr<TSSession>>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v7; // rbp
  unsigned __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm1_4
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // [rsp+20h] [rbp-28h]

  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v7);
  v9 = *(_QWORD *)(qword_18005C6C8 + 16 * (v7 & qword_18005C6E0) + 8);
  v10 = qword_18005C6B8;
  if ( v9 == qword_18005C6B8 )
    goto LABEL_11;
  while ( *a3 != *(_DWORD *)(v9 + 16) )
  {
    if ( v9 == *(_QWORD *)(qword_18005C6C8 + 16 * (v7 & qword_18005C6E0)) )
    {
      v10 = v9;
      v9 = 0LL;
      goto LABEL_9;
    }
    v9 = *(_QWORD *)(v9 + 8);
  }
  v10 = *(_QWORD *)v9;
LABEL_9:
  if ( !v9 )
  {
LABEL_11:
    if ( qword_18005C6C0 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    ProcessHeap = GetProcessHeap();
    v13 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
    v13[4] = *a3;
    v14 = *a4;
    *a4 = 0LL;
    *((_QWORD *)v13 + 3) = v14;
    v15 = qword_18005C6C0;
    v16 = qword_18005C6C0 + 1;
    if ( qword_18005C6C0 + 1 < 0 )
      v17 = (float)(int)(v16 & 1 | (v16 >> 1)) + (float)(int)(v16 & 1 | (v16 >> 1));
    else
      v17 = (float)(int)v16;
    v18 = qword_18005C6E8;
    if ( qword_18005C6E8 < 0 )
    {
      v18 = qword_18005C6E8 & 1;
      v19 = (float)(int)(v18 | ((unsigned __int64)qword_18005C6E8 >> 1))
          + (float)(int)(v18 | ((unsigned __int64)qword_18005C6E8 >> 1));
    }
    else
    {
      v19 = (float)(int)qword_18005C6E8;
    }
    if ( (float)(v17 / v19) > *(float *)&dword_18005C6B0 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Rehash_for_1(
        v18,
        v12);
      v20 = *(_QWORD *)(qword_18005C6C8 + 16 * (v7 & qword_18005C6E0) + 8);
      if ( v20 == qword_18005C6B8 )
      {
        v26 = qword_18005C6B8;
      }
      else
      {
        while ( v13[4] != *(_DWORD *)(v20 + 16) )
        {
          if ( v20 == *(_QWORD *)(qword_18005C6C8 + 16 * (v7 & qword_18005C6E0)) )
          {
            v26 = v20;
            goto LABEL_27;
          }
          v20 = *(_QWORD *)(v20 + 8);
        }
        v26 = *(_QWORD *)v20;
      }
LABEL_27:
      v10 = v26;
      v15 = qword_18005C6C0;
    }
    v21 = *(_QWORD **)(v10 + 8);
    qword_18005C6C0 = v15 + 1;
    *(_QWORD *)v13 = v10;
    *((_QWORD *)v13 + 1) = v21;
    *v21 = v13;
    *(_QWORD *)(v10 + 8) = v13;
    v22 = 2 * (v7 & qword_18005C6E0);
    v23 = qword_18005C6C8;
    v24 = *(_QWORD *)(qword_18005C6C8 + 16 * (v7 & qword_18005C6E0));
    if ( v24 == qword_18005C6B8 )
    {
      *(_QWORD *)(qword_18005C6C8 + 16 * (v7 & qword_18005C6E0)) = v13;
LABEL_33:
      *(_QWORD *)(v23 + 8 * v22 + 8) = v13;
      goto LABEL_34;
    }
    if ( v24 == v10 )
    {
      *(_QWORD *)(qword_18005C6C8 + 16 * (v7 & qword_18005C6E0)) = v13;
    }
    else if ( *(_QWORD **)(qword_18005C6C8 + 16 * (v7 & qword_18005C6E0) + 8) == v21 )
    {
      goto LABEL_33;
    }
LABEL_34:
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
