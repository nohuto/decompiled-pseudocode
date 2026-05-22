/*
 * XREFs of ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x1800405A8
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18003CFB0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800E6D3C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??$_Find_last@UtagMsgRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBUtagMsgRoutingInfo@@_K@Z @ 0x180153FE0 (--$_Find_last@UtagMsgRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemot.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAXXZ @ 0x18019C048 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemoteViewHitTestClient@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Try_emplace<tagMsgRoutingInfo const &,>(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 i; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // r9
  _QWORD *v13; // r14
  _OWORD *v14; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm1_4
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rdx
  __int64 v25; // rax
  _QWORD *v26; // r9
  _QWORD *v27; // r10
  __int128 v28; // [rsp+20h] [rbp-38h] BYREF
  int v29; // [rsp+60h] [rbp+8h]

  v29 = *a3;
  v6 = 0xCBF29CE484222325uLL;
  v7 = 0xCBF29CE484222325uLL;
  v8 = 0LL;
  v9 = 0x100000001B3LL;
  do
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)&v29 + v8++) ^ (unsigned __int64)v7);
  while ( v8 < 4 );
  v29 = a3[1];
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v29 + i) ^ (unsigned __int64)v6);
  v11 = v7 ^ v6;
  v12 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 16 * (*(_QWORD *)(a1 + 48) & v11) + 8);
  v13 = *(_QWORD **)(a1 + 8);
  if ( v12 != v13 )
  {
    while ( !(unsigned __int8)operator==(a3, v12 + 2, v9) )
    {
      if ( v26 == v27 )
      {
        v13 = v26;
        v26 = 0LL;
        goto LABEL_25;
      }
      v12 = (_QWORD *)v26[1];
    }
    v13 = (_QWORD *)*v26;
LABEL_25:
    if ( v26 )
    {
      *(_QWORD *)a2 = v26;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  if ( *(_QWORD *)(a1 + 16) == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  *(_QWORD *)&v28 = a1 + 8;
  v14 = operator new(0x40uLL);
  *((_QWORD *)&v28 + 1) = v14;
  v14[1] = *(_OWORD *)a3;
  v14[2] = *((_OWORD *)a3 + 1);
  *((_QWORD *)v14 + 6) = *((_QWORD *)a3 + 4);
  *((_QWORD *)v14 + 7) = 0LL;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = v15 + 1;
  if ( v15 + 1 < 0 )
    v17 = (float)(int)(v16 & 1 | (v16 >> 1)) + (float)(int)(v16 & 1 | (v16 >> 1));
  else
    v17 = (float)(int)v16;
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 < 0 )
  {
    v25 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v18 >> 1);
    v19 = (float)(int)v25 + (float)(int)v25;
  }
  else
  {
    v19 = (float)(int)v18;
  }
  if ( (float)(v17 / v19) > *(float *)a1 )
  {
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Rehash_for_1(a1);
    v28 = *(_OWORD *)((__int64 (__fastcall *)(__int64, __int128 *, _OWORD *, __int64))std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Find_last<tagMsgRoutingInfo>)(
                       a1,
                       &v28,
                       v14 + 1,
                       v11);
    v15 = *(_QWORD *)(a1 + 16);
    v13 = (_QWORD *)v28;
  }
  v20 = (_QWORD *)v13[1];
  *(_QWORD *)(a1 + 16) = v15 + 1;
  *(_QWORD *)v14 = v13;
  *((_QWORD *)v14 + 1) = v20;
  *v20 = v14;
  v13[1] = v14;
  v21 = *(_QWORD *)(a1 + 24);
  v22 = 2 * (*(_QWORD *)(a1 + 48) & v11);
  v23 = *(_QWORD **)(v21 + 8 * v22);
  if ( v23 == *(_QWORD **)(a1 + 8) )
  {
    *(_QWORD *)(v21 + 8 * v22) = v14;
  }
  else
  {
    if ( v23 == v13 )
    {
      *(_QWORD *)(v21 + 8 * v22) = v14;
      goto LABEL_16;
    }
    if ( *(_QWORD **)(v21 + 8 * v22 + 8) != v20 )
      goto LABEL_16;
  }
  *(_QWORD *)(v21 + 8 * v22 + 8) = v14;
LABEL_16:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
