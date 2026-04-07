/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180048970
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180047CF0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180004DC8 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001BFA8 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18001DA8C (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x18001F964 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180034E90 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800365B4 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180048B6C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180048C20 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004BBEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C8BCC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this, __int64 a2)
{
  __int64 v2; // rax
  char v4; // dl
  int v5; // esi
  char v6; // bp
  unsigned __int8 v7; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int started; // eax
  unsigned int v15; // edi
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // r14d
  int v19; // eax
  unsigned int v20; // edi
  __int128 v21; // xmm0
  CTopLevelWindow *v22; // rcx
  int v23; // eax
  unsigned int v24; // edi
  int v25; // eax
  unsigned int v26; // edi
  int v27; // eax
  int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // r11
  CLivePreview *v31; // rcx
  int v32; // eax
  unsigned int v33; // ebx
  int v34; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 42);
  v4 = (*(_DWORD *)(v2 + 116) & 0x20000000) != 0;
  v5 = *(_DWORD *)(v2 + 116) & 0x1000000;
  v6 = v5 != 0;
  v7 = (*(_DWORD *)(v2 + 128) & 0x1000) != 0;
  if ( *((_BYTE *)this + 296) == v4 )
  {
    if ( (*(_DWORD *)(v2 + 116) & 0x20000000) != 0 )
      return 0LL;
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
      a2);
    if ( *((_BYTE *)this + 536) )
      return 0LL;
    if ( v6 == *((_BYTE *)this + 297) )
    {
      LOBYTE(v8) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
        v8);
      if ( v7 == *((_BYTE *)this + 298) )
        return 0LL;
    }
    v18 = 4;
    if ( v5 )
      v18 = 2;
    if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v9, v8) )
    {
      if ( v7 != *((_BYTE *)this + 298) )
        v18 = (v7 ^ 1) + 12;
    }
    *((_BYTE *)this + 297) = v6;
    *((_BYTE *)this + 298) = v7;
    if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
      return 0LL;
    v19 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this, 1u);
    v20 = v19;
    if ( v19 >= 0 )
    {
      v21 = *(_OWORD *)(*((_QWORD *)this + 42) + 48LL);
      *((_DWORD *)this + 97) = v18;
      *((_OWORD *)this + 20) = v21;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x323,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v19,
      v34);
    return v20;
  }
  else
  {
    *((_BYTE *)this + 296) = v4;
    *((_BYTE *)this + 297) = v6;
    if ( CTopLevelWindow3D::ShouldShowTransition(this) )
    {
      v11 = *((_QWORD *)this + 42);
      if ( *((_BYTE *)this + 296) )
      {
        if ( (*(_BYTE *)(v11 + 672) & 0x40) == 0 && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
        {
          if ( *((_QWORD *)this + 46) )
          {
            v27 = CTopLevelWindow3D::StopAnimation(this, v12, v13);
            if ( v27 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x2E4,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
                (const char *)(unsigned int)v27,
                v34);
          }
          started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
          v15 = started;
          if ( started < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2E6,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)started,
              v34);
            return v15;
          }
        }
      }
      else
      {
        v22 = *(CTopLevelWindow **)(v11 + 440);
        if ( (*(_BYTE *)(v11 + 675) & 8) != 0 )
        {
          v28 = CTopLevelWindow::ShowWindow(v22, 1);
          v29 = v28;
          if ( v28 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2ED,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v28,
              v34);
            return v29;
          }
          *(_BYTE *)(*((_QWORD *)this + 42) + 675LL) &= ~8u;
        }
        else
        {
          v23 = CTopLevelWindow::ShowWindow(v22, 0);
          v24 = v23;
          if ( v23 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F5,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v23,
              v34);
            return v24;
          }
          *((_BYTE *)this + 536) = 1;
          v25 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
          v26 = v25;
          if ( v25 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F7,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v25,
              v34);
            return v26;
          }
        }
      }
      v16 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
      v17 = v16;
      if ( v16 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FE,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v16,
        v34);
      return v17;
    }
    else
    {
      v30 = *((_QWORD *)this + 42);
      v31 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
      if ( *((_BYTE *)v31 + 288)
        && v30
        && CLivePreview::_IsInLivePreview(v31, *((const struct CWindowData **)this + 42)) )
      {
        return 0LL;
      }
      v32 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v30 + 440), 1);
      v33 = v32;
      if ( v32 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x304,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v32,
        v34);
      return v33;
    }
  }
}
