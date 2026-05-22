/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@@Z @ 0x1801C7F64
 * Callers:
 *     ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x1801C7080 (-NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 *a2)
{
  int v2; // eax
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v7; // r10
  unsigned __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  int v16; // [rsp+30h] [rbp+8h]

  v2 = *((_DWORD *)a2 + 4);
  v4 = 0xCBF29CE484222325uLL;
  v16 = v2;
  v5 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v9 = *((unsigned __int8 *)&v16 + i);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  v16 = *((_DWORD *)a2 + 5);
  do
  {
    v10 = *((unsigned __int8 *)&v16 + v5++);
    v4 = 0x100000001B3LL * (v10 ^ v4);
  }
  while ( v5 < 4 );
  v11 = a1[3];
  v12 = 2 * (a1[6] & (v7 ^ v4));
  if ( *(__int64 **)(v11 + 8 * v12 + 8) == a2 )
  {
    if ( *(__int64 **)(v11 + 8 * v12) == a2 )
    {
      v13 = a1[1];
      *(_QWORD *)(v11 + 8 * v12) = v13;
    }
    else
    {
      v13 = a2[1];
    }
    *(_QWORD *)(v11 + 8 * v12 + 8) = v13;
  }
  else if ( *(__int64 **)(v11 + 8 * v12) == a2 )
  {
    *(_QWORD *)(v11 + 8 * v12) = *a2;
  }
  v14 = *a2;
  --a1[2];
  *(_QWORD *)a2[1] = v14;
  *(_QWORD *)(v14 + 8) = a2[1];
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2 + 7);
  std::_Deallocate<16,0>(a2, 0x40uLL);
  return v14;
}
