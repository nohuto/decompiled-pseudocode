/*
 * XREFs of sub_18009BD10 @ 0x18009BD10
 * Callers:
 *     sub_1800D71F0 @ 0x1800D71F0 (sub_1800D71F0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18009BD10(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 )
    return 0;
  *(_DWORD *)(a1 + 96) = a3;
  return 1;
}
