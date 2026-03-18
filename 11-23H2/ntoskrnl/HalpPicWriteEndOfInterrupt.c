/*
 * XREFs of HalpPicWriteEndOfInterrupt @ 0x140527D70
 * Callers:
 *     <none>
 * Callees:
 *     HalpIoDelay @ 0x14041A6A0 (HalpIoDelay.c)
 */

void HalpPicWriteEndOfInterrupt()
{
  __outbyte(0xA0u, 0x20u);
  __outbyte(0x20u, 0x20u);
  __inbyte(0x20u);
  HalpIoDelay();
}
