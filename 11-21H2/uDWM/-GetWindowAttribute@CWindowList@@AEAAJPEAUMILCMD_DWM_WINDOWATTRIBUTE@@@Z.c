/*
 * XREFs of ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180002E60
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x180002EF8 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseWin32kMargins@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001B8FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseWin32kMargins@@@details@wil@@QEAAX_NW4.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VailUnifiedDpi@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E5CFC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VailUnifiedDpi@@@details@wil@@QEAAX_NW4Re.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x180103C48 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180107AFC (-IsVailContainer@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::GetWindowAttribute(CWindowList *this, struct MILCMD_DWM_WINDOWATTRIBUTE *a2)
{
  __int64 v4; // rdx
  int CaptionButtonBounds; // ebx
  HWND v6; // rbp
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CaptionButtonBounds = -2147024872;
  v6 = (HWND)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 4) == 5 )
  {
    if ( *((_DWORD *)a2 + 5) == 16 )
    {
      if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6 && IsVailContainer() )
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_VailUnifiedDpi>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_VailUnifiedDpi>::GetImpl'::`2'::impl,
          0LL);
      CaptionButtonBounds = CWindowList::GetCaptionButtonBounds(this, v6, 0, (struct tagRECT *)((char *)a2 + 24));
    }
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 4) == 8 )
  {
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseWin32kMargins>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_UseWin32kMargins>::GetImpl'::`2'::impl,
      v4);
    goto LABEL_14;
  }
  if ( *((_DWORD *)a2 + 4) != 12 )
  {
LABEL_14:
    CaptionButtonBounds = -2147024809;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 5) == 20 )
  {
    CaptionButtonBounds = CWindowList::GetNcAdornmentInfoAttribute(
                            this,
                            *((HWND *)a2 + 1),
                            (struct MILCMD_DWM_WINDOWATTRIBUTE *)((char *)a2 + 24));
    if ( CaptionButtonBounds >= 0
      && *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6
      && IsVailContainer() )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VailUnifiedDpi>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_VailUnifiedDpi>::GetImpl'::`2'::impl,
        0LL);
    }
  }
LABEL_5:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return (unsigned int)CaptionButtonBounds;
}
