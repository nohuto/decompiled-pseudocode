/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A930
 * Callers:
 *     ??1GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18001E01C (--1GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ?_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18001EC80 (-_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifi.c)
 *     ?_OnTileRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18001EE30 (-_OnTileRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUni.c)
 *     ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180020CB8 (-Remove@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U-$.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x180020F98 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180021024 (-AddInternal@-$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ?AddInternal@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18002119C (-AddInternal@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180021C60 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180021E94 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ??_EGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800222E0 (--_EGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     ??$InvokeDelegates@V_lambda_56908091a02afdced2314238e386ad81_@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_56908091a02afdced2314238e386ad81_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180022AF4 (--$InvokeDelegates@V_lambda_56908091a02afdced2314238e386ad81_@@UIGameListChangedEventHandler@Gam.c)
 *     ??$InvokeDelegates@V_lambda_5e595ec35342659083fef893f53fe724_@@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_5e595ec35342659083fef893f53fe724_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180022C80 (--$InvokeDelegates@V_lambda_5e595ec35342659083fef893f53fe724_@@UIGameListRemovedEventHandler@Gam.c)
 *     ?Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@@Z @ 0x18003EE20 (-Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEn.c)
 *     ??$InvokeDelegates@V_lambda_e58599acbd90c5b132e1494e473a22d4_@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_e58599acbd90c5b132e1494e473a22d4_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18003EEE4 (--$InvokeDelegates@V_lambda_e58599acbd90c5b132e1494e473a22d4_@@UIGameListChangedEventHandler@Gam.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 3);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 3, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
