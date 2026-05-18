/*
 * XREFs of sub_180030B3C @ 0x180030B3C
 * Callers:
 *     sub_180032F04 @ 0x180032F04 (sub_180032F04.c)
 *     sub_1800B1FC8 @ 0x1800B1FC8 (sub_1800B1FC8.c)
 *     sub_1800B216C @ 0x1800B216C (sub_1800B216C.c)
 *     sub_1800B21F8 @ 0x1800B21F8 (sub_1800B21F8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

_QWORD *__fastcall sub_180030B3C(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 4;
    do
    {
      if ( *v3 >= 0x10uLL )
        sub_180010884((char *)*(v3 - 3), *v3 + 1LL);
      *(v3 - 1) = 0LL;
      *v3 = 15LL;
      *((_BYTE *)v3 - 24) = 0;
      v3 += 7;
      result = v3 - 4;
    }
    while ( v3 - 4 != a2 );
  }
  return result;
}
