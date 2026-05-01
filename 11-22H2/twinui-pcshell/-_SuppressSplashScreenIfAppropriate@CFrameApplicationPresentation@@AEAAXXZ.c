/*
 * XREFs of ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18000D7F4
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x18000C760 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000B1DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindow.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18000B6DC (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D8E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x18002A37C (-SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4Sp.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x18002ACB8 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(
        CFrameApplicationPresentation *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-18h]
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
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::GetImpl'::`2'::impl,
        1u,
        v5,
        v6);
    v7 = **((_QWORD **)this + 13);
    if ( v7 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7) )
    {
      v4 = 2;
    }
    else if ( !*((_BYTE *)this + 565) )
    {
      goto LABEL_12;
    }
    v8 = CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(this);
    if ( v8 >= 0 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::SuppressSplashScreen(
        (char *)this + 224,
        *((_QWORD *)this + 76),
        *((_QWORD *)this + 16),
        v4,
        dword_18098BB44);
      return;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7AE,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v8,
      v9);
LABEL_12:
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen((char *)this + 224, 0LL);
  }
}
