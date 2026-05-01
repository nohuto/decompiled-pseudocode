/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::UnmarshalAndCall__ @ 0x180038014
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::Run @ 0x180036720 (Windows--Internal--COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18002EE04 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::UnmarshalAndCall__(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        ...)
{
  unsigned int v4; // ebx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v5; // rcx
  int GamesListProperties; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v7; // rcx
  int v8; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v9; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v13; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *);
  v4 = *a3;
  if ( (*a3 & 0x80000000) != 0 )
    return v4;
  v5 = *(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)v5 + 36) )
    return 0;
  v13 = 0LL;
  GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                          v5,
                          (struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo **)va);
  v4 = GamesListProperties;
  if ( GamesListProperties < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x557,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v4;
  }
  v8 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *, _QWORD))(*(_QWORD *)v13 + 56LL))(
         v13,
         *(unsigned int *)(a1 + 24));
  v4 = v8;
  if ( v8 >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = *(_DWORD *)(a1 + 24);
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 0;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x557,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v8);
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v4;
}
