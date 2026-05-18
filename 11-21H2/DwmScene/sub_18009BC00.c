/*
 * XREFs of sub_18009BC00 @ 0x18009BC00
 * Callers:
 *     sub_18009BC24 @ 0x18009BC24 (sub_18009BC24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009BC00(__int64 a1, __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    a1 += 12LL;
  }
  return a1;
}
