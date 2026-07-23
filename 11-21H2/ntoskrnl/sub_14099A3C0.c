/*
 * XREFs of sub_14099A3C0 @ 0x14099A3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 */

void __fastcall sub_14099A3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
  {
    sub_1402D66A8(a2 + 16);
    *(_DWORD *)(a2 + 636) |= 2u;
    sub_1402935D0(a2 + 16);
  }
}
