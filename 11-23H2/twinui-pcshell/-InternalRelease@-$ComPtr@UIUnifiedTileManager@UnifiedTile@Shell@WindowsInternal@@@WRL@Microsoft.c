/*
 * XREFs of ?InternalRelease@?$ComPtr@UIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BEB5C
 * Callers:
 *     ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x1801948AC (--1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ.c)
 *     ??1?$ComPtr@UIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x18048C43C (--1-$ComPtr@UIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x18048CCD0 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180490A7C (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager>::InternalRelease(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
