/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180154680
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180154810 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compa.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003A998 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18003A998.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800E6D3C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // r10
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // r11
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rbp
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx

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
  LOBYTE(v7) = v6 - 1;
  a1[6] = v6 - 1;
  v8 = *(_QWORD **)a1[1];
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v10 = a1[3];
    v7 = *((unsigned int *)v8 + 5);
    v9 = (_QWORD *)*v9;
    v11 = 2 * (a1[6] & (v7 | ((unsigned __int64)*((unsigned int *)v8 + 4) << 32)));
    if ( *(_QWORD *)(v10 + 16 * (a1[6] & (v7 | ((unsigned __int64)*((unsigned int *)v8 + 4) << 32)))) == v4 )
    {
      *(_QWORD *)(v10 + 16 * (a1[6] & (v7 | ((unsigned __int64)*((unsigned int *)v8 + 4) << 32)))) = v8;
LABEL_7:
      *(_QWORD *)(v10 + 8 * v11 + 8) = v8;
      goto LABEL_16;
    }
    LOBYTE(v7) = operator==(
                   (__int64)(v8 + 2),
                   *(_QWORD *)(v10 + 16 * (a1[6] & (v7 | ((unsigned __int64)*((unsigned int *)v8 + 4) << 32))) + 8)
                 + 16LL);
    if ( (_BYTE)v7 )
    {
      v14 = (_QWORD *)*v13;
      if ( (_QWORD *)*v13 != v8 )
      {
        v15 = (_QWORD *)v8[1];
        *v15 = v9;
        v16 = (_QWORD *)v9[1];
        *v16 = v14;
        v7 = v14[1];
        *(_QWORD *)v7 = v8;
        v14[1] = v16;
        v9[1] = v15;
        v8[1] = v7;
      }
      goto LABEL_7;
    }
    v17 = v13;
    while ( *(_QWORD **)(v10 + 8 * v11) != v17 )
    {
      v17 = (_QWORD *)v13[1];
      if ( operator==(v12, (__int64)(v17 + 2)) )
      {
        v18 = *v13;
        v19 = (_QWORD *)v8[1];
        *v19 = v9;
        v20 = (_QWORD *)v9[1];
        *v20 = v18;
        v7 = *(_QWORD *)(v18 + 8);
        *(_QWORD *)v7 = v8;
        *(_QWORD *)(v18 + 8) = v20;
        v9[1] = v19;
        v8[1] = v7;
        goto LABEL_16;
      }
    }
    v21 = (_QWORD *)v8[1];
    *v21 = v9;
    v22 = (_QWORD *)v9[1];
    *v22 = v17;
    v7 = v17[1];
    *(_QWORD *)v7 = v8;
    v17[1] = v22;
    v9[1] = v21;
    v8[1] = v7;
    *(_QWORD *)(v10 + 8 * v11) = v8;
LABEL_16:
    v8 = v9;
  }
  return v7;
}
