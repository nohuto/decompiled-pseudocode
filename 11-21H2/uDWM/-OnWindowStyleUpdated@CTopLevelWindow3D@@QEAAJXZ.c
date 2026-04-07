/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E740
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18000D5F8 (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D62C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D6B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x1800102FC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001D7C8 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001EB10 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027570 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180037D70 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x18003AE98 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C42AC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  char v6; // cl
  int v7; // edi
  char v8; // bp
  unsigned __int8 v9; // si
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // r11
  CLivePreview *v20; // rcx
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  int started; // eax
  unsigned int v25; // edi
  int v26; // eax
  unsigned int v27; // ebx
  bool v28; // zf
  CTopLevelWindow *v29; // rcx
  int v30; // eax
  unsigned int v31; // edi
  int v32; // eax
  unsigned int v33; // edi
  int v34; // r14d
  int v35; // eax
  unsigned int v36; // edi
  __int128 v37; // xmm0
  int v38; // eax
  int v39; // eax
  unsigned int v40; // edi
  int v41; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 42);
  v6 = (*(_DWORD *)(v4 + 116) & 0x20000000) != 0;
  v7 = *(_DWORD *)(v4 + 116) & 0x1000000;
  v8 = v7 != 0;
  v9 = (*(_DWORD *)(v4 + 128) & 0x1000) != 0;
  if ( *((_BYTE *)this + 296) == v6 )
  {
    if ( (*(_DWORD *)(v4 + 116) & 0x20000000) != 0 )
      return 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::ReportUsage(
      (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_MSARTest>::GetImpl'::`2'::impl,
      1u,
      3u,
      a4);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
      1u,
      v10,
      v11);
    if ( *((_BYTE *)this + 536) )
      return 0LL;
    if ( v8 == *((_BYTE *)this + 297) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::ReportUsage(
        (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_MSARTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v15);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
        1u,
        v16,
        v17);
      if ( v9 == *((_BYTE *)this + 298) )
        return 0LL;
    }
    v34 = 4;
    if ( v7 )
      v34 = 2;
    if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v13, v12, v14) )
    {
      if ( v9 != *((_BYTE *)this + 298) )
        v34 = (v9 ^ 1) + 12;
    }
    *((_BYTE *)this + 297) = v8;
    *((_BYTE *)this + 298) = v9;
    if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
      return 0LL;
    v35 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this, 1u);
    v36 = v35;
    if ( v35 >= 0 )
    {
      v37 = *(_OWORD *)(*((_QWORD *)this + 42) + 48LL);
      *((_DWORD *)this + 97) = v34;
      *(_OWORD *)((char *)this + 316) = v37;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x354,
      (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v35);
    return v36;
  }
  else
  {
    *((_BYTE *)this + 296) = v6;
    *((_BYTE *)this + 297) = v8;
    if ( CTopLevelWindow3D::ShouldShowTransition(this) )
    {
      v23 = *((_QWORD *)this + 42);
      if ( *((_BYTE *)this + 296) )
      {
        if ( (*(_BYTE *)(v23 + 664) & 0x40) == 0 && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
        {
          if ( *((_QWORD *)this + 46) )
          {
            v38 = CTopLevelWindow3D::StopAnimation(this);
            if ( v38 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x315,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
                (const char *)(unsigned int)v38,
                v41);
          }
          started = CTopLevelWindow3D::StartAnimation((__int64)this, 3);
          v25 = started;
          if ( started < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x317,
              (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)started);
            return v25;
          }
        }
      }
      else
      {
        v28 = (*(_BYTE *)(v23 + 667) & 8) == 0;
        v29 = *(CTopLevelWindow **)(v23 + 440);
        if ( v28 )
        {
          v30 = CTopLevelWindow::ShowWindow(v29, 0);
          v31 = v30;
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x326,
              (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v30);
            return v31;
          }
          *((_BYTE *)this + 536) = 1;
          v32 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
          v33 = v32;
          if ( v32 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x328,
              (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v32);
            return v33;
          }
        }
        else
        {
          v39 = CTopLevelWindow::ShowWindow(v29, 1);
          v40 = v39;
          if ( v39 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x31E,
              (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v39);
            return v40;
          }
          *(_BYTE *)(*((_QWORD *)this + 42) + 667LL) &= ~8u;
        }
      }
      v26 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
      v27 = v26;
      if ( v26 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32F,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v26);
      return v27;
    }
    else
    {
      v19 = *((_QWORD *)this + 42);
      v20 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 55);
      if ( *((_BYTE *)v20 + 288)
        && v19
        && CLivePreview::_IsInLivePreview(v20, *((const struct CWindowData **)this + 42)) )
      {
        return 0LL;
      }
      v21 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v19 + 440), 1);
      v22 = v21;
      if ( v21 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x335,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v21);
      return v22;
    }
  }
}
