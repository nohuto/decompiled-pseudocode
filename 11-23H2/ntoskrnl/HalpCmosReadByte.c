/*
 * XREFs of HalpCmosReadByte @ 0x140372080
 * Callers:
 *     HalpGetSetCmosData @ 0x1403A540C (HalpGetSetCmosData.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall HalpCmosReadByte(unsigned __int8 a1)
{
  __outbyte(0x70u, a1);
  return __inbyte(0x71u);
}
