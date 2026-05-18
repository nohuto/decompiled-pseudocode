/*
 * XREFs of sub_1800335B8 @ 0x1800335B8
 * Callers:
 *     sub_180100936 @ 0x180100936 (sub_180100936.c)
 *     sub_180100C4E @ 0x180100C4E (sub_180100C4E.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800335B8(_QWORD *a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = (char *)a1[7];
  if ( v2 )
  {
    result = sub_180010884(v2, (a1[9] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[7] = 0LL;
    a1[8] = 0LL;
    a1[9] = 0LL;
  }
  return result;
}
