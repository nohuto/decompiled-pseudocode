/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18019BE90
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAXXZ @ 0x18019C048 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemoteViewHitTestClient@@.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003A998 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18003A998.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800E6D3C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  __int64 v11; // r15
  __int64 appended; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // rbp
  __int64 v17; // rsi
  _QWORD *v18; // r9
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // r10
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rdx
  int v26; // [rsp+58h] [rbp+10h] BYREF
  int v27; // [rsp+60h] [rbp+18h] BYREF

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
  v9 = *(_QWORD **)a1[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = (__int64)(v9 + 2);
    v27 = *((_DWORD *)v9 + 4);
    v26 = *((_DWORD *)v9 + 5);
    appended = std::_Fnv1a_append_bytes((__int64)v7, (const unsigned __int8 *const)&v26, 4uLL);
    v8 = std::_Fnv1a_append_bytes(v13, (const unsigned __int8 *const)&v27, v14);
    v16 = a1[3];
    v17 = 2 * (a1[6] & (v8 ^ appended));
    if ( *(_QWORD *)(v16 + 8 * v17) == v4 )
    {
      *(_QWORD *)(v16 + 8 * v17) = v15;
LABEL_7:
      *(_QWORD *)(v16 + 8 * v17 + 8) = v15;
      goto LABEL_16;
    }
    LOBYTE(v8) = operator==(v11, *(_QWORD *)(v16 + 8 * v17 + 8) + 16LL);
    if ( (_BYTE)v8 )
    {
      v19 = *v18;
      if ( *v18 != v15 )
      {
        v20 = *(_QWORD **)(v15 + 8);
        *v20 = v10;
        v7 = (_QWORD *)v10[1];
        *v7 = v19;
        v8 = *(_QWORD *)(v19 + 8);
        *(_QWORD *)v8 = v15;
        *(_QWORD *)(v19 + 8) = v7;
        v10[1] = v20;
        *(_QWORD *)(v15 + 8) = v8;
      }
      goto LABEL_7;
    }
    v21 = v18;
    while ( *(_QWORD **)(v16 + 8 * v17) != v21 )
    {
      if ( operator==(v11, v18[1] + 16LL) )
      {
        v22 = *v18;
        v23 = *(_QWORD **)(v15 + 8);
        *v23 = v10;
        v7 = (_QWORD *)v10[1];
        *v7 = v22;
        v8 = *(_QWORD *)(v22 + 8);
        *(_QWORD *)v8 = v15;
        *(_QWORD *)(v22 + 8) = v7;
        v10[1] = v23;
        *(_QWORD *)(v15 + 8) = v8;
        goto LABEL_16;
      }
    }
    v24 = *(_QWORD **)(v15 + 8);
    *v24 = v10;
    v7 = (_QWORD *)v10[1];
    *v7 = v21;
    v8 = v21[1];
    *(_QWORD *)v8 = v15;
    v21[1] = v7;
    v10[1] = v24;
    *(_QWORD *)(v15 + 8) = v8;
    *(_QWORD *)(v16 + 8 * v17) = v15;
LABEL_16:
    v9 = v10;
  }
  return v8;
}
