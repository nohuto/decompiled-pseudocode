/*
 * XREFs of j_free @ 0x18000A7C8
 * Callers:
 *     sub_180002210 @ 0x180002210 (sub_180002210.c)
 *     sub_1800038F0 @ 0x1800038F0 (sub_1800038F0.c)
 *     sub_1800039B4 @ 0x1800039B4 (sub_1800039B4.c)
 *     sub_180004CC0 @ 0x180004CC0 (sub_180004CC0.c)
 *     sub_180006C40 @ 0x180006C40 (sub_180006C40.c)
 *     sub_180009430 @ 0x180009430 (sub_180009430.c)
 *     sub_18000D230 @ 0x18000D230 (sub_18000D230.c)
 *     sub_1800191B0 @ 0x1800191B0 (sub_1800191B0.c)
 *     sub_180019200 @ 0x180019200 (sub_180019200.c)
 *     sub_180019260 @ 0x180019260 (sub_180019260.c)
 *     sub_1800192B0 @ 0x1800192B0 (sub_1800192B0.c)
 *     sub_18001AE40 @ 0x18001AE40 (sub_18001AE40.c)
 *     sub_18001AE90 @ 0x18001AE90 (sub_18001AE90.c)
 *     sub_18001AEE0 @ 0x18001AEE0 (sub_18001AEE0.c)
 *     sub_18001AF10 @ 0x18001AF10 (sub_18001AF10.c)
 *     sub_18001AF50 @ 0x18001AF50 (sub_18001AF50.c)
 *     sub_18001AF90 @ 0x18001AF90 (sub_18001AF90.c)
 *     sub_18001AFD0 @ 0x18001AFD0 (sub_18001AFD0.c)
 *     sub_18001C200 @ 0x18001C200 (sub_18001C200.c)
 *     sub_18001C700 @ 0x18001C700 (sub_18001C700.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl j_free(void *Block)
{
  free(Block);
}
