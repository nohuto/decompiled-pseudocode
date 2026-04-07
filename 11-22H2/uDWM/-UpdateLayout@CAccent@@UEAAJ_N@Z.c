/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800404D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000528C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18001C2D4 (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180041510 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x1800419E0 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x180042084 (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800420C0 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18006B634 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800A183C (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800A1AC8 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800A1C00 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 */

__int64 __fastcall CAccent::UpdateLayout(struct CRenderDataVisual **this, bool a2)
{
  unsigned int v4; // eax
  int v5; // edx
  int v6; // ecx
  __m128i v7; // xmm0
  int v8; // eax
  float v9; // xmm0_4
  float SolidFillOpacity; // xmm0_4
  int updated; // edi
  struct CRenderDataVisual *v12; // rcx
  float v13; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-30h]
  char *v18; // [rsp+30h] [rbp-20h] BYREF
  float v19; // [rsp+38h] [rbp-18h]
  float v20; // [rsp+3Ch] [rbp-14h]
  __int16 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( !CAccent::_AnyTransparentBackground((CAccent *)this) )
  {
    updated = CAccent::_UpdateResources(this);
    if ( updated >= 0 )
      goto LABEL_8;
    v16 = 412LL;
    goto LABEL_17;
  }
  if ( (unsigned int)(*((_DWORD *)this + 72) - 3) <= 1 )
  {
    updated = CAccent::_UpdateAcrylicBlurBehind((CAccent *)this);
    if ( updated >= 0 )
      goto LABEL_8;
    v16 = 416LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)updated,
      v17);
    return (unsigned int)updated;
  }
  v4 = 0;
  v5 = *((_DWORD *)this + 149) - *((_DWORD *)this + 147);
  v6 = *((_DWORD *)this + 148) - *((_DWORD *)this + 146);
  v18 = 0LL;
  if ( v6 >= 0 )
    v4 = v6;
  v7 = _mm_cvtsi32_si128(v4);
  v8 = 0;
  LODWORD(v9) = _mm_cvtepi32_ps(v7).m128_u32[0];
  if ( v5 >= 0 )
    v8 = v5;
  v19 = v9 + 0.0;
  v20 = (float)v8 + 0.0;
  SolidFillOpacity = CAccent::_GetSolidFillOpacity((CAccent *)this);
  updated = CAccent::_UpdateSolidFill(this, this, *((unsigned int *)this + 90), &v18, LODWORD(SolidFillOpacity));
  if ( updated < 0 )
  {
    v16 = 426LL;
    goto LABEL_17;
  }
LABEL_8:
  if ( (*((_BYTE *)this + 292) & 0xE0) == 0 )
    goto LABEL_9;
  updated = CAccent::_EnsureBorderShadowAtlas((CAccent *)this);
  if ( updated < 0 )
  {
    v16 = 431LL;
    goto LABEL_17;
  }
  updated = CAccent::_UpdateBorderShadowParts((CAccent *)this);
  if ( updated < 0 )
  {
    v16 = 432LL;
    goto LABEL_17;
  }
  updated = CAccent::_UpdateBorderShadowForAccent((CAccent *)this);
  if ( updated < 0 )
  {
    v16 = 433LL;
    goto LABEL_17;
  }
LABEL_9:
  updated = CCanvasVisual::UpdateLayout((CCanvasVisual *)this, a2);
  if ( updated < 0 )
  {
    v16 = 436LL;
    goto LABEL_17;
  }
  v12 = this[50];
  if ( v12 )
  {
    updated = (*(__int64 (__fastcall **)(struct CRenderDataVisual *, char *))(*(_QWORD *)v12 + 104LL))(
                v12,
                (char *)this + 128);
    if ( updated < 0 )
    {
      v16 = 441LL;
      goto LABEL_17;
    }
  }
  v20 = NAN;
  v13 = *((float *)this + 20);
  v21 = 0;
  v19 = v13;
  v18 = (char *)(this + 4);
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v18) )
  {
    v15 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 8LL * LODWORD(v20));
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, 2LL);
  }
  return 0LL;
}
