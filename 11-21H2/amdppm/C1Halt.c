/*
 * XREFs of C1Halt @ 0x1C000BAD0
 * Callers:
 *     C1Idle @ 0x1C0001610 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C00094A0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
