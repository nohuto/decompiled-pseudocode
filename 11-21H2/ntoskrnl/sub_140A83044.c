/*
 * XREFs of sub_140A83044 @ 0x140A83044
 * Callers:
 *     sub_140A82B0C @ 0x140A82B0C (sub_140A82B0C.c)
 *     sub_140A82E08 @ 0x140A82E08 (sub_140A82E08.c)
 *     sub_140A82EB0 @ 0x140A82EB0 (sub_140A82EB0.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 */

__int64 sub_140A83044(_DWORD *a1, const char *a2, char a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __int64 result; // rax
  unsigned __int64 v9; // r8

  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    v9 = a3 & 0xF;
    if ( v9 >= 6 )
    {
      *a1 = 4;
      goto LABEL_7;
    }
    result = *((unsigned int *)&xmmword_140D4E178 + v9);
    *a1 = result;
  }
  if ( !(_DWORD)result )
    return result;
  if ( (result & 0x10) != 0 )
    *a1 = 0;
LABEL_7:
  sub_1405FDF9C("*********** Verifier Detected a Code Integrity Issue ************\n");
  sub_1405FDF9C((const char *)qword_140A7C810);
  sub_1405FDF9C((const char *)qword_140A7C880);
  if ( a2 )
    DbgPrintEx(0x65u, 0, a2, a4, a5, a6);
  sub_1405FDF9C((const char *)qword_140A7C870);
  sub_1405FDF9C((const char *)qword_140A7C810);
  return sub_1405FDF9C("*****************************************************************\n");
}
