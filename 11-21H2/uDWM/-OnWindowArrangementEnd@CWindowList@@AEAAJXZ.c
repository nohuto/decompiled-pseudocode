/*
 * XREFs of ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180104EDC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180013B10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x180101E28 (--_GCWindowArrangementTransition@@QEAAPEAXI@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180105C50 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnWindowArrangementEnd(CWindowList *this)
{
  __int64 v2; // r9
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  CWindowArrangementTransition *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[16]; // [rsp+38h] [rbp-20h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = *((_QWORD *)this + 68);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 24) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_Wmasfot>::GetImpl'::`2'::impl,
        1u,
        3u,
        v2);
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_BYTE *)(v3 + 24) = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)&UdwmGlassSheetFadeOut_Start,
          v4,
          1,
          (__int64)v9);
    }
  }
  v5 = *((_QWORD *)this + 88);
  if ( v5 )
    *(_BYTE *)(v5 + 669) |= 0x80u;
  CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 0);
  v6 = (CWindowArrangementTransition *)*((_QWORD *)this + 68);
  if ( v6 )
  {
    CWindowArrangementTransition::`scalar deleting destructor'(v6);
    *((_QWORD *)this + 68) = 0LL;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
