/*
 * XREFs of sub_14059A6AC @ 0x14059A6AC
 * Callers:
 *     sub_1405A36D0 @ 0x1405A36D0 (sub_1405A36D0.c)
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 * Callees:
 *     sub_14059A668 @ 0x14059A668 (sub_14059A668.c)
 *     sub_14096EBDC @ 0x14096EBDC (sub_14096EBDC.c)
 */

_BOOL8 __fastcall sub_14059A6AC(unsigned __int64 a1, const signed __int64 **a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)KeGetCurrentThread() + 23);
  return (unsigned int)sub_14059A668(a1, *a2) == 2 && (unsigned int)sub_14096EBDC(v2);
}
