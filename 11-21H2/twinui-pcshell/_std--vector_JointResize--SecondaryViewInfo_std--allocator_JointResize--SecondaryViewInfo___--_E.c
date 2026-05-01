/*
 * XREFs of _std::vector_JointResize::SecondaryViewInfo_std::allocator_JointResize::SecondaryViewInfo___::_Emplace_reallocate_JointResize::SecondaryViewInfo__::_1_::catch$2 @ 0x180527A0C
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180527844 (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 */

void __fastcall __noreturn std::vector_JointResize::SecondaryViewInfo_std::allocator_JointResize::SecondaryViewInfo___::_Emplace_reallocate_JointResize::SecondaryViewInfo__::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(*(__int64 **)(a2 + 112), *(__int64 **)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 88LL * *(_QWORD *)(a2 + 136));
  throw;
}
