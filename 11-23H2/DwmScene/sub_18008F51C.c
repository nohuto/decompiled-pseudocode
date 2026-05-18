/*
 * XREFs of sub_18008F51C @ 0x18008F51C
 * Callers:
 *     sub_18008F058 @ 0x18008F058 (sub_18008F058.c)
 *     sub_18008F230 @ 0x18008F230 (sub_18008F230.c)
 *     sub_18008F340 @ 0x18008F340 (sub_18008F340.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008F51C(__int64 a1, __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 1065353216;
    a1 += 16LL;
  }
  return a1;
}
