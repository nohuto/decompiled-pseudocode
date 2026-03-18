/*
 * XREFs of ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x1800E8B60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180051F78 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18008F1C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::PushTransform(CDrawingContext *this, struct CTransform *a2)
{
  const struct CMILMatrix *Matrix; // rax
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 )
    Matrix = CTransform3D::GetMatrix(a2, 0LL);
  else
    Matrix = (const struct CMILMatrix *)&CMILMatrix::Identity;
  v4 = CDrawingContext::PushTransformInternal((CDrawingContext *)((char *)this - 16), 0LL, Matrix, 1, 1);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xD0Fu, 0LL);
  return v6;
}
