/*
 * XREFs of sub_180050DC4 @ 0x180050DC4
 * Callers:
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 * Callees:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 */

__int64 __fastcall sub_180050DC4(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  if ( a2 != a3 )
    sub_180011BA0((void **)a1, a2, a3 - a2);
  return a1;
}
