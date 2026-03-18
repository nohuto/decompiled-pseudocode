/*
 * XREFs of HalpBlkIdlePortReadHalt @ 0x140B15070
 * Callers:
 *     HalpBlkIdleLoop @ 0x140B17530 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HalpBlkIdlePortReadHalt(unsigned __int16 a1)
{
  __inbyte(a1);
  _enable();
  __halt();
}
