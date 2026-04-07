/*
 * XREFs of ??$ReleaseGDIObject@PEAUHBRUSH__@@@@YAXAEAPEAUHBRUSH__@@@Z @ 0x1800E44A0
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180009670 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReleaseGDIObject<HBRUSH__ *>(void **a1)
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
