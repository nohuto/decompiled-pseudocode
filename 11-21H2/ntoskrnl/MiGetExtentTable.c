/*
 * XREFs of MiGetExtentTable @ 0x14059F224
 * Callers:
 *     MiDeleteFileExtentList @ 0x140970668 (MiDeleteFileExtentList.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetExtentTable(int a1)
{
  return (char *)&unk_140C4F458 + 8 * a1;
}
