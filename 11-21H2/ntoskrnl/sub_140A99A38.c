/*
 * XREFs of sub_140A99A38 @ 0x140A99A38
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 *     sub_140A98ACC @ 0x140A98ACC (sub_140A98ACC.c)
 *     sub_140A98E28 @ 0x140A98E28 (sub_140A98E28.c)
 *     sub_140A99C74 @ 0x140A99C74 (sub_140A99C74.c)
 *     sub_140A99E14 @ 0x140A99E14 (sub_140A99E14.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 */

__int64 sub_140A99A38(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __int64 result; // rax
  unsigned __int64 v9; // rax

  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    v9 = a3 & 0xFFF;
    if ( v9 >= 0xC )
    {
      *a1 = 4;
      goto LABEL_7;
    }
    result = *(unsigned int *)&asc_140A75218[2 * v9];
    *a1 = result;
  }
  if ( !(_DWORD)result )
    return result;
  if ( (result & 0x10) != 0 )
    *a1 = 0;
LABEL_7:
  qword_140C1A940 = a3;
  qword_140C1A948 = a4;
  qword_140C1A950 = a5;
  qword_140C1A958 = a6;
  sub_1405FDF9C("************ Verifier Detected a Potential Deadlock *************\n");
  sub_1405FDF9C((const char *)qword_140A7C810);
  sub_1405FDF9C((const char *)qword_140A7C880);
  if ( a2 )
    DbgPrintEx(0x65u, 0, a2, a4, a5, a6);
  sub_1405FDF9C((const char *)qword_140A7C870);
  sub_1405FDF9C((const char *)qword_140A7C810);
  return sub_1405FDF9C("*****************************************************************\n");
}
