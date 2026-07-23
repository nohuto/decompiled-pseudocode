/*
 * XREFs of KiPassiveIsrWatchdog @ 0x14057A620
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 */

void __fastcall __noreturn KiPassiveIsrWatchdog(__int64 a1, __int64 a2)
{
  KeSetEvent((PRKEVENT)a2, 0, 0);
  DbgPrintEx(0x65u, 0, "\nPassive-level ISR watchdog timeout! Interrupt: %p\n", *(const void **)(a2 + 24));
  __debugbreak();
}
