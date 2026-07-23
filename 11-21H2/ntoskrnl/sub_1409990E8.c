/*
 * XREFs of sub_1409990E8 @ 0x1409990E8
 * Callers:
 *     sub_1409994F8 @ 0x1409994F8 (sub_1409994F8.c)
 *     sub_140999574 @ 0x140999574 (sub_140999574.c)
 * Callees:
 *     sub_1405D1330 @ 0x1405D1330 (sub_1405D1330.c)
 */

void sub_1409990E8()
{
  __int64 v0; // r10

  v0 = qword_140C22310;
  if ( qword_140C22310 < (unsigned __int64)qword_140C22318 )
    v0 = qword_140C22318;
  sub_1405D1330((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C22318) / 0x989680uLL);
}
