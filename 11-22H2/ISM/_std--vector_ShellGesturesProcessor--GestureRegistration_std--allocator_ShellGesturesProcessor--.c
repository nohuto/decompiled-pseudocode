/*
 * XREFs of _std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration___::_Emplace_reallocate_ShellGesturesProcessor::GestureRegistration_const_&__::_1_::catch$5 @ 0x18007FA10
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18017C23C (--$_Destroy_range@V-$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUG.c)
 */

void __fastcall __noreturn std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration___::_Emplace_reallocate_ShellGesturesProcessor::GestureRegistration_const____::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(*(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 120), 32LL * *(_QWORD *)(a2 + 112));
  throw;
}
