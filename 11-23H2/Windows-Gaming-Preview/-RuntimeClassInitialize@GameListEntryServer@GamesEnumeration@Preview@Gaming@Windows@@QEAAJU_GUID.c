/*
 * XREFs of ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002BBB8
 * Callers:
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@6@$$QEAPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000DB68 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_G.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001FF38 (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@V?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAVGameListEntryUpdateHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEBU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@$$QEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@6@$$QEAPEAVGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x1800218F0 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEBU_G.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x1800102C0 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013F80 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C78C (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C8D8 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002CABC (-_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJ.c)
 *     ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002CCE0 (-_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002CF30 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18003195C (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = a4[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  v10 = a4[1];
  v11 = *a4;
  *(_QWORD *)v19 = *((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = v11;
  v20 = *((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = v10;
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)v19);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,std::shared_ptr<ExecutionModel::IGameConfigStore> const &>(
          (char *)this + 272,
          a2,
          a3,
          a4);
  if ( v12 < 0 )
  {
    v13 = 260LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  if ( *((_QWORD *)this + 28) != a5 )
  {
    if ( a5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
    v15 = *((_QWORD *)this + 28);
    *((_QWORD *)this + 28) = a5;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v12 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeId(this);
  if ( v12 < 0 )
  {
    v13 = 264LL;
    goto LABEL_5;
  }
  v16 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName(this);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      265LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v16);
  v12 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeLaunchTarget(this);
  if ( v12 < 0 )
  {
    v13 = 266LL;
    goto LABEL_5;
  }
  v17 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(this);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      267LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v17);
  v18 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId(this);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      268LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v18);
  return 0LL;
}
