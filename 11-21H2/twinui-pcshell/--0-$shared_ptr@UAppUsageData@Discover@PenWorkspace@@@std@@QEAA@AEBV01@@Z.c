/*
 * XREFs of ??0?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@AEBV01@@Z @ 0x1801217CC
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@QEAV21@AEBV21@@Z @ 0x18011FA24 (--$_Emplace_reallocate@AEBV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@-$vector@V-$.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x18014F30C (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ??4?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1803B7464 (--4-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803B7E24 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<PenWorkspace::Discover::AppUsageData>::shared_ptr<PenWorkspace::Discover::AppUsageData>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
