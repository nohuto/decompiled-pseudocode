/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180049E38
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180049D68 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@@Z @ 0x18003E10C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18003E10C.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *result; // rax
  _QWORD *v8; // rcx
  __int64 v9; // r8
  unsigned __int64 i; // r9
  __int64 v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r10
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rdi
  _QWORD *v17; // r9
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rdi
  _QWORD *v21; // r10
  _QWORD *v22; // r9
  _QWORD *v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // r9
  _QWORD *v26; // r8
  _QWORD *v27; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  result = *(_QWORD **)a1[1];
  v8 = result;
  while ( result != (_QWORD *)v4 )
  {
    v8 = (_QWORD *)*v8;
    v9 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 8; ++i )
    {
      v11 = *((unsigned __int8 *)result + i + 16);
      v9 = 0x100000001B3LL * (v11 ^ v9);
    }
    v12 = a1[3];
    v13 = 2 * (v9 & a1[6]);
    if ( *(_QWORD *)(v12 + 16 * (v9 & a1[6])) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (v9 & a1[6])) = result;
LABEL_8:
      *(_QWORD *)(v12 + 8 * v13 + 8) = result;
      goto LABEL_9;
    }
    v14 = *(_QWORD **)(v12 + 16 * (v9 & a1[6]) + 8);
    v15 = result[2];
    if ( v15 == v14[2] )
    {
      v16 = (_QWORD *)*v14;
      if ( (_QWORD *)*v14 != result )
      {
        v17 = (_QWORD *)result[1];
        *v17 = v8;
        v18 = (_QWORD *)v8[1];
        *v18 = v16;
        v19 = (_QWORD *)v16[1];
        *v19 = result;
        v16[1] = v18;
        v8[1] = v17;
        result[1] = v19;
      }
      goto LABEL_8;
    }
    while ( 1 )
    {
      v20 = v14 + 1;
      if ( *(_QWORD **)(v12 + 8 * v13) == v14 )
        break;
      v14 = (_QWORD *)*v20;
      if ( v15 == *(_QWORD *)(*v20 + 16LL) )
      {
        v21 = (_QWORD *)*v14;
        v22 = (_QWORD *)result[1];
        *v22 = v8;
        v23 = (_QWORD *)v8[1];
        *v23 = v21;
        v24 = (_QWORD *)v21[1];
        *v24 = result;
        v21[1] = v23;
        v8[1] = v22;
        result[1] = v24;
        goto LABEL_9;
      }
    }
    v25 = (_QWORD *)result[1];
    *v25 = v8;
    v26 = (_QWORD *)v8[1];
    *v26 = v14;
    v27 = (_QWORD *)*v20;
    *v27 = result;
    *v20 = v26;
    v8[1] = v25;
    result[1] = v27;
    *(_QWORD *)(v12 + 8 * v13) = result;
LABEL_9:
    result = v8;
  }
  return result;
}
