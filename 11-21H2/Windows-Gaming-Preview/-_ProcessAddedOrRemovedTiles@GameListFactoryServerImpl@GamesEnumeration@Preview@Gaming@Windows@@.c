/*
 * XREFs of ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x18001E3B4
 * Callers:
 *     ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@Shim@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x18001E194 (-_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 * Callees:
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x18000C5A0 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInterna.c)
 *     ??$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA?AV?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@0@PEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18000D724 (--$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA-AV-$vector_range_nothro.c)
 *     ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x180013A14 (-IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@Shim@UnifiedTile@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  unsigned __int8 *v6; // r8
  int v7; // esi
  int v8; // r15d
  Windows::Gaming::Preview::GamesEnumeration *v9; // rbx
  int IsUserPinnedTile; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  Windows::Gaming::Preview::GamesEnumeration *v14; // rcx
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+40h] [rbp-20h]
  int *v20; // [rsp+48h] [rbp-18h]
  Windows::Gaming::Preview::GamesEnumeration *v21; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v23; // [rsp+90h] [rbp+30h] BYREF
  char *v24; // [rsp+98h] [rbp+38h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h]

  v25 = a3;
  v23 = a1;
  if ( !a2 )
    goto LABEL_24;
  wil::GetRangeNoThrow<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>((__int64)&v18, a2, (__int64)&v24);
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::get_at_current(
    &v18,
    0);
  v7 = 0;
  v8 = v19;
  while ( *v20 >= 0 && v7 != v8 )
  {
    v9 = v21;
    v17[1] = v21;
    if ( v21 )
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v21 + 8LL))(v21);
    v17[2] = 0LL;
    LOBYTE(v23) = 0;
    if ( a4 )
    {
      if ( !v9 )
        goto LABEL_16;
      IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
                           v9,
                           (struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *)&v23,
                           v6);
      v11 = retaddr;
      if ( IsUserPinnedTile < 0 )
      {
        v12 = 315LL;
LABEL_15:
        wil::details::in1diag3::_Log_Hr(
          v11,
          v12,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)IsUserPinnedTile);
        goto LABEL_16;
      }
      if ( !(_BYTE)v23 )
        goto LABEL_16;
    }
    v17[0] = v9;
    v13 = *(_QWORD *)(a3 + 56);
    if ( !v13 )
    {
      std::_Xbad_function_call();
      break;
    }
    IsUserPinnedTile = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 16LL))(v13, v17);
    v11 = retaddr;
    if ( IsUserPinnedTile < 0 )
    {
      v12 = 318LL;
      goto LABEL_15;
    }
LABEL_16:
    if ( v9 )
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v9 + 16LL))(v9);
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::get_at_current(
      &v18,
      ++v7);
  }
  v14 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( (int)v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      322LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v24);
LABEL_24:
  v15 = *(_QWORD *)(a3 + 56);
  if ( v15 )
  {
    LOBYTE(a2) = v15 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, a2);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return 0LL;
}
