/*
 * XREFs of _std::vector_KeyboardProcessor::TargetingInfo_std::allocator_KeyboardProcessor::TargetingInfo___::_Emplace_reallocate_KeyboardProcessor::TargetingInfo_&__::_1_::catch$0 @ 0x1801B0A11
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x1801B0860 (--$_Destroy_range@V-$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInf.c)
 */

void __fastcall __noreturn std::vector_KeyboardProcessor::TargetingInfo_std::allocator_KeyboardProcessor::TargetingInfo___::_Emplace_reallocate_KeyboardProcessor::TargetingInfo____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 384LL * *(_QWORD *)(a2 + 120));
  throw;
}
