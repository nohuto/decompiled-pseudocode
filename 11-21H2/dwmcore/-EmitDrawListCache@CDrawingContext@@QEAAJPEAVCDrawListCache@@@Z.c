/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18008A630
 * Callers:
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180004C88 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18005BA94 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x1801B4468 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x1801B70A0 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x1801B7714 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(CDrawingContext *this, struct CDrawListCache *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  unsigned int v6; // edi
  int v7; // xmm6_4
  bool v8; // r14
  const struct CMILMatrix *TopByReference; // r15
  ClipPlaneIterator *v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  int updated; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx

  v2 = 0;
  v4 = *((_DWORD *)this + 776);
  v6 = 0;
  if ( v4 )
    v7 = *(_DWORD *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v4 - 1));
  else
    v7 = (int)FLOAT_1_0;
  if ( COERCE_FLOAT(v7 & _xmm) >= 0.0000011920929 )
  {
    v8 = 0;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 368));
    if ( *((_QWORD *)this + 419) )
    {
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(this);
      v6 = updated;
      if ( updated >= 0 )
      {
        v10 = (CDrawingContext *)((char *)this + 3360);
        v8 = *((_BYTE *)this + 3360) == 0;
        goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, updated, 0x38Cu);
    }
    else
    {
      v10 = (CDrawingContext *)((char *)this + 3360);
      while ( 1 )
      {
LABEL_6:
        if ( v8 )
        {
          v16 = ClipPlaneIterator::UpdateClippingPlanes(v10);
          v6 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x398u);
            goto LABEL_9;
          }
        }
        v11 = CDrawListCache::Render(a2, this, TopByReference);
        v6 = v11;
        if ( v11 < 0 )
          break;
        if ( !v8 || !ClipPlaneIterator::HasMoreClipPlanes(v10) )
          goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x39Eu);
    }
  }
LABEL_9:
  if ( v6 != -2003304441 )
    return v6;
  return v2;
}
