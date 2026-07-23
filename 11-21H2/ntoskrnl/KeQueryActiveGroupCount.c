/*
 * XREFs of KeQueryActiveGroupCount @ 0x1402622B0
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1409EB100 @ 0x1409EB100 (sub_1409EB100.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return word_140D05014;
}
