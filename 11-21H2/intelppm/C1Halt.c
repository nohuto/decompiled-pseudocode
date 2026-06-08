/*
 * XREFs of C1Halt @ 0x1C00036C0
 * Callers:
 *     C1Idle @ 0x1C000B010 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C000B270 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
