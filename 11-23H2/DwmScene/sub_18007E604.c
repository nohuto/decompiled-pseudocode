/*
 * XREFs of sub_18007E604 @ 0x18007E604
 * Callers:
 *     sub_18007C73C @ 0x18007C73C (sub_18007C73C.c)
 *     sub_18009702C @ 0x18009702C (sub_18009702C.c)
 *     sub_1800971A4 @ 0x1800971A4 (sub_1800971A4.c)
 *     sub_180097890 @ 0x180097890 (sub_180097890.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 */

__int64 __fastcall sub_18007E604(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v4 = sub_180010B48(a2);
  result = sub_18001090C(v4);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
