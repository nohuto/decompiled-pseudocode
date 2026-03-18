/*
 * XREFs of ?CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801C211C
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C2FEC (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::CalcVailAlphaMode(CRemoteAppRenderTarget *this)
{
  __int64 v1; // rax
  float *v2; // rcx
  __int64 v3; // rdx

  if ( *((_DWORD *)this + 29) == 1 )
    return 1LL;
  v1 = *((_QWORD *)this + 12);
  v2 = (float *)(v1 + 72);
  if ( !*(_QWORD *)(v1 + 64) )
    v2 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v2) )
    return 1LL;
  else
    return *(unsigned int *)(v3 + 116);
}
