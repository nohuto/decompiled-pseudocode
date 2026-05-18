/*
 * XREFs of sub_180060C30 @ 0x180060C30
 * Callers:
 *     sub_180060A6C @ 0x180060A6C (sub_180060A6C.c)
 *     sub_180062BE0 @ 0x180062BE0 (sub_180062BE0.c)
 * Callees:
 *     sub_180060694 @ 0x180060694 (sub_180060694.c)
 */

__int64 __fastcall sub_180060C30(__int64 a1, __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *(_DWORD *)(a1 + 1) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 7) = 0;
    *(_BYTE *)a1 = 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    a1 += 48LL;
  }
  sub_180060694(a1, a1);
  return a1;
}
