/*
 * XREFs of ?GetRuntimeClassName@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18003DB50
 * Callers:
 *     ?GetRuntimeClassName@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18003CE60 (-GetRuntimeClassName@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@.c)
 *     ?GetRuntimeClassName@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18003D1C0 (-GetRuntimeClassName@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@W_ea_18003D1C0.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180010EBC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFTMCrossProcClient<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v4; // r8
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v8);
  *v4 = 0LL;
  if ( *(_QWORD *)(a1 + 112) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 112) + 24LL))(
           *(_QWORD *)(a1 + 112),
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           v4);
    if ( v5 >= 0 )
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 32LL))(v8, a2);
  }
  else
  {
    v5 = -2147467259;
  }
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v5;
}
