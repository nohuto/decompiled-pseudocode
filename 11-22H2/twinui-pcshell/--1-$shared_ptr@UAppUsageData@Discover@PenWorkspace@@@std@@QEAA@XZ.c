/*
 * XREFs of ??1?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@XZ @ 0x18048C538
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk_::_1_::dtor$11 @ 0x1802B78E9 (_PenWorkspace--Discover--RecentAppsCache--LoadJsonDataFromDisk_--_1_--dtor$11.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$2 @ 0x1802BA0F0 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$2.c)
 *     _std::_Insertion_sort_unchecked_std::shared_ptr_PenWorkspace::Discover::AppUsageData____bool_(__cdecl_)(std::shared_ptr_PenWorkspace::Discover::AppUsageData__&_std::shared_ptr_PenWorkspace::Discover::AppUsageData__&)__::_1_::dtor$0 @ 0x1802C5B94 (_std--_Insertion_sort_unchecked_std--shared_ptr_PenWorkspace--Discover--AppUsageData____bool_(__.c)
 *     _std::_Make_heap_unchecked_std::shared_ptr_PenWorkspace::Discover::AppUsageData____bool_(__cdecl_)(std::shared_ptr_PenWorkspace::Discover::AppUsageData__&_std::shared_ptr_PenWorkspace::Discover::AppUsageData__&)__::_1_::dtor$0 @ 0x18048F9EC (_std--_Make_heap_unchecked_std--shared_ptr_PenWorkspace--Discover--AppUsageData____bool_(__cdecl.c)
 *     _std::_Sort_heap_unchecked_std::shared_ptr_PenWorkspace::Discover::AppUsageData____bool_(__cdecl_)(std::shared_ptr_PenWorkspace::Discover::AppUsageData__&_std::shared_ptr_PenWorkspace::Discover::AppUsageData__&)__::_1_::dtor$0 @ 0x18048FF2B (_std--_Sort_heap_unchecked_std--shared_ptr_PenWorkspace--Discover--AppUsageData____bool_(__cdecl.c)
 *     _PenWorkspace::Discover::RecentAppsCache::CreateRecentItem_::_1_::dtor$0 @ 0x18049098E (_PenWorkspace--Discover--RecentAppsCache--CreateRecentItem_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp_::_1_::dtor$0 @ 0x180491C76 (_PenWorkspace--Discover--RecentAppsCache--PrependDefaultApp_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<PenWorkspace::Discover::AppUsageData>::~shared_ptr<PenWorkspace::Discover::AppUsageData>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
