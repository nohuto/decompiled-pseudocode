/*
 * XREFs of C1Halt @ 0x1C000C4B0
 * Callers:
 *     C1Idle @ 0x1C0002770 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C0004F60 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
