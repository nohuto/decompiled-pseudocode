/*
 * XREFs of sub_140961628 @ 0x140961628
 * Callers:
 *     sub_140979E6C @ 0x140979E6C (sub_140979E6C.c)
 *     sub_140979F5C @ 0x140979F5C (sub_140979F5C.c)
 * Callees:
 *     sub_140420610 @ 0x140420610 (sub_140420610.c)
 */

__int64 __fastcall sub_140961628(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  *a4 = 0LL;
  if ( !_bittest64(&qword_140D068D8, 0x28u) )
    return 3221225659LL;
  while ( a3 )
  {
    *a2 = sub_140420610(4LL, 0LL);
    a1 += 8LL;
    ++a2;
    a3 -= 8LL;
    *a4 += 8LL;
  }
  return 0LL;
}
