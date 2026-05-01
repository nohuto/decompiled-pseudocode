/*
 * XREFs of _std::vector_std::shared_ptr_PenWorkspace::Discover::AppUsageData__std::allocator_std::shared_ptr_PenWorkspace::Discover::AppUsageData_____::_Emplace_reallocate_std::shared_ptr_PenWorkspace::Discover::AppUsageData__const_&__::_1_::catch$0 @ 0x180220039
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@0@@Z @ 0x180122AB0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@s.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_PenWorkspace::Discover::AppUsageData__std::allocator_std::shared_ptr_PenWorkspace::Discover::AppUsageData_____::_Emplace_reallocate_std::shared_ptr_PenWorkspace::Discover::AppUsageData__const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 16LL * *(_QWORD *)(a2 + 120));
  throw;
}
