/*
 * XREFs of ??$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA?AV?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@0@PEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18000D724
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A7E0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x18001E3B4 (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::GetRangeNoThrow<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax

  *(_QWORD *)a1 = a2;
  v4 = a1 + 24;
  if ( a3 )
    v4 = a3;
  *(_QWORD *)(a1 + 16) = v4;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  **(_DWORD **)(a1 + 16) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, a1 + 8);
  return a1;
}
