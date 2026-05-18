/*
 * XREFs of sub_180050D08 @ 0x180050D08
 * Callers:
 *     sub_180087564 @ 0x180087564 (sub_180087564.c)
 *     sub_1800D8400 @ 0x1800D8400 (sub_1800D8400.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180050D08(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0LL;
  result = a1[1];
  a1[1] = 0LL;
  if ( result )
    return sub_180010530(result);
  return result;
}
