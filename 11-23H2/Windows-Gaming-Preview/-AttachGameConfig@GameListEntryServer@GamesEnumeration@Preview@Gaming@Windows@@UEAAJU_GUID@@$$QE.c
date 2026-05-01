/*
 * XREFs of ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002E270
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000BB30 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001FF38 (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x1800102C0 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002D68C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x18002DE74 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfig(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  char v11; // si
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v15; // rbp
  int v16; // eax
  __int64 v17; // rdx
  struct _GUID v19; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*a2 && !a2[1] )
  {
    v8 = -2147024809;
    v9 = 865LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !*a3 )
  {
    v8 = -2147467261;
    v9 = 866LL;
    goto LABEL_4;
  }
  if ( !*(_QWORD *)a4 )
  {
    v8 = -2147467261;
    v9 = 867LL;
    goto LABEL_4;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v11 = 1;
  if ( !*(_QWORD *)(a1 + 256) )
  {
    v12 = *(_QWORD *)(a4 + 8);
    if ( v12 )
      _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    v13 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)&v19.Data1 = *(_QWORD *)(a1 + 256);
    *(_QWORD *)(a1 + 256) = *(_QWORD *)a4;
    v14 = *(_QWORD *)(a1 + 264);
    *(_QWORD *)(a1 + 264) = v13;
    *(_QWORD *)v19.Data4 = v14;
    std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v19);
  }
  if ( !*(_QWORD *)(a1 + 248) || !*(_QWORD *)(a1 + 256) )
    v11 = 0;
  v15 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24);
  v19 = *(struct _GUID *)a2;
  v16 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
          (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
          &v19,
          a3,
          (__int64 **)a4);
  v8 = v16;
  if ( v16 >= 0 )
  {
    LOBYTE(v17) = v11;
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(v15, v17);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x374,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v16);
  }
  if ( v10 )
    LeaveCriticalSection(v10);
  return v8;
}
