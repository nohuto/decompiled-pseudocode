/*
 * XREFs of _std::vector_UwpWindowEventDispatcher::PendingActivationResumeData_std::allocator_UwpWindowEventDispatcher::PendingActivationResumeData___::_Emplace_reallocate_UwpWindowEventDispatcher::PendingActivationResumeData__::_1_::catch$3 @ 0x1803E9D93
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x1803E9AD4 (--$_Destroy_range@V-$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std.c)
 */

void __fastcall __noreturn std::vector_UwpWindowEventDispatcher::PendingActivationResumeData_std::allocator_UwpWindowEventDispatcher::PendingActivationResumeData___::_Emplace_reallocate_UwpWindowEventDispatcher::PendingActivationResumeData__::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 32LL * *(_QWORD *)(a2 + 120));
  throw;
}
