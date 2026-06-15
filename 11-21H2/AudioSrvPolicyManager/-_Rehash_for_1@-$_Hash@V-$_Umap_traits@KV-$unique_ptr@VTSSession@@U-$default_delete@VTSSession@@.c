/*
 * XREFs of ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18003122C
 * Callers:
 *     ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18002AA18 (--$emplace@AEAKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@-$_Hash@V-$_.c)
 * Callees:
 *     _o_ceilf_0 @ 0x180003470 (_o_ceilf_0.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000DB90 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

_QWORD *std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Rehash_for_1()
{
  int v0; // ecx
  float v1; // xmm0_4
  unsigned __int64 v2; // rax
  float v3; // xmm0_4
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r9
  _QWORD *result; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r10
  unsigned __int64 i; // r8
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r10
  __int64 *v20; // rdx
  int v21; // r8d
  _QWORD *v22; // rdi
  _QWORD *v23; // r9
  _QWORD *v24; // r8
  _QWORD *v25; // rdx
  __int64 **v26; // rdi
  __int64 v27; // r10
  _QWORD *v28; // r9
  _QWORD *v29; // r8
  _QWORD *v30; // rdx
  _QWORD *v31; // r9
  __int64 **v32; // r8
  __int64 *v33; // rdx

  v0 = qword_18005C6C0 + 1;
  if ( qword_18005C6C0 + 1 < 0 )
  {
    v2 = v0 & 1 | ((unsigned __int64)(qword_18005C6C0 + 1) >> 1);
    v1 = (float)(int)v2 + (float)(int)v2;
  }
  else
  {
    v1 = (float)v0;
  }
  v3 = o_ceilf_0(v1 / *(float *)&dword_18005C6B0);
  v4 = 0LL;
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  v5 = qword_18005C6E8;
  v6 = v4 + (unsigned int)(int)v3;
  v7 = 8LL;
  if ( v6 > 8 )
    v7 = v6;
  if ( qword_18005C6E8 < v7 )
  {
    if ( (unsigned __int64)qword_18005C6E8 >= 0x200 || (v5 = 8 * qword_18005C6E8, 8 * qword_18005C6E8 < v7) )
      v5 = v7;
  }
  _BitScanReverse64(&v8, 0xFFFFFFFFFFFFFFFuLL);
  if ( v5 > 1LL << v8 )
    std::_Xlength_error("invalid hash bucket count");
  v9 = qword_18005C6B8;
  _BitScanReverse64(&v10, (v5 - 1) | 1);
  v11 = 1LL << ((unsigned __int8)v10 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    (__int64)&qword_18005C6C8,
    2 * v11,
    qword_18005C6B8);
  v12 = v11 - 1;
  qword_18005C6E0 = v11 - 1;
  qword_18005C6E8 = v11;
  result = *(_QWORD **)qword_18005C6B8;
  v14 = *(_QWORD **)qword_18005C6B8;
  while ( result != (_QWORD *)v9 )
  {
    v14 = (_QWORD *)*v14;
    v15 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
    {
      v17 = *((unsigned __int8 *)result + i + 16);
      v15 = 0x100000001B3LL * (v17 ^ v15);
    }
    v18 = qword_18005C6C8;
    v19 = 2 * (v12 & v15);
    if ( *(_QWORD *)(qword_18005C6C8 + 8 * v19) == v9 )
    {
      *(_QWORD *)(qword_18005C6C8 + 8 * v19) = result;
LABEL_21:
      *(_QWORD *)(v18 + 8 * v19 + 8) = result;
      goto LABEL_29;
    }
    v20 = *(__int64 **)(qword_18005C6C8 + 8 * v19 + 8);
    v21 = *((_DWORD *)result + 4);
    if ( v21 == *((_DWORD *)v20 + 4) )
    {
      v22 = (_QWORD *)*v20;
      if ( (_QWORD *)*v20 != result )
      {
        v23 = (_QWORD *)result[1];
        *v23 = v14;
        v24 = (_QWORD *)v14[1];
        *v24 = v22;
        v25 = (_QWORD *)v22[1];
        *v25 = result;
        v22[1] = v24;
        v14[1] = v23;
        result[1] = v25;
      }
      goto LABEL_21;
    }
    while ( 1 )
    {
      v26 = (__int64 **)(v20 + 1);
      if ( *(__int64 **)(qword_18005C6C8 + 8 * v19) == v20 )
        break;
      v20 = *v26;
      if ( v21 == *((_DWORD *)*v26 + 4) )
      {
        v27 = *v20;
        v28 = (_QWORD *)result[1];
        *v28 = v14;
        v29 = (_QWORD *)v14[1];
        *v29 = v27;
        v30 = *(_QWORD **)(v27 + 8);
        *v30 = result;
        *(_QWORD *)(v27 + 8) = v29;
        v14[1] = v28;
        result[1] = v30;
        goto LABEL_29;
      }
    }
    v31 = (_QWORD *)result[1];
    *v31 = v14;
    v32 = (__int64 **)v14[1];
    *v32 = v20;
    v33 = *v26;
    *v33 = (__int64)result;
    *v26 = (__int64 *)v32;
    v14[1] = v31;
    result[1] = v33;
    *(_QWORD *)(v18 + 8 * v19) = result;
LABEL_29:
    v12 = qword_18005C6E0;
    result = v14;
  }
  return result;
}
