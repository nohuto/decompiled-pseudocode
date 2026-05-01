/*
 * XREFs of ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x18014F30C
 * Callers:
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180093C14 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803B7E24 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z @ 0x1803B8084 (-HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@QEAV21@AEBV21@@Z @ 0x18011FA24 (--$_Emplace_reallocate@AEBV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@-$vector@V-$.c)
 *     ??0?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@AEBV01@@Z @ 0x1801217CC (--0-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x18014F3CC (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(RTL_SRWLOCK *a1, __int64 *a2)
{
  __int64 *v2; // r14
  RTL_SRWLOCK *v4; // rdi
  _QWORD *Ptr; // rsi
  _QWORD *i; // rbx
  _QWORD *v7; // rcx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v4 = a1 + 21;
  AcquireSRWLockShared(a1 + 21);
  Ptr = a1[3].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    v7 = (_QWORD *)v2[1];
    if ( v7 == (_QWORD *)v2[2] )
    {
      try
      {
        std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::_Emplace_reallocate<std::shared_ptr<PenWorkspace::Discover::AppUsageData> const &>(
          v2,
          v2[1],
          (__int64)(i + 6));
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0xEA,
          (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          v8);
        v2 = a2;
        goto LABEL_8;
      }
    }
    else
    {
      std::shared_ptr<PenWorkspace::Discover::AppUsageData>::shared_ptr<PenWorkspace::Discover::AppUsageData>(v7, i + 6);
      v2[1] += 16LL;
    }
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
LABEL_8:
  std::_Sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
    *v2,
    v2[1],
    (v2[1] - *v2) >> 4,
    anonymous_namespace_::CompareAppUsageTimes);
  return 0LL;
}
