/*
 * XREFs of sub_140298364 @ 0x140298364
 * Callers:
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140298364(__int64 a1, __int64 a2)
{
  if ( a2 && (*(_DWORD *)(a1 + 48) & 0x100040) == 0x100040 && (*(_QWORD *)(*(int *)(a1 + 1248) + a1 + 1232) & a2) != 0 )
    return 3221225485LL;
  else
    return 0LL;
}
