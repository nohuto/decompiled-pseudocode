/*
 * XREFs of _o__hypot_0 @ 0x18010181A
 * Callers:
 *     ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z @ 0x1801B6A48 (-CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x1802A00F4 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl o__hypot_0(double X, double Y)
{
  return _hypot(X, Y);
}
