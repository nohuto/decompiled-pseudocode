/*
 * XREFs of ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x1800147EC
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18001DDB0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001B2A0 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??$_Find_last@UtagMsgRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@@1@AEBUtagMsgRoutingInfo@@_K@Z @ 0x18001BCDC (--$_Find_last@UtagMsgRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800ABEB4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801C7D68 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Try_emplace<tagMsgRoutingInfo const &,>(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 i; // rcx
  __int64 v11; // rbp
  _QWORD *v12; // r9
  _QWORD *v13; // r14
  _OWORD *v14; // rbx
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r8
  __int64 v24; // rax
  _QWORD *v25; // r9
  _QWORD *v26; // r10
  __int64 v27; // rax
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
      if ( v25 == v26 )
      {
        v13 = v25;
        v25 = 0LL;
        goto LABEL_25;
      }
      v12 = (_QWORD *)v25[1];
    }
    v13 = (_QWORD *)*v25;
LABEL_25:
    if ( v25 )
    {
      *(_QWORD *)a2 = v25;
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
  v15 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v15 < 0 )
    v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
        + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
  else
    v16 = (float)(int)v15;
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 < 0 )
  {
    v24 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
    v18 = (float)(int)v24 + (float)(int)v24;
  }
  else
  {
    v18 = (float)(int)v17;
  }
  if ( (float)(v16 / v18) > *(float *)a1 )
  {
    v27 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Forced_rehash(
      a1,
      v27);
    v28 = *(_OWORD *)((__int64 (__fastcall *)(__int64, __int128 *, _OWORD *, __int64))std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Find_last<tagMsgRoutingInfo>)(
                       a1,
                       &v28,
                       v14 + 1,
                       v11);
    v13 = (_QWORD *)v28;
  }
  v19 = (_QWORD *)v13[1];
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v14 = v13;
  *((_QWORD *)v14 + 1) = v19;
  *v19 = v14;
  v13[1] = v14;
  v20 = *(_QWORD *)(a1 + 24);
  v21 = 2 * (v11 & *(_QWORD *)(a1 + 48));
  v22 = *(_QWORD **)(v20 + 16 * (v11 & *(_QWORD *)(a1 + 48)));
  if ( v22 == *(_QWORD **)(a1 + 8) )
  {
    *(_QWORD *)(v20 + 16 * (v11 & *(_QWORD *)(a1 + 48))) = v14;
  }
  else
  {
    if ( v22 == v13 )
    {
      *(_QWORD *)(v20 + 16 * (v11 & *(_QWORD *)(a1 + 48))) = v14;
      goto LABEL_16;
    }
    if ( *(_QWORD **)(v20 + 16 * (v11 & *(_QWORD *)(a1 + 48)) + 8) != v19 )
      goto LABEL_16;
  }
  *(_QWORD *)(v20 + 8 * v21 + 8) = v14;
LABEL_16:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
