/*
 * XREFs of MiGetExtentTable @ 0x14063DE90
 * Callers:
 *     MiDeleteFileExtentList @ 0x140A340C0 (MiDeleteFileExtentList.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetExtentTable(int a1)
{
  return (char *)&unk_140C65898 + 8 * a1;
}
