/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140AFA060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AFA080 @ 0x140AFA080 (sub_140AFA080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140AFA080();
  __debugbreak();
}
