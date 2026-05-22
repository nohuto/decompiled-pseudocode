/*
 * XREFs of _std::vector_std::shared_ptr_LegacyDeviceInfo__std::allocator_std::shared_ptr_LegacyDeviceInfo_____::_Emplace_reallocate_std::shared_ptr_LegacyDeviceInfo__const_&__::_1_::catch$0 @ 0x1800B5A6D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800B5548 (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_LegacyDeviceInfo__std::allocator_std::shared_ptr_LegacyDeviceInfo_____::_Emplace_reallocate_std::shared_ptr_LegacyDeviceInfo__const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(*(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 16LL * *(_QWORD *)(a2 + 136));
  throw;
}
