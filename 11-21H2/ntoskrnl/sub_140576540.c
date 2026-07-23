/*
 * XREFs of sub_140576540 @ 0x140576540
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 */

void __fastcall __noreturn sub_140576540(__int64 a1, __int64 a2)
{
  KeSetEvent((PRKEVENT)a2, 0, 0);
  DbgPrintEx(0x65u, 0, "\nPassive-level ISR watchdog timeout! Interrupt: %p\n", *(const void **)(a2 + 24));
  __debugbreak();
}
