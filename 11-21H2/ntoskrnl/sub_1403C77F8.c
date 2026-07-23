/*
 * XREFs of sub_1403C77F8 @ 0x1403C77F8
 * Callers:
 *     sub_1409116D0 @ 0x1409116D0 (sub_1409116D0.c)
 *     sub_140911780 @ 0x140911780 (sub_140911780.c)
 *     sub_140B131D4 @ 0x140B131D4 (sub_140B131D4.c)
 *     sub_140B15550 @ 0x140B15550 (sub_140B15550.c)
 *     sub_140B15608 @ 0x140B15608 (sub_140B15608.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1403C77F8(__int64 *a1)
{
  while ( a1 < &qword_1400CA0A8 )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}
