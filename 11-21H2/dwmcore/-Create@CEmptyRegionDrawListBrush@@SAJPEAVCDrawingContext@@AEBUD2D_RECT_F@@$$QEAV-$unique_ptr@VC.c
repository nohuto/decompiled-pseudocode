/*
 * XREFs of ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x1802ACA10
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180053F34 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1801158B0 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x180261C84 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1802ACC78 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Create(
        struct CDrawingContext *a1,
        struct D2D_RECT_F *a2,
        __int64 *a3,
        _QWORD *a4)
{
  struct CObjectCache *ObjectCache; // rax
  char *v9; // rbx
  int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v9 = 0LL;
  v10 = *((_DWORD *)ObjectCache + 1);
  if ( v10 )
  {
    v9 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v9;
    *((_DWORD *)ObjectCache + 1) = v10 - 1;
  }
  if ( v9 || (v9 = (char *)DefaultHeap::Alloc(0xA0uLL)) != 0LL )
  {
    *(_OWORD *)(v9 + 8) = *(_OWORD *)&_xmm;
    *(_QWORD *)v9 = &CEmptyRegionDrawListBrush::`vftable';
    v9[52] = 0;
    v9[64] = 0;
    *((_QWORD *)v9 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v13 = *a3;
    *a3 = 0LL;
    *((_QWORD *)v9 + 9) = v13;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 11) = v9 + 96;
    *((_DWORD *)v9 + 24) = 0;
    v14 = CEmptyRegionDrawListBrush::Initialize((CEmptyRegionDrawListBrush *)v9, a1, a2);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x1Du);
      CEmptyRegionDrawListBrush::`scalar deleting destructor'((void **)v9, 1);
    }
    else
    {
      *a4 = v9;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2147024882, 0x1Bu);
  }
  return v12;
}
