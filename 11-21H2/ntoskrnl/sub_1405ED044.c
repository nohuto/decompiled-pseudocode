/*
 * XREFs of sub_1405ED044 @ 0x1405ED044
 * Callers:
 *     sub_1405ECF9C @ 0x1405ECF9C (sub_1405ECF9C.c)
 *     sub_1405ED010 @ 0x1405ED010 (sub_1405ED010.c)
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1405ED044(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
