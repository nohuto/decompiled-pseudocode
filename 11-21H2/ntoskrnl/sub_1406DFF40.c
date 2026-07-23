/*
 * XREFs of sub_1406DFF40 @ 0x1406DFF40
 * Callers:
 *     sub_140702AF8 @ 0x140702AF8 (sub_140702AF8.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 * Callees:
 *     sub_14027D408 @ 0x14027D408 (sub_14027D408.c)
 */

void __fastcall sub_1406DFF40(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    sub_14027D408((__int64)a1, 1);
}
