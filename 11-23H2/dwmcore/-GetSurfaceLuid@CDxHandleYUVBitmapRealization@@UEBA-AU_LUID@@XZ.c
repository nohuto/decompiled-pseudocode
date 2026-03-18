/*
 * XREFs of ?GetSurfaceLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x180108CFC
 * Callers:
 *     ?GetSurfaceLuid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x180122E90 (-GetSurfaceLuid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDxHandleYUVBitmapRealization::GetSurfaceLuid(CDxHandleYUVBitmapRealization *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this - 420);
  return (struct _LUID)a2;
}
