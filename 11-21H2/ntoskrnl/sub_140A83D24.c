/*
 * XREFs of sub_140A83D24 @ 0x140A83D24
 * Callers:
 *     sub_140A853A0 @ 0x140A853A0 (sub_140A853A0.c)
 *     sub_140A85550 @ 0x140A85550 (sub_140A85550.c)
 *     sub_140A85840 @ 0x140A85840 (sub_140A85840.c)
 *     sub_140A86160 @ 0x140A86160 (sub_140A86160.c)
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 *     sub_140A866D0 @ 0x140A866D0 (sub_140A866D0.c)
 *     sub_140A868E0 @ 0x140A868E0 (sub_140A868E0.c)
 *     sub_140A86E70 @ 0x140A86E70 (sub_140A86E70.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void sub_140A83D24()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    sub_140A88948(byte_140C0D91C, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    sub_1405FFA20(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140C0D91C);
  }
}
