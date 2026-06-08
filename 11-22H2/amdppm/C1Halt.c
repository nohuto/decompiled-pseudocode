/*
 * XREFs of C1Halt @ 0x1C000C410
 * Callers:
 *     C1Idle @ 0x1C0001620 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C0009D80 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
