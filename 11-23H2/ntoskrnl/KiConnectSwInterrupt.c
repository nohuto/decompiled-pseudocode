/*
 * XREFs of KiConnectSwInterrupt @ 0x140B958C4
 * Callers:
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x140B728D4 (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(struct _MDL *a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
