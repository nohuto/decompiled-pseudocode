/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180018C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180018DCC (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180018E0C (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x1800201D0 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800477C0 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180047980 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18004C7B0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180068896 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800984AC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x1800985FC (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18009873C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800988D4 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 */

__int64 __fastcall CAccent::UpdateLayout(CAccent *this, bool a2)
{
  int v4; // edx
  int updated; // edi
  __int64 v6; // rcx
  float v7; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // edx
  int v13; // ecx
  __m128i v14; // xmm0
  int v15; // eax
  float v16; // xmm0_4
  float SolidFillOpacity; // xmm0_4
  __int64 v18; // rcx
  char *v19; // [rsp+30h] [rbp-20h] BYREF
  float v20; // [rsp+38h] [rbp-18h]
  float v21; // [rsp+3Ch] [rbp-14h]
  __int16 v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v4 = *((_DWORD *)this + 72);
  if ( v4 == 5 )
  {
    updated = CAccent::UpdateAcrylicBackgroundBrush(this);
    if ( updated >= 0 )
      goto LABEL_7;
    v10 = 501LL;
    goto LABEL_20;
  }
  if ( v4 == 4 )
  {
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 657LL) )
      goto LABEL_4;
LABEL_17:
    updated = CAccent::_UpdateResources(this);
    if ( updated >= 0 )
      goto LABEL_7;
    v10 = 489LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  if ( v4 != 2 )
  {
    if ( v4 == 3 )
    {
      CAccent::_UpdateAccentBlurBehind(this);
      goto LABEL_7;
    }
    goto LABEL_17;
  }
LABEL_4:
  if ( v4 == 4 )
  {
    updated = CAccent::_UpdateAcrylicBlurBehind(this);
    if ( updated >= 0 )
      goto LABEL_7;
    v10 = 497LL;
    goto LABEL_20;
  }
  v11 = 0;
  v12 = *((_DWORD *)this + 159) - *((_DWORD *)this + 157);
  v13 = *((_DWORD *)this + 158) - *((_DWORD *)this + 156);
  v19 = 0LL;
  if ( v13 >= 0 )
    v11 = v13;
  v14 = _mm_cvtsi32_si128(v11);
  v15 = 0;
  LODWORD(v16) = _mm_cvtepi32_ps(v14).m128_u32[0];
  if ( v12 >= 0 )
    v15 = v12;
  v20 = v16 + 0.0;
  v21 = (float)v15 + 0.0;
  SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
  updated = CAccent::_UpdateSolidFill(v18, this, *((unsigned int *)this + 96), &v19, LODWORD(SolidFillOpacity));
  if ( updated < 0 )
  {
    v10 = 512LL;
    goto LABEL_20;
  }
LABEL_7:
  if ( (*((_BYTE *)this + 292) & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas(this);
    if ( updated < 0 )
    {
      v10 = 517LL;
      goto LABEL_20;
    }
    updated = CAccent::_UpdateBorderShadowParts(this);
    if ( updated < 0 )
    {
      v10 = 518LL;
      goto LABEL_20;
    }
    updated = CAccent::_UpdateBorderShadowForAccent(this);
    if ( updated < 0 )
    {
      v10 = 519LL;
      goto LABEL_20;
    }
  }
  updated = CCanvasVisual::UpdateLayout(this, a2);
  if ( updated < 0 )
  {
    v10 = 522LL;
    goto LABEL_20;
  }
  v6 = *((_QWORD *)this + 55);
  if ( v6 )
  {
    updated = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 96LL))(v6, (char *)this + 128);
    if ( updated < 0 )
    {
      v10 = 527LL;
      goto LABEL_20;
    }
  }
  v21 = NAN;
  v7 = *((float *)this + 20);
  v22 = 0;
  v20 = v7;
  v19 = (char *)this + 32;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v19) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 8LL * LODWORD(v21));
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 2LL);
  }
  return 0LL;
}
