/*
 * XREFs of ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18002E5D4
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002BE4C (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002BF98 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002CD3C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_SetTitleIdInternal@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800308A8 (-_SetTitleIdInternal@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJVHString@.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::UnmarshalAndCall__ @ 0x1800375D4 (Windows--Internal--COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703___ea_1800375D4.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo **a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 104LL))(*((_QWORD *)this + 32));
  if ( v3 < 0 )
  {
    v4 = 1058LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( !*a2 )
  {
    v3 = -2147019873;
    v4 = 1059LL;
    goto LABEL_3;
  }
  return 0LL;
}
