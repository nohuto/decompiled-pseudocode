/*
 * XREFs of _std::vector_JointResize::SecondaryViewInfo_std::allocator_JointResize::SecondaryViewInfo___::_Emplace_reallocate_JointResize::SecondaryViewInfo__::_1_::catch$6 @ 0x1805E087A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x1802E68FC (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 */

void __fastcall __noreturn std::vector_JointResize::SecondaryViewInfo_std::allocator_JointResize::SecondaryViewInfo___::_Emplace_reallocate_JointResize::SecondaryViewInfo__::_1_::catch_6(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(*(__int64 **)(a2 + 112), *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 96LL * *(_QWORD *)(a2 + 120));
  throw;
}
