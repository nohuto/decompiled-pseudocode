/*
 * XREFs of ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x180018994
 * Callers:
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001FF38 (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180018A30 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@$$.c)
 *     ??_V@YAXPEAX@Z @ 0x18004BBC4 (--_V@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetGameFromGameConfigStore(__int64 a1, __int128 *a2, void **a3)
{
  int v4; // eax
  unsigned int v5; // edi
  void *v6; // rbx
  void *v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+48h] [rbp+10h] BYREF
  void *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0;
  v9 = *a2;
  v4 = ((__int64 (__fastcall *)(__int64, __int128 *, void **, int *))GetGameFromGameConfigStore)(a1, &v9, &v12, &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0LL;
    v7 = *a3;
    *a3 = v12;
    if ( v7 )
      operator delete[](v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v4);
    v6 = v12;
  }
  if ( v6 )
    operator delete[](v6);
  return v5;
}
