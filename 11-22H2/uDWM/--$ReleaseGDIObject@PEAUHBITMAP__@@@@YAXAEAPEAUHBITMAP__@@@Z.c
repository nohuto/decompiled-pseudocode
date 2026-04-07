/*
 * XREFs of ??$ReleaseGDIObject@PEAUHBITMAP__@@@@YAXAEAPEAUHBITMAP__@@@Z @ 0x1800B3A6C
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180009670 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReleaseGDIObject<HBITMAP__ *>(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = DeleteObject(v2);
    *a1 = 0LL;
  }
  return result;
}
