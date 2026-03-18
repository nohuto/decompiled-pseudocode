/*
 * XREFs of HalpECmosWriteByte @ 0x1405157F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIoDelay @ 0x14041A6A0 (HalpIoDelay.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x1405066D8 (WRITE_PORT_USHORT_PAIR.c)
 */

void __fastcall HalpECmosWriteByte(__int16 a1, unsigned __int8 a2)
{
  WRITE_PORT_USHORT_PAIR(0x74u, 0x75u, a1);
  HalpIoDelay();
  __outbyte(0x76u, a2);
  HalpIoDelay();
}
