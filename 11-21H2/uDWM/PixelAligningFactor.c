/*
 * XREFs of PixelAligningFactor @ 0x1801050FC
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PixelAligningFactor(__int64 a1, int a2, double *a3, double *a4)
{
  double v4; // xmm0_8
  double v7; // xmm6_8
  double v8; // xmm0_8
  float v9; // xmm2_4
  double v10; // xmm2_8

  v7 = (double)a2 * v4;
  v8 = _o_modf(a1, a3);
  v9 = v8;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - 0.0) & _xmm) <= 0.0000011920929 )
  {
    v10 = v8;
  }
  else
  {
    if ( v8 > 0.4900000095367432 )
      *a3 = *a3 + 1.0;
    v10 = 1.0 - v8;
  }
  *a4 = v10 / v7;
}
