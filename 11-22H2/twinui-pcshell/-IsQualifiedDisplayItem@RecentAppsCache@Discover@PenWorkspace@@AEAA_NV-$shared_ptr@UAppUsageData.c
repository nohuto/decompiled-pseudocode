/*
 * XREFs of ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18009E370
 * Callers:
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18009A8C0 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180490DDC (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _anonymous_namespace_::IsAppInBlackList @ 0x18009E448 (_anonymous_namespace_--IsAppInBlackList.c)
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x18009E494 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18017B6A0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 */

char __fastcall PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(__int64 a1, const WCHAR **a2)
{
  const WCHAR *v4; // rcx
  _WORD *v5; // rdx
  const WCHAR *v6; // rdi
  RTL_SRWLOCK *v7; // rdi
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v10; // rcx

  v4 = *a2;
  if ( *((_QWORD *)*a2 + 3) >= 8uLL )
    v4 = *(const WCHAR **)v4;
  if ( !CallerIdentity::IsShellExperienceAppId(v4, (const unsigned __int16 *)a2) )
  {
    v5 = *(_WORD **)(a1 + 208);
    if ( !v5 || !*v5 || !(unsigned __int8)std::wstring::_Equal(*a2) )
    {
      v6 = *a2;
      if ( !(unsigned __int8)std::wstring::_Equal(*a2) && !(unsigned __int8)anonymous_namespace_::IsAppInBlackList(v6) )
      {
        v7 = (RTL_SRWLOCK *)(v6 + 24);
        AcquireSRWLockShared(v7);
        if ( *((int *)*a2 + 8) >= 15 )
        {
          if ( v7 )
            ReleaseSRWLockShared(v7);
          v8 = (std::_Ref_count_base *)a2[1];
          if ( v8 )
            std::_Ref_count_base::_Decref(v8);
          return 1;
        }
        if ( v7 )
          ReleaseSRWLockShared(v7);
      }
    }
  }
  v10 = (std::_Ref_count_base *)a2[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return 0;
}
