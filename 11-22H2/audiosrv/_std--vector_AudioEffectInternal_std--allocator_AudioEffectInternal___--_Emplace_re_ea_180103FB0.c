/*
 * XREFs of _std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Emplace_reallocate_AudioEffectInternal__::_1_::catch$13 @ 0x180103FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800759D0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Emplace_reallocate_AudioEffectInternal__::_1_::catch_13(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 24LL * *(_QWORD *)(a2 + 80));
  throw;
}
