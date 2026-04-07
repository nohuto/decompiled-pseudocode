/*
 * XREFs of ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EB56C
 * Callers:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800D9C28 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18009F07C (-SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVi.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800A521C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800D7618 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800E4B0C (-GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCached.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x1800EF1AC (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBlurBehindAnimationComponent(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        int a3,
        struct CStoryboard *a4,
        struct CAnimationComponent **a5)
{
  int v5; // r15d
  struct CAnimationComponent **v6; // r12
  CAnimatedTransitionVisual *v9; // rdi
  int v10; // r15d
  unsigned int v11; // ebx
  int v12; // eax
  int AccentBlurBehindBrush; // eax
  CBaseObject *v14; // r14
  CBaseObject *v15; // rsi
  struct CAnimationComponent **v16; // rax
  __int64 v17; // r15
  int v18; // eax
  __m128i v19; // xmm1
  unsigned __int64 v20; // xmm0_8
  int v21; // eax
  int v22; // edx
  CBaseObject *v24; // [rsp+30h] [rbp-30h] BYREF
  CBaseObject *v25; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v27[6]; // [rsp+48h] [rbp-18h] BYREF
  CAnimatedTransitionVisual *v28; // [rsp+A8h] [rbp+48h] BYREF
  int v29; // [rsp+B0h] [rbp+50h]
  struct CStoryboard *v30; // [rsp+B8h] [rbp+58h]

  v30 = a4;
  v29 = a3;
  v5 = *((_DWORD *)a2 + 168);
  v6 = a5;
  v28 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  *a5 = 0LL;
  v10 = v5 & 0xFFF;
  v27[0] = 1065353216;
  v27[1] = 1065353216;
  v27[2] = 1065353216;
  if ( !(unsigned int)GetDesktopID(1LL, &v26) )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      0x32Du);
    return v11;
  }
  v12 = CTransitionVisualController::_SetDesktopId(this, v26);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v12,
      0x331u);
    return v11;
  }
  AccentBlurBehindBrush = CTopLevelWindow::GetAccentBlurBehindBrush(
                            *((CTopLevelWindow **)a2 + 55),
                            &v24,
                            &v25,
                            (struct MilPoint3F *)v27);
  v11 = AccentBlurBehindBrush;
  if ( AccentBlurBehindBrush >= 0 )
  {
    v14 = v24;
    v15 = v25;
    if ( v24 && v25 )
    {
      v16 = (struct CAnimationComponent **)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                             WPF::g_pProcessHeap,
                                             144LL);
      a5 = v16;
      if ( v16 )
      {
        v17 = CAnimationComponent::CAnimationComponent((__int64)v16, *((_QWORD *)a2 + 5), v10, v29, (__int64)v30);
        if ( v17 )
        {
          v11 = CAnimatedTransitionVisual::Create(&v28);
          if ( (v11 & 0x80000000) == 0 )
          {
            v9 = v28;
            v18 = CAnimatedTransitionVisual::SetClientAreaBrush(v28, v14, v15, (struct MilPoint3F *)v27);
            v11 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                2LL,
                v18,
                0x33Cu);
LABEL_22:
              CBaseObject::Release((CBaseObject *)v17);
              goto LABEL_25;
            }
            v19 = *((__m128i *)a2 + 3);
            *((_QWORD *)v9 + 118) = 0LL;
            v20 = _mm_srli_si128(v19, 8).m128i_u64[0];
            v21 = v20 - v19.m128i_i32[0];
            if ( (int)v20 - v19.m128i_i32[0] < 0 )
              v21 = 0;
            LODWORD(a5) = v21;
            v22 = HIDWORD(v20) - v19.m128i_i32[1];
            if ( HIDWORD(v20) - v19.m128i_i32[1] < 0 )
              v22 = 0;
            HIDWORD(a5) = v22;
            *((_QWORD *)v9 + 119) = a5;
            *((_DWORD *)v9 + 184) = *((_DWORD *)v30 + 18);
            *((_DWORD *)v9 + 185) = v29;
            *((_BYTE *)v9 + 972) = CStoryboard::IsRTL();
            *(_QWORD *)(v17 + 40) = v9;
            _InterlockedIncrement((volatile signed __int32 *)v9 + 4);
            *v6 = (struct CAnimationComponent *)v17;
            _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
            v14 = v24;
            v15 = v25;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v11,
              0x33Au);
          }
          v9 = v28;
          goto LABEL_22;
        }
      }
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0x339u);
    }
    else
    {
      *v6 = 0LL;
    }
LABEL_25:
    if ( v9 )
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v9 + 8));
    goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    AccentBlurBehindBrush,
    0x333u);
  v14 = v24;
  v15 = v25;
LABEL_27:
  if ( v14 )
    CBaseObject::Release(v14);
  if ( v15 )
    CBaseObject::Release(v15);
  return v11;
}
