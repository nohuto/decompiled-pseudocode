/*
 * XREFs of sub_140864A10 @ 0x140864A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409EB374 @ 0x1409EB374 (sub_1409EB374.c)
 */

__int64 *__fastcall sub_140864A10(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6, __int64 *a7)
{
  __int64 *result; // rax

  result = qword_140013540;
  if ( a2 == 2 && a7 == qword_140013540 )
    return (__int64 *)sub_1409EB374(a7, a4);
  return result;
}
