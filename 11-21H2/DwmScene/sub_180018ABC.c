/*
 * XREFs of sub_180018ABC @ 0x180018ABC
 * Callers:
 *     sub_1800FF9C9 @ 0x1800FF9C9 (sub_1800FF9C9.c)
 *     sub_180100230 @ 0x180100230 (sub_180100230.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180018ABC(_QWORD *a1)
{
  __int64 result; // rax
  char *v3; // rcx

  result = sub_180010910((__int64)(a1 + 9));
  v3 = (char *)a1[6];
  if ( v3 )
  {
    result = sub_180010884(v3, (a1[8] - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL);
    a1[6] = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
  }
  return result;
}
