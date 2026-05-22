/*
 * XREFs of _std::vector_HotKeyRegistrationData_std::allocator_HotKeyRegistrationData___::_Emplace_reallocate_HotKeyRegistrationData_const_&__::_1_::catch$23 @ 0x180122D49
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_HotKeyRegistrationData_std::allocator_HotKeyRegistrationData___::_Emplace_reallocate_HotKeyRegistrationData_const____::_1_::catch_23(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 12LL * *(_QWORD *)(a2 + 80));
  throw;
}
