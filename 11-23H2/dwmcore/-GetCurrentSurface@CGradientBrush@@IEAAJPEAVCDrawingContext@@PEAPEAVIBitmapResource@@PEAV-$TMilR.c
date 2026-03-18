/*
 * XREFs of ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A695C
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800A65E0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18024D5B0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x1800A5894 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x1800A6420 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentSurface(CGradientBrush *this, __int64 a2, _QWORD *a3, __int64 a4)
{
  struct CD3DDevice *v4; // rbp
  unsigned int v5; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *(struct CD3DDevice **)(a2 + 40);
  v5 = 0;
  v17[0] = &v16;
  v16 = 0LL;
  v17[1] = 0LL;
  if ( CGradientSource::FindExistingGradient(
         (CGradientBrush *)((char *)this + 88),
         v4,
         *((_BYTE *)this + 224) == 0,
         (const struct CGradientSource::RetrievalParams *)v17)
    || (v9 = CGradientBrush::Generate(this, v4, (const struct CGradientSource::RetrievalParams *)v17), v5 = v9, v9 >= 0) )
  {
    v11 = v16;
    v12 = *(_DWORD *)(v16 + 56);
    *(_DWORD *)a4 = 0;
    *(_DWORD *)(a4 + 8) = 1157627904;
    *a3 = v11;
    v13 = 0LL;
    *(float *)(a4 + 4) = (float)v12;
    *(float *)(a4 + 12) = (float)(v12 + 1);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1C9u, 0LL);
    v13 = v16;
  }
  if ( v13 )
  {
    v16 = 0LL;
    v15 = v13 + 8 + *(int *)(*(_QWORD *)(v13 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v5;
}
