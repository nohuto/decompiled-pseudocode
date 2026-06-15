/*
 * XREFs of _std::vector_std::shared_ptr_CXvmPowerReferenceManager__std::allocator_std::shared_ptr_CXvmPowerReferenceManager_____::_Emplace_reallocate_std::shared_ptr_CXvmPowerReferenceManager__const_&__::_1_::catch$0 @ 0x180103613
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006A663 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@@Z @ 0x1800C23BC (--$_Destroy_range@V-$allocator@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAXPE.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_CXvmPowerReferenceManager__std::allocator_std::shared_ptr_CXvmPowerReferenceManager_____::_Emplace_reallocate_std::shared_ptr_CXvmPowerReferenceManager__const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 16LL * *(_QWORD *)(a2 + 120));
  throw;
}
