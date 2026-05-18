/*
 * XREFs of sub_1800670BC @ 0x1800670BC
 * Callers:
 *     sub_180067B10 @ 0x180067B10 (sub_180067B10.c)
 *     sub_1800A8F64 @ 0x1800A8F64 (sub_1800A8F64.c)
 *     sub_1800A93CC @ 0x1800A93CC (sub_1800A93CC.c)
 *     sub_1800A941C @ 0x1800A941C (sub_1800A941C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

_QWORD *__fastcall sub_1800670BC(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  char *v4; // rcx
  unsigned __int64 v5; // rdx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 7;
    do
    {
      v4 = (char *)*(v3 - 2);
      if ( v4 )
      {
        sub_180010884(v4, (*v3 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL);
        *(v3 - 2) = 0LL;
        *(v3 - 1) = 0LL;
        *v3 = 0LL;
      }
      v5 = *(v3 - 4);
      if ( v5 >= 0x10 )
        sub_180010884((char *)*(v3 - 7), v5 + 1);
      *(v3 - 5) = 0LL;
      *(v3 - 4) = 15LL;
      *((_BYTE *)v3 - 56) = 0;
      v3 += 8;
      result = v3 - 7;
    }
    while ( v3 - 7 != a2 );
  }
  return result;
}
