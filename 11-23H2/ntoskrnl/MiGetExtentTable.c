/*
 * XREFs of MiGetExtentTable @ 0x14063D940
 * Callers:
 *     MiDeleteFileExtentList @ 0x140A33E10 (MiDeleteFileExtentList.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetExtentTable(int a1)
{
  return (char *)&unk_140C65898 + 8 * a1;
}
