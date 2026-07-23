/*
 * XREFs of WRITE_PORT_USHORT_PAIR @ 0x140506C28
 * Callers:
 *     HalMakeBeep @ 0x140506B50 (HalMakeBeep.c)
 *     HalpECmosReadByte @ 0x140515D00 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x140515D40 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x1405281C0 (HalpPicSetLineState.c)
 * Callees:
 *     HalpIoDelay @ 0x14041AA30 (HalpIoDelay.c)
 */

unsigned __int8 __fastcall WRITE_PORT_USHORT_PAIR(unsigned __int16 a1, unsigned __int16 a2, __int16 a3)
{
  unsigned __int8 v4; // di^1
  unsigned __int8 result; // al

  __outbyte(a1, a3);
  v4 = HIBYTE(a3);
  HalpIoDelay();
  result = v4;
  __outbyte(a2, v4);
  return result;
}
