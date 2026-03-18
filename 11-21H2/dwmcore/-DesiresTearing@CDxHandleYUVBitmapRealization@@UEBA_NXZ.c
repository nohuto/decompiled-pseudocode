/*
 * XREFs of ?DesiresTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802A5524
 * Callers:
 *     ?DesiresTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x18010C430 (-DesiresTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::DesiresTearing(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 70) & 0x800) != 0;
}
