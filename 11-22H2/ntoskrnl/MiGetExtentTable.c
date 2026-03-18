/*
 * XREFs of MiGetExtentTable @ 0x14063D9B0
 * Callers:
 *     MiDeleteFileExtentList @ 0x140A33E80 (MiDeleteFileExtentList.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetExtentTable(int a1)
{
  return (char *)&unk_140C65998 + 8 * a1;
}
