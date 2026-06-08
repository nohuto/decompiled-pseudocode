/*
 * XREFs of PepSetTimeWindow @ 0x1C000AC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PepSetTimeWindow(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 60) = a2;
}
