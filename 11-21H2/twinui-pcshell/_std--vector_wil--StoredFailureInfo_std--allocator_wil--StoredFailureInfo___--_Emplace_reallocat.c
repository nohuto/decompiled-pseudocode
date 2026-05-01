/*
 * XREFs of _std::vector_wil::StoredFailureInfo_std::allocator_wil::StoredFailureInfo___::_Emplace_reallocate_wil::FailureInfo_const_&__::_1_::catch$1 @ 0x18038D6AC
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180348AEC (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 */

void __fastcall __noreturn std::vector_wil::StoredFailureInfo_std::allocator_wil::StoredFailureInfo___::_Emplace_reallocate_wil::FailureInfo_const____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(*(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 168LL * *(_QWORD *)(a2 + 136));
  throw;
}
