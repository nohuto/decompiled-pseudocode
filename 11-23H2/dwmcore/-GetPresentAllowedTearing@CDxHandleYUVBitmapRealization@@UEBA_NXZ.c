/*
 * XREFs of ?GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802B3DD4
 * Callers:
 *     ?GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x180122D70 (-GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetPresentAllowedTearing(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 68) & 0x1000) != 0;
}
