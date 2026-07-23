/*
 * XREFs of sub_140A88948 @ 0x140A88948
 * Callers:
 *     sub_140A83778 @ 0x140A83778 (sub_140A83778.c)
 *     sub_140A83888 @ 0x140A83888 (sub_140A83888.c)
 *     sub_140A83924 @ 0x140A83924 (sub_140A83924.c)
 *     sub_140A839B8 @ 0x140A839B8 (sub_140A839B8.c)
 *     sub_140A83A4C @ 0x140A83A4C (sub_140A83A4C.c)
 *     sub_140A83AE4 @ 0x140A83AE4 (sub_140A83AE4.c)
 *     sub_140A83B84 @ 0x140A83B84 (sub_140A83B84.c)
 *     sub_140A83C18 @ 0x140A83C18 (sub_140A83C18.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A83D24 @ 0x140A83D24 (sub_140A83D24.c)
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A84F20 @ 0x140A84F20 (sub_140A84F20.c)
 *     sub_140A852B0 @ 0x140A852B0 (sub_140A852B0.c)
 *     sub_140A853A0 @ 0x140A853A0 (sub_140A853A0.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A86160 @ 0x140A86160 (sub_140A86160.c)
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 *     sub_140A866D0 @ 0x140A866D0 (sub_140A866D0.c)
 *     sub_140A868E0 @ 0x140A868E0 (sub_140A868E0.c)
 *     sub_140A874C8 @ 0x140A874C8 (sub_140A874C8.c)
 *     sub_140A8798C @ 0x140A8798C (sub_140A8798C.c)
 *     sub_140A87B3C @ 0x140A87B3C (sub_140A87B3C.c)
 *     sub_140A87DC8 @ 0x140A87DC8 (sub_140A87DC8.c)
 *     sub_140A87EFC @ 0x140A87EFC (sub_140A87EFC.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88624 @ 0x140A88624 (sub_140A88624.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88D98 @ 0x140A88D98 (sub_140A88D98.c)
 *     sub_140A89224 @ 0x140A89224 (sub_140A89224.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 */

__int64 sub_140A88948(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  int v7; // ebx
  const CHAR *v8; // rdi
  __int64 result; // rax

  v7 = a3 & 0x10000000;
  v8 = a2;
  if ( (a3 & 0x10000000) != 0 )
    a3 = (unsigned int)a3 & 0xEFFFFFFF;
  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    if ( (unsigned int)a3 >= 0x27 )
    {
      *a1 = 4;
      goto LABEL_9;
    }
    a2 = (const char *)qword_140A75490;
    result = *((unsigned int *)qword_140A75490 + a3);
    *a1 = result;
  }
  if ( !(_DWORD)result )
    return result;
  if ( (result & 0x10) != 0 )
    *a1 = 0;
LABEL_9:
  sub_1405FDF9C("**************** HAL Verifier Detected Violation ****************\n", a2, a3);
  sub_1405FDF9C((const char *)qword_140A7C810);
  sub_1405FDF9C("** VF: ");
  if ( v7 )
    DbgPrintEx(0x65u, 0, v8, a5, a6);
  else
    DbgPrintEx(0x65u, 0, v8, a4, a5, a6);
  sub_1405FDF9C((const char *)qword_140A7C870);
  sub_1405FDF9C((const char *)qword_140A7C810);
  return sub_1405FDF9C("*****************************************************************\n");
}
