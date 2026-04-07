/*
 * XREFs of ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x180100BCC
 * Callers:
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180104FD8 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180013B10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z @ 0x180099CE4 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800D1A38 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?GetArrangementSheet@CWindowArrangementTransition@@AEAAPEAUIArrangementSheet@@XZ @ 0x180100A20 (-GetArrangementSheet@CWindowArrangementTransition@@AEAAPEAUIArrangementSheet@@XZ.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementStart(
        CWindowArrangementTransition *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  struct CVisual *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  float v16; // xmm6_4
  struct IArrangementSheet *ArrangementSheet; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  LONG y; // eax
  struct IArrangementSheet *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct IArrangementSheet *v30; // rax
  int v31; // eax
  CRippleEffect *v32; // rcx
  int v33; // eax
  __int64 v34; // r8
  _BYTE v36[40]; // [rsp+30h] [rbp-D8h]
  _OWORD v37[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+80h] [rbp-88h]
  RECT v39; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v40[4]; // [rsp+A0h] [rbp-68h] BYREF

  *((_BYTE *)this + 24) = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Wmasfot>::GetImpl'::`2'::impl,
    1u,
    3u,
    (__int64)a4);
  v10 = (struct CVisual *)*((_QWORD *)this + 1);
  if ( !v10 )
    goto LABEL_8;
  v11 = *((_QWORD *)v10 + 3);
  if ( v11 )
  {
    v12 = VisualCollection::Remove((VisualCollection *)(v11 + 32), v10);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x67u);
      return v13;
    }
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           *((_QWORD *)a2 + 17));
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               *((struct CVisual **)this + 1),
               *((struct CVisual **)a2 + 55),
               1u,
               1);
  v13 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x6Bu);
  }
  else
  {
LABEL_8:
    v16 = FLOAT_0_000001;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
      v16 = *(float *)&FLOAT_0_25;
    v39 = *a3;
    ArrangementSheet = CWindowArrangementTransition::GetArrangementSheet(this, (__int64)v10, v8, v9);
    (**(void (__fastcall ***)(struct IArrangementSheet *, RECT *))ArrangementSheet)(ArrangementSheet, &v39);
    v21 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 560LL);
    if ( v21 )
    {
      *(_DWORD *)v36 = 5;
      *(_OWORD *)&v36[8] = 0LL;
      *(_OWORD *)&v36[24] = _xmm;
      v37[0] = *(_OWORD *)v36;
      v37[1] = *(_OWORD *)&v36[16];
      v38 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v36[24], *(__m128d *)&v36[24]);
      v22 = CAcrylicSheet::AnimateRect(v21, &v39, v19, 0, (__int64)v37);
      v13 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x81u);
        return v13;
      }
    }
    else
    {
      y = a4->y;
      v40[0] = a4->x;
      v40[2] = v40[0];
      v40[1] = y;
      v40[3] = y;
      v25 = CWindowArrangementTransition::GetArrangementSheet(this, v18, v19, v20);
      v26 = (*(__int64 (__fastcall **)(struct IArrangementSheet *, _DWORD *, RECT *))(*(_QWORD *)v25 + 32LL))(
              v25,
              v40,
              &v39);
      v13 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x87u);
        return v13;
      }
      v30 = CWindowArrangementTransition::GetArrangementSheet(this, v27, v28, v29);
      v31 = (*(__int64 (__fastcall **)(struct IArrangementSheet *))(*(_QWORD *)v30 + 16LL))(v30);
      v13 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x88u);
        return v13;
      }
      v32 = (CRippleEffect *)*((_QWORD *)this + 1);
      if ( v32 )
      {
        if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
        {
          v33 = CRippleEffect::Start(v32, a4, v16);
          v13 = v33;
          if ( v33 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x8Cu);
            return v13;
          }
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmGlassSheetAnimation_Start,
        v23,
        1,
        (__int64)v40);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)&UdwmRippleAnimation_Start,
          v34,
          1,
          (__int64)v40);
    }
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 5);
    *((_BYTE *)this + 24) = 1;
  }
  return v13;
}
