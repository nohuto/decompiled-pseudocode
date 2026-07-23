/*
 * XREFs of sub_1409A1160 @ 0x1409A1160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409A0CF0 @ 0x1409A0CF0 (sub_1409A0CF0.c)
 */

__int64 __fastcall sub_1409A1160(_QWORD *a1)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    sub_1409A0CF0(a1);
    return 0LL;
  }
  return result;
}
