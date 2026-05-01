/*
 * XREFs of ??1?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@XZ @ 0x1803B2E08
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$2 @ 0x180218E00 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$2.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk_::_1_::dtor$11 @ 0x1802193CF (_PenWorkspace--Discover--RecentAppsCache--LoadJsonDataFromDisk_--_1_--dtor$11.c)
 *     _std::_Insertion_sort_unchecked_std::shared_ptr_PenWorkspace::Discover::AppUsageData____bool_(__cdecl_)(std::shared_ptr_PenWorkspace::Discover::AppUsageData__&_std::shared_ptr_PenWorkspace::Discover::AppUsageData__&)__::_1_::dtor$0 @ 0x180222708 (_std--_Insertion_sort_unchecked_std--shared_ptr_PenWorkspace--Discover--AppUsageData____bool_(__.c)
 *     _std::_Make_heap_unchecked_std::shared_ptr_PenWorkspace::Discover::AppUsageData____bool_(__cdecl_)(std::shared_ptr_PenWorkspace::Discover::AppUsageData__&_std::shared_ptr_PenWorkspace::Discover::AppUsageData__&)__::_1_::dtor$0 @ 0x1803B6904 (_std--_Make_heap_unchecked_std--shared_ptr_PenWorkspace--Discover--AppUsageData____bool_(__cdecl.c)
 *     _std::_Sort_heap_unchecked_std::shared_ptr_PenWorkspace::Discover::AppUsageData____bool_(__cdecl_)(std::shared_ptr_PenWorkspace::Discover::AppUsageData__&_std::shared_ptr_PenWorkspace::Discover::AppUsageData__&)__::_1_::dtor$0 @ 0x1803B6E3B (_std--_Sort_heap_unchecked_std--shared_ptr_PenWorkspace--Discover--AppUsageData____bool_(__cdecl.c)
 *     _PenWorkspace::Discover::RecentAppsCache::CreateRecentItem_::_1_::dtor$0 @ 0x1803B78AE (_PenWorkspace--Discover--RecentAppsCache--CreateRecentItem_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp_::_1_::dtor$0 @ 0x1803B8C7E (_PenWorkspace--Discover--RecentAppsCache--PrependDefaultApp_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<PenWorkspace::Discover::AppUsageData>::~shared_ptr<PenWorkspace::Discover::AppUsageData>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
