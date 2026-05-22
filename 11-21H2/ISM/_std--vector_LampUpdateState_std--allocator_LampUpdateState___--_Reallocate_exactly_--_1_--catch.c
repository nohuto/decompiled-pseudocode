/*
 * XREFs of _std::vector_LampUpdateState_std::allocator_LampUpdateState___::_Reallocate_exactly_::_1_::catch$1 @ 0x1800D322C
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_LampUpdateState_std::allocator_LampUpdateState___::_Reallocate_exactly_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), 8LL * *(_QWORD *)(a2 + 72));
  throw;
}
