/*
 * XREFs of ?GetWorldTransform4x4@CDrawingContext@@UEBAXPEAUD2D_MATRIX_4X4_F@@@Z @ 0x1801B69E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800D0874 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetD2D1Matrix4x4@CMILMatrix@@QEBA?AUD2D_MATRIX_4X4_F@@XZ @ 0x18026FC1C (-GetD2D1Matrix4x4@CMILMatrix@@QEBA-AUD2D_MATRIX_4X4_F@@XZ.c)
 */

void __fastcall CDrawingContext::GetWorldTransform4x4(CDrawingContext *this, struct D2D_MATRIX_4X4_F *a2)
{
  CMILMatrix *TopByReference; // rax
  struct D2D_MATRIX_4X4_F *D2D1Matrix4x4; // rax
  struct D2D_MATRIX_4X4_F *v4; // r8
  D2D_MATRIX_4X4_F v5; // [rsp+20h] [rbp-48h] BYREF

  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 376));
  D2D1Matrix4x4 = CMILMatrix::GetD2D1Matrix4x4(TopByReference, &v5);
  *v4 = *D2D1Matrix4x4;
}
