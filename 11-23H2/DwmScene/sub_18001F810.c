/*
 * XREFs of sub_18001F810 @ 0x18001F810
 * Callers:
 *     sub_18001EE0C @ 0x18001EE0C (sub_18001EE0C.c)
 *     sub_1800422EC @ 0x1800422EC (sub_1800422EC.c)
 *     sub_180058724 @ 0x180058724 (sub_180058724.c)
 *     sub_180059174 @ 0x180059174 (sub_180059174.c)
 *     sub_1800618AC @ 0x1800618AC (sub_1800618AC.c)
 *     sub_180064308 @ 0x180064308 (sub_180064308.c)
 *     sub_180064494 @ 0x180064494 (sub_180064494.c)
 *     sub_1800645EC @ 0x1800645EC (sub_1800645EC.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_1800DC0D8 @ 0x1800DC0D8 (sub_1800DC0D8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F810(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  result = 0LL;
  if ( a3 )
  {
    v4 = a1 - (_QWORD)a2;
    while ( *(_WORD *)((char *)a2 + v4) >= *a2 )
    {
      if ( *(_WORD *)((char *)a2 + v4) > *a2 )
        return 1LL;
      if ( a3 == 1 )
        return result;
      --a3;
      ++a2;
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}
