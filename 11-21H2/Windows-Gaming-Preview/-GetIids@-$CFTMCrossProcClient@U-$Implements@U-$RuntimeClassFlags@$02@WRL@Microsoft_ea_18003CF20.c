/*
 * XREFs of ?GetIids@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18003CF20
 * Callers:
 *     ?GetIids@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18003C060 (-GetIids@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListE.c)
 *     ?GetIids@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18003C960 (-GetIids@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft_ea_18003C960.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180010D4C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFTMCrossProcClient<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 *v7; // r8
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  v12 = 0LL;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v12);
  *v7 = 0LL;
  if ( *(_QWORD *)(a1 + 112) )
  {
    v8 = *(_QWORD *)(a1 + 112);
    if ( v8 )
      v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
             v8,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             v7);
    else
      v9 = 0;
    if ( v9 >= 0 )
      v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD *))(*(_QWORD *)v12 + 24LL))(v12, a2, a3);
  }
  else
  {
    v9 = -2147467259;
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v10 + 16LL))(v10, v6, v7);
  }
  return (unsigned int)v9;
}
