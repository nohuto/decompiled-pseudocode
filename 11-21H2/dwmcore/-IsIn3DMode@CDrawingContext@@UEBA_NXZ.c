/*
 * XREFs of ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800D2D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsIn3DMode(CDrawingContext *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 94);
  result = 0;
  if ( v1 )
    return *(_BYTE *)((unsigned int)(v1 - 1) + *((_QWORD *)this + 49));
  return result;
}
