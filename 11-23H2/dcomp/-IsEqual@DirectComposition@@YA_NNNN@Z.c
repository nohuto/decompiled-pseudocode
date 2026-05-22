/*
 * XREFs of ?IsEqual@DirectComposition@@YA_NNNN@Z @ 0x18003227C
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750 (--0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ?IsGtOrEqual@DirectComposition@@YA_NNNN@Z @ 0x1800FCFDC (-IsGtOrEqual@DirectComposition@@YA_NNNN@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::IsEqual(DirectComposition *this, double a2, double a3, double a4)
{
  double v4; // xmm0_8
  double v5; // xmm0_8

  if ( v4 > a2 )
    v5 = v4 - a2;
  else
    v5 = a2 - v4;
  return a3 >= v5;
}
