/*
 * XREFs of _std::vector_CVADServer___std::allocator_CVADServer_____::_Emplace_reallocate_CVADServer___const_&__::_1_::catch$18 @ 0x18007DCA3
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800759A0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CVADServer___std::allocator_CVADServer_____::_Emplace_reallocate_CVADServer___const____::_1_::catch_18(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 8LL * *(_QWORD *)(a2 + 80));
  throw;
}
