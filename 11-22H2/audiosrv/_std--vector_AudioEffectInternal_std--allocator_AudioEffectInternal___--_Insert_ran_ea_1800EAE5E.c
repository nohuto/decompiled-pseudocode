/*
 * XREFs of _std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_range_AudioEffectInternal____::_1_::catch$70 @ 0x1800EAE5E
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800759D0 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1800759E8 (memmove_0.c)
 */

void __fastcall __noreturn std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_range_AudioEffectInternal____::_1_::catch_70(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx

  v3 = *(_QWORD **)(a2 + 152);
  memmove_0(*(void **)(a2 + 136), *(const void **)(a2 + 144), *v3 - *(_QWORD *)(a2 + 144));
  *v3 = *(_QWORD *)(a2 + 40);
  throw;
}
