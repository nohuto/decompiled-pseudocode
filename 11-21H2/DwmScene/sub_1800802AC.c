/*
 * XREFs of sub_1800802AC @ 0x1800802AC
 * Callers:
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 *     sub_180100981 @ 0x180100981 (sub_180100981.c)
 *     sub_180100C99 @ 0x180100C99 (sub_180100C99.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800802AC(_QWORD *a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = (char *)a1[8];
  if ( v2 )
  {
    result = sub_180010884(v2, (a1[10] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[8] = 0LL;
    a1[9] = 0LL;
    a1[10] = 0LL;
  }
  return result;
}
