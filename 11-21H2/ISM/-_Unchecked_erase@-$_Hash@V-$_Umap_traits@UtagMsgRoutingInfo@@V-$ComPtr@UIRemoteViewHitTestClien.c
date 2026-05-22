/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@@Z @ 0x18019C1AC
 * Callers:
 *     ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x18019AF30 (-NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 appended; // rax
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rbx
  int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = *((_DWORD *)a2 + 4);
  v13 = *((_DWORD *)a2 + 5);
  std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)&v13, 4uLL);
  appended = std::_Fnv1a_append_bytes(v4, (const unsigned __int8 *const)&v14, v5);
  v7 = a1[3];
  v9 = 2 * (a1[6] & (appended ^ v8));
  if ( *(__int64 **)(v7 + 8 * v9 + 8) == a2 )
  {
    if ( *(__int64 **)(v7 + 8 * v9) == a2 )
    {
      v10 = a1[1];
      *(_QWORD *)(v7 + 8 * v9) = v10;
    }
    else
    {
      v10 = a2[1];
    }
    *(_QWORD *)(v7 + 8 * v9 + 8) = v10;
  }
  else if ( *(__int64 **)(v7 + 8 * v9) == a2 )
  {
    *(_QWORD *)(v7 + 8 * v9) = *a2;
  }
  v11 = *a2;
  --a1[2];
  *(_QWORD *)a2[1] = v11;
  *(_QWORD *)(v11 + 8) = a2[1];
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2 + 7);
  std::_Deallocate<16,0>(a2, 0x40uLL);
  return v11;
}
