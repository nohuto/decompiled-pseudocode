/*
 * XREFs of sub_1405361D0 @ 0x1405361D0
 * Callers:
 *     <none>
 * Callees:
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

void __fastcall __noreturn sub_1405361D0(_JBTYPE *a1)
{
  longjmp(a1 + 10, 5);
}
