/*
 * XREFs of ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18000DD9C
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x18000DD60 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x18000DEA8 (-SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4Sp.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18000E3AC (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000E578 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindow.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000E7A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x18000EA8C (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E8158 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(
        CFrameApplicationPresentation *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 3;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
    a2,
    a3);
  if ( *((_DWORD *)this + 56) == 1 && *((_BYTE *)this + 564) && !*((_DWORD *)this + 57) )
  {
    if ( !*((_BYTE *)this + 565) )
    {
      LOBYTE(v5) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::GetImpl'::`2'::impl,
        v5);
    }
    v6 = **((_QWORD **)this + 13);
    if ( v6 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6) )
    {
      v4 = 2;
    }
    else if ( !*((_BYTE *)this + 565) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::GetImpl'::`2'::impl,
        0LL);
LABEL_10:
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen((char *)this + 224, 0LL);
      return;
    }
    v7 = CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(this);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7AF,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v7,
        v8);
      goto LABEL_10;
    }
    CFrameApplicationPresentation::FrameSystemVisual::SuppressSplashScreen(
      (char *)this + 224,
      *((_QWORD *)this + 76),
      *((_QWORD *)this + 16),
      v4,
      dword_1807B1F44);
  }
}
