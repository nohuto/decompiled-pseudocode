/*
 * XREFs of ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x180103950
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801B0B14 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CDrawingContext::GetOpacity(CDrawingContext *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 776);
  if ( v1 )
    return *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v1 - 1));
  else
    return *(float *)&FLOAT_1_0;
}
