/*
 * XREFs of ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180104FD8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180004E98 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180013B10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x180100BCC (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUt.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x1801034A8 (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x1801037C4 (-EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnWindowArrangementStart(
        CWindowArrangementTransition **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  struct CWindowData *WindowDataByHwnd; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( this[88]
    || (WindowDataByHwnd = CWindowList::FindWindowDataByHwnd((CWindowList *)this, *((HWND *)a2 + 1)),
        (this[88] = WindowDataByHwnd) != 0LL) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_Wmasfot>::GetImpl'::`2'::impl,
      1u,
      3u,
      v5);
    v7 = CWindowList::EnsureAcrylicSheet((CWindowList *)this);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v8 = CWindowList::EnsureWindowArrangementTransition((CWindowList *)this);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v9 = CWindowArrangementTransition::OnWindowArrangementStart(
               this[68],
               this[88],
               (const struct tagRECT *)a2 + 1,
               (const struct tagPOINT *)a2 + 4);
        v4 = v9;
        if ( v9 >= 0 )
          *((_BYTE *)this[88] + 669) |= 0x40u;
        else
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1E2Fu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1E2Eu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1E1Au);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v4;
}
