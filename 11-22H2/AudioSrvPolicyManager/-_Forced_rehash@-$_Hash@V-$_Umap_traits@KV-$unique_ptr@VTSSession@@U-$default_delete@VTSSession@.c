/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18003AD00
 * Callers:
 *     ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x180033564 (--$emplace@AEAKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@-$_Hash@V-$_.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000AB20 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000ACD0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180034440 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  const unsigned __int8 *v8; // r11
  const unsigned __int8 *v9; // rbx
  __int64 appended; // rax
  unsigned int *v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // r10
  const unsigned __int8 **v17; // rdx
  _QWORD *v18; // rax
  __int64 *v19; // r10
  __int64 v20; // r8
  const unsigned __int8 **v21; // rdx
  _QWORD *v22; // rax
  const unsigned __int8 **v23; // rdx
  _QWORD *v24; // rax
  __int64 v26; // [rsp+30h] [rbp+8h] BYREF

  v26 = a1;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_180063768;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    (__int64)&qword_180063778,
    2 * v5,
    qword_180063768);
  v7 = v5 - 1;
  qword_180063798 = v5;
  qword_180063790 = v5 - 1;
  v8 = *(const unsigned __int8 **)qword_180063768;
  v9 = *(const unsigned __int8 **)qword_180063768;
  while ( v8 != (const unsigned __int8 *)v3 )
  {
    v9 = *(const unsigned __int8 **)v9;
    appended = std::_Fnv1a_append_bytes(v6, v8 + 16, 4uLL);
    v13 = qword_180063778;
    v14 = 2 * (v7 & appended);
    if ( *(_QWORD *)(qword_180063778 + 16 * (v7 & appended)) == v3 )
    {
      *(_QWORD *)(qword_180063778 + 16 * (v7 & appended)) = v12;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_15;
    }
    v15 = *(__int64 **)(qword_180063778 + 16 * (v7 & appended) + 8);
    v6 = *v11;
    if ( (_DWORD)v6 == *((_DWORD *)v15 + 4) )
    {
      v16 = *v15;
      if ( *v15 != v12 )
      {
        v17 = *(const unsigned __int8 ***)(v12 + 8);
        *v17 = v9;
        v6 = *((_QWORD *)v9 + 1);
        *(_QWORD *)v6 = v16;
        v18 = *(_QWORD **)(v16 + 8);
        *v18 = v12;
        *(_QWORD *)(v16 + 8) = v6;
        *((_QWORD *)v9 + 1) = v17;
        *(_QWORD *)(v12 + 8) = v18;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v19 = v15 + 1;
      if ( *(__int64 **)(qword_180063778 + 8 * v14) == v15 )
        break;
      v15 = (__int64 *)*v19;
      if ( (_DWORD)v6 == *(_DWORD *)(*v19 + 16) )
      {
        v20 = *v15;
        v21 = *(const unsigned __int8 ***)(v12 + 8);
        *v21 = v9;
        v6 = *((_QWORD *)v9 + 1);
        *(_QWORD *)v6 = v20;
        v22 = *(_QWORD **)(v20 + 8);
        *v22 = v12;
        *(_QWORD *)(v20 + 8) = v6;
        *((_QWORD *)v9 + 1) = v21;
        *(_QWORD *)(v12 + 8) = v22;
        goto LABEL_15;
      }
    }
    v23 = *(const unsigned __int8 ***)(v12 + 8);
    *v23 = v9;
    v6 = *((_QWORD *)v9 + 1);
    *(_QWORD *)v6 = v15;
    v24 = (_QWORD *)*v19;
    *v24 = v12;
    *v19 = v6;
    *((_QWORD *)v9 + 1) = v23;
    *(_QWORD *)(v12 + 8) = v24;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_15:
    v7 = qword_180063790;
    v8 = v9;
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
