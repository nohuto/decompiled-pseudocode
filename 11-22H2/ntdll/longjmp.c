/*
 * XREFs of longjmp @ 0x1800929D0
 * Callers:
 *     <none>
 * Callees:
 *     __except_validate_jump_buffer @ 0x180095148 (__except_validate_jump_buffer.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  _except_validate_jump_buffer();
  _longjmp_internal(Buf, (unsigned int)Value);
}
