/*
 * XREFs of sub_1406567B0 @ 0x1406567B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1406567B0(__int64 a1, int a2)
{
  if ( !a1 || !*(_QWORD *)a1 )
    return 0;
  *(_DWORD *)(a1 + 8) = a2;
  return 1;
}
