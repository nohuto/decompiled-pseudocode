/*
 * XREFs of ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x18001B810
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001B9FC (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18002A830 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x1800307B0 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CFCE0 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D0420 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x1800E5E54 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E6720 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseWin32kMargins@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001B8FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseWin32kMargins@@@details@wil@@QEAAX_NW4.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180031960 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?RoundToNearestInt@@YAHN@Z @ 0x180069F9E (-RoundToNearestInt@@YAHN@Z.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800E4638 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1800E6664 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 */

void __fastcall CTopLevelWindow::GetFrameMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  struct _MARGINS *v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  struct _MARGINS v7; // xmm0
  double v8; // xmm6_8
  int cyBottomHeight; // esi
  int cyTopHeight; // r14d
  int cxRightWidth; // r15d
  int cxLeftWidth; // r12d
  volatile int v13; // ecx
  struct _MARGINS v14; // [rsp+68h] [rbp-69h] BYREF
  CHAR OutputString[112]; // [rsp+78h] [rbp-59h] BYREF

  v2 = (struct _MARGINS *)*((_QWORD *)this + 87);
  if ( v2 )
  {
    *a2 = *v2;
  }
  else if ( CDesktopManager::IsHighContrastMode() )
  {
    *a2 = 0LL;
  }
  else
  {
    LOBYTE(v5) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseWin32kMargins>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_UseWin32kMargins>::GetImpl'::`2'::impl,
      v5);
    v6 = *((_QWORD *)this + 94);
    v7 = *(struct _MARGINS *)(v6 + 80);
    v8 = *(double *)(v6 + 336);
    v14 = v7;
    if ( v8 == 1.0 )
    {
      cyBottomHeight = v14.cyBottomHeight;
      cyTopHeight = v14.cyTopHeight;
      cxRightWidth = v14.cxRightWidth;
      cxLeftWidth = v14.cxLeftWidth;
    }
    else
    {
      cxLeftWidth = RoundToNearestInt((double)v14.cxLeftWidth * v8);
      v14.cxLeftWidth = cxLeftWidth;
      cxRightWidth = RoundToNearestInt((double)v14.cxRightWidth * v8);
      v14.cxRightWidth = cxRightWidth;
      cyTopHeight = RoundToNearestInt((double)v14.cyTopHeight * v8);
      v14.cyTopHeight = cyTopHeight;
      v14.cyBottomHeight = RoundToNearestInt((double)v14.cyBottomHeight * v8);
      cyBottomHeight = v14.cyBottomHeight;
      v7 = v14;
    }
    v13 = g_fTestFrameMargins;
    *a2 = v7;
    if ( v13 )
    {
      CTopLevelWindow::ComputeWindowFrameMargins(this, &v14);
      if ( cxLeftWidth != v14.cxLeftWidth
        || cxRightWidth != v14.cxRightWidth
        || cyTopHeight != v14.cyTopHeight
        || cyBottomHeight != v14.cyBottomHeight )
      {
        CTopLevelWindow::ComputeWindowFrameMargins(this, &v14);
        StringCchPrintfA(
          OutputString,
          0x6EuLL,
          "Mismatch: %08x New:{ %6d, %6d, %6d, %6d } Old:{ %6d, %6d, %6d, %6d }\r\n",
          *((_DWORD *)this + 190),
          cxLeftWidth,
          cyTopHeight,
          cxRightWidth,
          cyBottomHeight,
          v14.cxLeftWidth,
          v14.cyTopHeight,
          v14.cxRightWidth,
          v14.cyBottomHeight);
        OutputDebugStringA(OutputString);
      }
    }
  }
}
