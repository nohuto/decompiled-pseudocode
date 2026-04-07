/*
 * XREFs of ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800CF26C
 * Callers:
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CDD90 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CDEF0 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CE050 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800CEBC4 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CF0F8 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180015960 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4.c)
 */

void __fastcall CProjectionBorderManager::_EnsureCursorStateForCapture(
        CProjectionBorderManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  if ( RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)this + 7) && RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)this + 6) )
  {
    if ( *((_BYTE *)this + 576) )
    {
      EnableSoftwareCursorForScreenCapture(0LL);
      *((_BYTE *)this + 576) = 0;
    }
  }
  else if ( !*((_BYTE *)this + 576) )
  {
    EnableSoftwareCursorForScreenCapture(1LL);
    *((_BYTE *)this + 576) = 1;
  }
}
