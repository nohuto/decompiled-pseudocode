/*
 * XREFs of ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002B278
 * Callers:
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@6@$$QEAPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000DA30 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_G.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001F84C (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@V?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAVGameListEntryUpdateHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEBU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@$$QEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@6@$$QEAPEAVGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x1800211C8 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEBU_G.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180010110 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002BE4C (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002BF98 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C17C (-_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJ.c)
 *     ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C3A0 (-_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C5F0 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180031148 (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v9; // r10
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = a4[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a4[1];
  }
  v10 = *a4;
  *(_QWORD *)v18 = *((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = v10;
  v19 = *((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = v9;
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)v18);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,std::shared_ptr<ExecutionModel::IGameConfigStore> const &>(
          (char *)this + 272,
          a2,
          a3,
          a4);
  if ( v11 < 0 )
  {
    v12 = 260LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v14 = *((_QWORD *)this + 28);
  if ( v14 != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
      v14 = *((_QWORD *)this + 28);
    }
    *((_QWORD *)this + 28) = a5;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v11 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeId(this);
  if ( v11 < 0 )
  {
    v12 = 264LL;
    goto LABEL_5;
  }
  v15 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName(this);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      265LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v15);
  v11 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeLaunchTarget(this);
  if ( v11 < 0 )
  {
    v12 = 266LL;
    goto LABEL_5;
  }
  v16 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(this);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      267LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v16);
  v17 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId(this);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      268LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v17);
  return 0LL;
}
