/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$14 @ 0x140060BA3
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1400321F7 (memmove_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx

  v3 = *(_QWORD **)(a2 + 128);
  memmove_0(*(void **)(a2 + 136), *(const void **)(a2 + 144), *v3 - *(_QWORD *)(a2 + 144));
  *v3 = *(_QWORD *)(a2 + 32);
  throw;
}
