/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x1407E0FE0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1406AD6D4 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(__int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 *a4, __int64 a5)
{
  return MiMapViewInSystemSpace(a1, a2, a3, a4, a5, 0LL);
}
