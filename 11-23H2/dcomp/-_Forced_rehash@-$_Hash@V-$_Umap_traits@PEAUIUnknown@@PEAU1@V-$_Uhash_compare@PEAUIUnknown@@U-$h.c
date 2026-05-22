/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180160128
 * Callers:
 *     ??$emplace@AEAU?$pair@PEAUIUnknown@@PEAU1@@std@@@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@PEAUIUnknown@@PEAU1@@1@@Z @ 0x18007FC54 (--$emplace@AEAU-$pair@PEAUIUnknown@@PEAU1@@std@@@-$_Hash@V-$_Umap_traits@PEAUIUnknown@@PEAU1@V-$.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@2@@Z @ 0x180041F8C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180078570 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::_Forced_rehash(
        const char *a1,
        unsigned __int64 a2)
{
  const char *v2; // rsi
  char v3; // cl
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  __int64 **v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r10
  _QWORD *v16; // rdx
  __int64 *v17; // r10
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx

  v2 = a1;
  _BitScanReverse64((unsigned __int64 *)&a1, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Dwm_Xlength_error(a1);
  v4 = *((_QWORD *)v2 + 1);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IUnknown * const,IUnknown *>>>>>>::_Assign_grow(
    (unsigned __int64 **)v2 + 3,
    2 * v6,
    v4);
  *((_QWORD *)v2 + 7) = v6;
  result = v6 - 1;
  *((_QWORD *)v2 + 6) = v6 - 1;
  v9 = (_QWORD *)**((_QWORD **)v2 + 1);
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    result = std::_Fnv1a_append_bytes((__int64)v7, (const unsigned __int8 *const)v9 + 16, 8uLL);
    v13 = *((_QWORD *)v2 + 3);
    v14 = 2 * (*((_QWORD *)v2 + 6) & result);
    if ( *(_QWORD *)(v13 + 16 * (*((_QWORD *)v2 + 6) & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (*((_QWORD *)v2 + 6) & result)) = v12;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_15;
    }
    result = *(_QWORD *)(v13 + 16 * (*((_QWORD *)v2 + 6) & result) + 8);
    v7 = *v11;
    if ( *v11 == *(__int64 **)(result + 16) )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v12 )
      {
        v16 = *(_QWORD **)(v12 + 8);
        *v16 = v10;
        v7 = (__int64 *)v10[1];
        *v7 = v15;
        result = *(_QWORD *)(v15 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v15 + 8) = v7;
        v10[1] = v16;
        *(_QWORD *)(v12 + 8) = result;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v17 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v13 + 8 * v14) == result )
        break;
      result = *v17;
      if ( v7 == *(__int64 **)(*v17 + 16) )
      {
        v18 = *(_QWORD *)result;
        v19 = *(_QWORD **)(v12 + 8);
        *v19 = v10;
        v7 = (__int64 *)v10[1];
        *v7 = v18;
        result = *(_QWORD *)(v18 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v18 + 8) = v7;
        v10[1] = v19;
        *(_QWORD *)(v12 + 8) = result;
        goto LABEL_15;
      }
    }
    v20 = *(_QWORD **)(v12 + 8);
    *v20 = v10;
    v7 = (__int64 *)v10[1];
    *v7 = result;
    result = *v17;
    *(_QWORD *)result = v12;
    *v17 = (__int64)v7;
    v10[1] = v20;
    *(_QWORD *)(v12 + 8) = result;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_15:
    v9 = v10;
  }
  return result;
}
