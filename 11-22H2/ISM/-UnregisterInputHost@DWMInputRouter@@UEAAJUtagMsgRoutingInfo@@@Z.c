/*
 * XREFs of ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x18001BC30
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_last@UtagMsgRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@@1@AEBUtagMsgRoutingInfo@@_K@Z @ 0x18001BCDC (--$_Find_last@UtagMsgRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18001BDE4 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterInputHost(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r9
  __int64 v5; // rdx
  unsigned __int64 i; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  _DWORD v12[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0xCBF29CE484222325uLL;
  v12[0] = *a2;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)v12 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = 0LL;
  v12[0] = a2[1];
  do
  {
    v9 = *((unsigned __int8 *)v12 + v8++);
    v2 = 0x100000001B3LL * (v9 ^ v2);
  }
  while ( v8 < 4 );
  v10 = *(_QWORD *)(((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, __int64))std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Find_last<tagMsgRoutingInfo>)(
                      a1 + 32,
                      v12,
                      a2,
                      v5 ^ v2)
                  + 8);
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 40);
  if ( v10 != *(_QWORD *)(a1 + 40) )
    DWMInputRouter::RemoveTarget(a1 - 56, v12);
  return 0LL;
}
