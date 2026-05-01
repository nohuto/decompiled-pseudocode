/*
 * XREFs of ?HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z @ 0x1803B8084
 * Callers:
 *     ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x1803B3F40 (-HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@0@@Z @ 0x180122AB0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@s.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x18014F30C (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::HaveUsedPen(RTL_SRWLOCK *this, int *a2)
{
  int SortedAppList; // eax
  unsigned int v4; // edi
  __int64 i; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0;
  v7 = 0LL;
  v8 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, (__int64 *)&v7);
  v4 = SortedAppList;
  if ( SortedAppList >= 0 )
  {
    for ( i = v7; i != *((_QWORD *)&v7 + 1); i += 16LL )
    {
      if ( !*(_BYTE *)(*(_QWORD *)i + 44LL) && *(int *)(*(_QWORD *)i + 32LL) > 0 )
      {
        *a2 = 1;
        break;
      }
    }
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
  }
  if ( (_QWORD)v7 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(
      v7,
      *((__int64 *)&v7 + 1));
    std::_Deallocate<16,0>((void *)v7, (v8 - v7) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v4;
}
