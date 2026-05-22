/*
 * XREFs of ?IsGtOrEqual@DirectComposition@@YA_NNNN@Z @ 0x1800FCFDC
 * Callers:
 *     ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750 (--0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 * Callees:
 *     ?IsEqual@DirectComposition@@YA_NNNN@Z @ 0x18003227C (-IsEqual@DirectComposition@@YA_NNNN@Z.c)
 */

char __fastcall DirectComposition::IsGtOrEqual(DirectComposition *this, double a2, double a3, double a4)
{
  double v4; // xmm0_8
  bool IsEqual; // al
  char v6; // cl

  if ( v4 > a2 )
    return 1;
  IsEqual = DirectComposition::IsEqual(this, a2, a3, a4);
  v6 = 0;
  if ( IsEqual )
    return 1;
  return v6;
}
