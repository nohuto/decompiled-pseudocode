/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x1406DF660
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406F3FDC (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(int a1, int a2, int a3, int a4, __int64 a5)
{
  return MiMapViewInSystemSpace(a1, a2, a3, a4, a5, 0LL);
}
