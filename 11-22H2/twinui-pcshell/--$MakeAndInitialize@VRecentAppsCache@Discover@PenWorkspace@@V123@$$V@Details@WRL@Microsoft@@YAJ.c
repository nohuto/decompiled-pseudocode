/*
 * XREFs of ??$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRecentAppsCache@Discover@PenWorkspace@@@Z @ 0x18008C9C0
 * Callers:
 *     ??$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWorkspaceDiscoverBroker@@@Z @ 0x18008C870 (--$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWor.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ @ 0x1800704AC (-InternalAddRef@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ @ 0x18008CA60 (--0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ @ 0x18008CBF4 (-RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B70AC (-InternalRelease@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::RecentAppsCache,PenWorkspace::Discover::RecentAppsCache,>(
        PenWorkspace::Discover::RecentAppsCache **a1)
{
  PenWorkspace::Discover::RecentAppsCache *v2; // rax
  PenWorkspace::Discover::RecentAppsCache *v3; // rsi
  int v4; // edi
  PenWorkspace::Discover::RecentAppsCache *v6; // [rsp+40h] [rbp+8h] BYREF
  PenWorkspace::Discover::RecentAppsCache *v7; // [rsp+48h] [rbp+10h]
  PenWorkspace::Discover::RecentAppsCache *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (PenWorkspace::Discover::RecentAppsCache *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = v2;
  if ( v2 )
  {
    v8 = v2;
    v3 = (PenWorkspace::Discover::RecentAppsCache *)PenWorkspace::Discover::RecentAppsCache::RecentAppsCache(v2);
    v6 = v3;
    v4 = PenWorkspace::Discover::RecentAppsCache::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef((__int64 *)&v6);
      *a1 = v3;
      v4 = 0;
    }
    Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalRelease(&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
