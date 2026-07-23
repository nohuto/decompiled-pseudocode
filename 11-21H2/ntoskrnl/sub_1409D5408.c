/*
 * XREFs of sub_1409D5408 @ 0x1409D5408
 * Callers:
 *     sub_1406E5AA0 @ 0x1406E5AA0 (sub_1406E5AA0.c)
 * Callees:
 *     sub_1409D82D4 @ 0x1409D82D4 (sub_1409D82D4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409D5408(__int64 a1, __int128 *a2, int a3, char a4)
{
  __int128 v5; // [rsp+20h] [rbp-18h]

  if ( a3 != 16 )
    return 3221225990LL;
  if ( a4 && ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *a2;
  if ( (unsigned __int8)*a2 != 1 || (*(_QWORD *)a2 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  if ( SDWORD2(v5) < 2 )
    return sub_1409D82D4(a1, DWORD1(v5), HIDWORD(*((_QWORD *)&v5 + 1)), DWORD2(v5));
  return 3221225474LL;
}
