/*
 * XREFs of _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x1804CB70C
 * Callers:
 *     ??$LambdaCustomPaintProc@V_lambda_6388d5cf85f46d09280dec8197538f8a_@@PEAUID2D1DeviceContext@@@@YAXPEAUID2D1DeviceContext@@AEBUtagSIZE@@_J@Z @ 0x1804CB5C0 (--$LambdaCustomPaintProc@V_lambda_6388d5cf85f46d09280dec8197538f8a_@@PEAUID2D1DeviceContext@@@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x1804B81D4 (-ConvertColor@D2DUtil@@YA-AU_D3DCOLORVALUE@@KM@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1804B84AC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804C19A4 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?DrawInsetRect@MultitaskingViewUtils@@YAXPEAUID2D1DeviceContext@@AEAUD2D_RECT_F@@PEAUID2D1SolidColorBrush@@H@Z @ 0x1804C7A70 (-DrawInsetRect@MultitaskingViewUtils@@YAXPEAUID2D1DeviceContext@@AEAUD2D_RECT_F@@PEAUID2D1SolidC.c)
 *     ??$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphButtonStateMetrics@@AEAU1@00@Z @ 0x1804CB5D8 (--$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphB.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6388d5cf85f46d09280dec8197538f8a_::operator()(
        __int64 *a1,
        MultitaskingViewUtils *a2,
        __int64 a3,
        float a4)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 StateBased; // rax
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  int v11; // eax
  float v12; // xmm0_4
  unsigned int Color; // eax
  float v14; // xmm0_4
  unsigned int v15; // eax
  unsigned int v16; // eax
  struct D2D_RECT_F *v18; // [rsp+58h] [rbp-29h] BYREF
  __int128 v19; // [rsp+60h] [rbp-21h] BYREF
  __int64 v20; // [rsp+70h] [rbp-11h] BYREF
  int v21; // [rsp+78h] [rbp-9h]
  struct _D3DCOLORVALUE v22; // [rsp+80h] [rbp-1h] BYREF
  __int128 v23; // [rsp+90h] [rbp+Fh] BYREF
  __m128i v24; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v24.m128i_i64[0] = 0LL;
  *(float *)&v24.m128i_i32[2] = (float)(int)a3;
  *(float *)&v24.m128i_i32[3] = (float)SHIDWORD(a3);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  v23 = _xmm;
  v6 = (*(__int64 (__fastcall **)(MultitaskingViewUtils *, __int128 *, _QWORD, struct D2D_RECT_F **))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v23,
         0LL,
         &v18);
  if ( v6 >= 0 )
  {
    v7 = *a1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 216) + 40LL))(v7 + 216) )
    {
      StateBased = CMultitaskingViewButtonElement::_GetStateBasedValue<GlyphButtonStateMetrics>(
                     v7,
                     v7 + 252,
                     v7 + 280,
                     v7 + 308);
      v9 = *(_OWORD *)StateBased;
      v10 = *(_QWORD *)(StateBased + 16);
      v11 = *(_DWORD *)(StateBased + 24);
    }
    else
    {
      v9 = *(_OWORD *)(v7 + 336);
      v10 = *(_QWORD *)(v7 + 352);
      v11 = *(_DWORD *)(v7 + 360);
    }
    v21 = v11;
    v20 = v10;
    v19 = v9;
    v12 = HighContrastAwareOpacity<float>::operator float((float *)&v19 + 2);
    Color = CImmersiveColor::GetColor(DWORD1(v19));
    v23 = *(_OWORD *)&D2DUtil::ConvertColor(&v22, (struct _D3DCOLORVALUE *)Color, v12, a4)->r;
    (*(void (__fastcall **)(struct D2D_RECT_F *, __int128 *))(*(_QWORD *)&v18->left + 64LL))(v18, &v23);
    (*(void (__fastcall **)(MultitaskingViewUtils *, __m128i *, struct D2D_RECT_F *))(*(_QWORD *)a2 + 136LL))(
      a2,
      &v24,
      v18);
    v14 = HighContrastAwareOpacity<float>::operator float((float *)&v20 + 1);
    v15 = CImmersiveColor::GetColor(v20);
    v23 = *(_OWORD *)&D2DUtil::ConvertColor(&v22, (struct _D3DCOLORVALUE *)v15, v14, a4)->r;
    (*(void (__fastcall **)(struct D2D_RECT_F *, __int128 *))(*(_QWORD *)&v18->left + 64LL))(v18, &v23);
    (*(void (__fastcall **)(MultitaskingViewUtils *, __int64, __int64, _QWORD, __m128i *, struct D2D_RECT_F *, _DWORD, _DWORD))(*(_QWORD *)a2 + 216LL))(
      a2,
      v7 + 232,
      1LL,
      *(_QWORD *)(v7 + 368),
      &v24,
      v18,
      0,
      0);
    v16 = CImmersiveColor::GetColor(v19);
    if ( *(_DWORD *)(v7 + 244) && HIBYTE(v16) )
    {
      v23 = *(_OWORD *)&D2DUtil::ConvertColor(&v22, (struct _D3DCOLORVALUE *)v16, (float)HIBYTE(v16) / 255.0, a4)->r;
      (*(void (__fastcall **)(struct D2D_RECT_F *, __int128 *))(*(_QWORD *)&v18->left + 64LL))(v18, &v23);
      MultitaskingViewUtils::DrawInsetRect(a2, &v24, v18, (struct ID2D1SolidColorBrush *)*(unsigned int *)(v7 + 244));
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA3,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\glyphbuttonelement.cpp",
      (const char *)(unsigned int)v6);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
}
