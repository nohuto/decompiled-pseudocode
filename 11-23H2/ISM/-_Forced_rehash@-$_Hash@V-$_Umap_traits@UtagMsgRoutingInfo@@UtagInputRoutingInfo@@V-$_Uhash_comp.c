/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180173BE0
 * Callers:
 *     ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180014248 (-OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001A970 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003C734 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 **v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // r10
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned __int64 v13; // rdi
  __int64 *v14; // r11
  _QWORD *v15; // rdx
  __int64 *v16; // rcx
  __int64 *v17; // rbp
  _QWORD *v18; // rdx
  __int64 *v19; // rcx
  _QWORD *v20; // rdx
  __int64 *v21; // rcx

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
  LOBYTE(v8) = v6 - 1;
  a1[6] = v6 - 1;
  v9 = *(_QWORD *)a1[1];
  v10 = (_QWORD *)v9;
  while ( v9 != v4 )
  {
    v11 = a1[3];
    v12 = v9 + 16;
    v8 = *(unsigned int *)(v9 + 20);
    v10 = (_QWORD *)*v10;
    v13 = 2 * (a1[6] & (v8 | ((unsigned __int64)*(unsigned int *)(v9 + 16) << 32)));
    if ( *(_QWORD *)(v11 + 16 * (a1[6] & (v8 | ((unsigned __int64)*(unsigned int *)(v9 + 16) << 32)))) == v4 )
    {
      *(_QWORD *)(v11 + 16 * (a1[6] & (v8 | ((unsigned __int64)*(unsigned int *)(v9 + 16) << 32)))) = v9;
LABEL_7:
      *(_QWORD *)(v11 + 8 * v13 + 8) = v9;
      goto LABEL_16;
    }
    LOBYTE(v8) = operator==(
                   v9 + 16,
                   *(_QWORD *)(v11 + 16 * (a1[6] & (v8 | ((unsigned __int64)*(unsigned int *)(v9 + 16) << 32))) + 8)
                 + 16LL,
                   (__int64)v7,
                   v9);
    if ( (_BYTE)v8 )
    {
      v7 = (__int64 **)*v14;
      if ( *v14 != v9 )
      {
        v15 = *(_QWORD **)(v9 + 8);
        *v15 = v10;
        v16 = (__int64 *)v10[1];
        *v16 = (__int64)v7;
        v8 = (unsigned __int64)v7[1];
        *(_QWORD *)v8 = v9;
        v7[1] = v16;
        v10[1] = v15;
        *(_QWORD *)(v9 + 8) = v8;
      }
      goto LABEL_7;
    }
    v17 = v14;
    while ( 1 )
    {
      v7 = (__int64 **)(v14 + 1);
      if ( *(__int64 **)(v11 + 8 * v13) == v17 )
        break;
      v17 = *v7;
      if ( operator==(v12, (__int64)(*v7 + 2), (__int64)v7, v9) )
      {
        v7 = (__int64 **)*v14;
        v18 = *(_QWORD **)(v9 + 8);
        *v18 = v10;
        v19 = (__int64 *)v10[1];
        *v19 = (__int64)v7;
        v8 = (unsigned __int64)v7[1];
        *(_QWORD *)v8 = v9;
        v7[1] = v19;
        v10[1] = v18;
        *(_QWORD *)(v9 + 8) = v8;
        goto LABEL_16;
      }
    }
    v20 = *(_QWORD **)(v9 + 8);
    *v20 = v10;
    v8 = v10[1];
    *(_QWORD *)v8 = v14;
    v21 = *v7;
    *v21 = v9;
    *v7 = (__int64 *)v8;
    v10[1] = v20;
    *(_QWORD *)(v9 + 8) = v21;
    *(_QWORD *)(v11 + 8 * v13) = v9;
LABEL_16:
    v9 = (__int64)v10;
  }
  return v8;
}
