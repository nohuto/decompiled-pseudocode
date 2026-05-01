/*
 * XREFs of ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1804903B0
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::SaveDataToJson_::_1_::dtor$0 @ 0x1802B7811 (_PenWorkspace--Discover--RecentAppsCache--SaveDataToJson_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::dtor$0 @ 0x180490FE4 (_PenWorkspace--Discover--RecentAppsCache--GetMRUApps_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::HaveUsedPen_::_1_::dtor$0 @ 0x1804910F0 (_PenWorkspace--Discover--RecentAppsCache--HaveUsedPen_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@0@@Z @ 0x18017AED4 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@s.c)
 */

void __fastcall std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(
      (__int64)v2,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
