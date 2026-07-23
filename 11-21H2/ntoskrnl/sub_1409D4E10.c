/*
 * XREFs of sub_1409D4E10 @ 0x1409D4E10
 * Callers:
 *     sub_1406E5AA0 @ 0x1406E5AA0 (sub_1406E5AA0.c)
 * Callees:
 *     sub_1409D7990 @ 0x1409D7990 (sub_1409D7990.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409D4E10(__int64 a1, __int64 *a2, int a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // rax

  if ( a3 != 8 )
    return 3221225990LL;
  if ( a4 && ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *a2;
  if ( (unsigned __int8)*a2 != 1 || (v5 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  result = sub_1409D7990(a1, HIDWORD(v5));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
