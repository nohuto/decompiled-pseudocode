/*
 * XREFs of ?InternalRelease@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B70AC
 * Callers:
 *     ??$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWorkspaceDiscoverBroker@@@Z @ 0x18008C870 (--$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWor.c)
 *     ??$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRecentAppsCache@Discover@PenWorkspace@@@Z @ 0x18008C9C0 (--$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     ?RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ @ 0x18008CBF4 (-RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ.c)
 *     ??1PenWorkspaceDiscoverBroker@@UEAA@XZ @ 0x1801B9ADC (--1PenWorkspaceDiscoverBroker@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalRelease(__int64 *a1)
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
