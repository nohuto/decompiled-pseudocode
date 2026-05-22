/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801BA4C0
 * Callers:
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x180013DDC (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInpu.c)
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x1801B7998 (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001A970 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003C734 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // r10
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int64 i; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 j; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 *v19; // r11
  __int64 v20; // r8
  _QWORD *v21; // rdx
  __int64 *v22; // rcx
  __int64 *v23; // rbp
  unsigned __int64 *v24; // r8
  __int64 v25; // r8
  _QWORD *v26; // rdx
  __int64 *v27; // rcx
  _QWORD *v28; // rdx
  __int64 *v29; // rcx
  int v31; // [rsp+58h] [rbp+10h]

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
  v8 = *(_QWORD *)a1[1];
  v9 = (_QWORD *)v8;
  while ( v8 != v4 )
  {
    v9 = (_QWORD *)*v9;
    v10 = v8 + 16;
    v11 = 0xCBF29CE484222325uLL;
    v31 = *(_DWORD *)(v8 + 16);
    for ( i = 0LL; i < 4; ++i )
    {
      v13 = *((unsigned __int8 *)&v31 + i);
      v11 = 0x100000001B3LL * (v13 ^ v11);
    }
    v14 = 0xCBF29CE484222325uLL;
    v31 = *(_DWORD *)(v8 + 20);
    for ( j = 0LL; j < 4; ++j )
    {
      v7 = *((unsigned __int8 *)&v31 + j);
      v14 = 0x100000001B3LL * (v7 ^ v14);
    }
    v16 = a1[3];
    v17 = 2 * (a1[6] & (v11 ^ v14));
    if ( *(_QWORD *)(v16 + 8 * v17) == v4 )
    {
      *(_QWORD *)(v16 + 8 * v17) = v8;
      *(_QWORD *)(v16 + 8 * v17 + 8) = v8;
    }
    else
    {
      LOBYTE(v7) = operator==(v8 + 16, *(_QWORD *)(v16 + 8 * v17 + 8) + 16LL, 0xCBF29CE484222325uLL, v8);
      if ( (_BYTE)v7 )
      {
        v20 = *v19;
        if ( *v19 != v18 )
        {
          v21 = *(_QWORD **)(v18 + 8);
          *v21 = v9;
          v22 = (__int64 *)v9[1];
          *v22 = v20;
          v7 = *(_QWORD *)(v20 + 8);
          *(_QWORD *)v7 = v18;
          *(_QWORD *)(v20 + 8) = v22;
          v9[1] = v21;
          *(_QWORD *)(v18 + 8) = v7;
        }
        *(_QWORD *)(v16 + 8 * v17 + 8) = v18;
      }
      else
      {
        v23 = v19;
        while ( 1 )
        {
          v24 = (unsigned __int64 *)(v19 + 1);
          if ( *(__int64 **)(v16 + 8 * v17) == v23 )
            break;
          v23 = (__int64 *)*v24;
          if ( operator==(v10, *v24 + 16, (__int64)v24, v18) )
          {
            v25 = *v19;
            v26 = *(_QWORD **)(v18 + 8);
            *v26 = v9;
            v27 = (__int64 *)v9[1];
            *v27 = v25;
            v7 = *(_QWORD *)(v25 + 8);
            *(_QWORD *)v7 = v18;
            *(_QWORD *)(v25 + 8) = v27;
            v9[1] = v26;
            *(_QWORD *)(v18 + 8) = v7;
            goto LABEL_20;
          }
        }
        v28 = *(_QWORD **)(v18 + 8);
        *v28 = v9;
        v7 = v9[1];
        *(_QWORD *)v7 = v19;
        v29 = (__int64 *)*v24;
        *v29 = v18;
        *v24 = v7;
        v9[1] = v28;
        *(_QWORD *)(v18 + 8) = v29;
        *(_QWORD *)(v16 + 8 * v17) = v18;
      }
    }
LABEL_20:
    v8 = (__int64)v9;
  }
  return v7;
}
