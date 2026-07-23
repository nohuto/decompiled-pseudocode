/*
 * XREFs of sub_140A83CA4 @ 0x140A83CA4
 * Callers:
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A843D0 @ 0x140A843D0 (sub_140A843D0.c)
 *     sub_140A84630 @ 0x140A84630 (sub_140A84630.c)
 *     sub_140A84950 @ 0x140A84950 (sub_140A84950.c)
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A84F20 @ 0x140A84F20 (sub_140A84F20.c)
 *     sub_140A85600 @ 0x140A85600 (sub_140A85600.c)
 *     sub_140A859A0 @ 0x140A859A0 (sub_140A859A0.c)
 *     sub_140A85B10 @ 0x140A85B10 (sub_140A85B10.c)
 *     sub_140A85CF0 @ 0x140A85CF0 (sub_140A85CF0.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A86C30 @ 0x140A86C30 (sub_140A86C30.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A83CA4(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v2; // edi
  ULONG_PTR v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != a1 )
  {
    v2 = a1;
    v3 = CurrentIrql;
    sub_140A88948(byte_140C0D918, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    sub_1405FFA20(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140C0D918);
  }
}
