/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$12 @ 0x140060B20
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1400321F7 (memmove_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch_12(
        __int64 a1,
        _QWORD *a2)
{
  char *v3; // rcx
  size_t v4; // rax
  char *v5; // rsi
  char *v6; // rdi
  _QWORD *v7; // rbx

  v3 = (char *)a2[17];
  v4 = a2[6];
  v5 = &v3[2 * v4];
  v6 = &v3[v4];
  memmove_0(v3, &v3[v4], v4);
  v7 = (_QWORD *)a2[16];
  memmove_0(v6, v5, *v7 - (_QWORD)v5);
  *v7 = a2[4];
  throw;
}
