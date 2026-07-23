/*
 * XREFs of sub_140A635B8 @ 0x140A635B8
 * Callers:
 *     sub_140A54628 @ 0x140A54628 (sub_140A54628.c)
 *     sub_140AFA228 @ 0x140AFA228 (sub_140AFA228.c)
 * Callees:
 *     sub_1405183C0 @ 0x1405183C0 (sub_1405183C0.c)
 */

__int64 __fastcall sub_140A635B8(__int64 a1)
{
  if ( !qword_140C54C38 )
    return 3221225486LL;
  if ( !a1 )
    return 3221225485LL;
  sub_1405183C0(0, *(unsigned __int8 *)(qword_140C54C38 + 36), a1, 1);
  return 0LL;
}
