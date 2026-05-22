/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801CF108
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1801CF2B4 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPoin.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003A998 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18003A998.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  _DWORD *v11; // r14
  __int64 v12; // r11
  __int64 appended; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // r11
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // r10
  _QWORD *v21; // rdx
  __int64 *v22; // r10
  __int64 v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  v9 = *(_QWORD **)a1[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = (_DWORD *)v9 + 5;
    appended = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)v9 + 20, 4uLL);
    result = std::_Fnv1a_append_bytes(v14, (const unsigned __int8 *const)(v12 + 16), v15);
    v17 = a1[3];
    v18 = 2 * (a1[6] & (appended ^ result));
    if ( *(_QWORD *)(v17 + 16 * (a1[6] & (appended ^ result))) == v4 )
    {
      *(_QWORD *)(v17 + 16 * (a1[6] & (appended ^ result))) = v16;
LABEL_7:
      *(_QWORD *)(v17 + 8 * v18 + 8) = v16;
      goto LABEL_17;
    }
    result = *(_QWORD *)(v17 + 16 * (a1[6] & (appended ^ result)) + 8);
    v19 = *(_DWORD *)(v16 + 16);
    if ( v19 == *(_DWORD *)(result + 16) )
    {
      v7 = *(unsigned int *)(result + 20);
      if ( *v11 == (_DWORD)v7 )
      {
        v20 = *(_QWORD *)result;
        if ( *(_QWORD *)result != v16 )
        {
          v21 = *(_QWORD **)(v16 + 8);
          *v21 = v10;
          v7 = v10[1];
          *(_QWORD *)v7 = v20;
          result = *(_QWORD *)(v20 + 8);
          *(_QWORD *)result = v16;
          *(_QWORD *)(v20 + 8) = v7;
          v10[1] = v21;
          *(_QWORD *)(v16 + 8) = result;
        }
        goto LABEL_7;
      }
    }
    while ( 1 )
    {
      v22 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v17 + 8 * v18) == result )
        break;
      result = *v22;
      if ( v19 == *(_DWORD *)(*v22 + 16) && *v11 == *(_DWORD *)(result + 20) )
      {
        v23 = *(_QWORD *)result;
        v24 = *(_QWORD **)(v16 + 8);
        *v24 = v10;
        v7 = v10[1];
        *(_QWORD *)v7 = v23;
        result = *(_QWORD *)(v23 + 8);
        *(_QWORD *)result = v16;
        *(_QWORD *)(v23 + 8) = v7;
        v10[1] = v24;
        *(_QWORD *)(v16 + 8) = result;
        goto LABEL_17;
      }
    }
    v25 = *(_QWORD **)(v16 + 8);
    *v25 = v10;
    v7 = v10[1];
    *(_QWORD *)v7 = result;
    result = *v22;
    *(_QWORD *)result = v16;
    *v22 = v7;
    v10[1] = v25;
    *(_QWORD *)(v16 + 8) = result;
    *(_QWORD *)(v17 + 8 * v18) = v16;
LABEL_17:
    v9 = v10;
  }
  return result;
}
