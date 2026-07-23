/*
 * XREFs of sub_1405FEED0 @ 0x1405FEED0
 * Callers:
 *     sub_140A8A0C8 @ 0x140A8A0C8 (sub_140A8A0C8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1405FEED0(__int64 a1)
{
  char result; // al

  result = a1;
  if ( a1 )
  {
    sub_14042A5E0(&off_140D4E200, &qword_140D01450);
    return 1;
  }
  return result;
}
