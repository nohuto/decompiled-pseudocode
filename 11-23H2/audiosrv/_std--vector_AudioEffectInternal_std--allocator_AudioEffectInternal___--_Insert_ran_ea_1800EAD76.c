/*
 * XREFs of _std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_range_AudioEffectInternal____::_1_::catch$68 @ 0x1800EAD76
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800759A0 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 */

void __fastcall __noreturn std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_range_AudioEffectInternal____::_1_::catch_68(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  char *v4; // rbx
  _QWORD *v5; // rdi

  v3 = a2[6];
  v4 = (char *)a2[17];
  memmove_0(v4, &v4[24 * v3], 24 * v3);
  v5 = (_QWORD *)a2[19];
  memmove_0(&v4[24 * v3], &v4[48 * v3], *v5 - (_QWORD)&v4[48 * v3]);
  *v5 = a2[5];
  throw;
}
