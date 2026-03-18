/*
 * XREFs of NtGdiPtInRegion @ 0x1C016BC90
 * Callers:
 *     <none>
 * Callees:
 *     GrePtInRegion @ 0x1C00980D0 (GrePtInRegion.c)
 */

__int64 __fastcall NtGdiPtInRegion(HRGN a1, LONG a2, LONG a3)
{
  return GrePtInRegion(a1, a2, a3);
}
