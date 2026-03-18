/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140AF9060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AF9080 @ 0x140AF9080 (sub_140AF9080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140AF9080();
  __debugbreak();
}
