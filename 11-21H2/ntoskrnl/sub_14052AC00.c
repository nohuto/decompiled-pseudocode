/*
 * XREFs of sub_14052AC00 @ 0x14052AC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14041B0A0 @ 0x14041B0A0 (sub_14041B0A0.c)
 */

void sub_14052AC00()
{
  __outbyte(0xA0u, 0x20u);
  __outbyte(0x20u, 0x20u);
  __inbyte(0x20u);
  sub_14041B0A0();
}
