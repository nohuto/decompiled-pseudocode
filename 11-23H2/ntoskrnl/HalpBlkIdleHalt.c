/*
 * XREFs of HalpBlkIdleHalt @ 0x140B14060
 * Callers:
 *     HalpBlkIdleLoop @ 0x140B16530 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __noreturn HalpBlkIdleHalt()
{
  _enable();
  __halt();
}
