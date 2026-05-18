/*
 * XREFs of sub_180018B04 @ 0x180018B04
 * Callers:
 *     unknown_libname_14 @ 0x1800FF9B7 (unknown_libname_14.c)
 *     sub_1801009FE @ 0x1801009FE (sub_1801009FE.c)
 *     sub_180100D16 @ 0x180100D16 (sub_180100D16.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180018B04(_QWORD *a1)
{
  __int64 result; // rax
  char *v3; // rcx

  result = sub_180010910((__int64)(a1 + 14));
  v3 = (char *)a1[11];
  if ( v3 )
  {
    result = sub_180010884(v3, (a1[13] - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL);
    a1[11] = 0LL;
    a1[12] = 0LL;
    a1[13] = 0LL;
  }
  return result;
}
