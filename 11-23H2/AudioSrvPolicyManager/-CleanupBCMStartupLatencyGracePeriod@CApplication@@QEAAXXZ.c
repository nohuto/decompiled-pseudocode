/*
 * XREFs of ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015534
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E20 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006E90 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ??1CApplication@@MEAA@XZ @ 0x180024F58 (--1CApplication@@MEAA@XZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180025BD0 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18002D674 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000EEB0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x1800153B4 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     WPP_SF_S @ 0x180023798 (WPP_SF_S.c)
 *     ?RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z @ 0x180028FDC (-RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::CleanupBCMStartupLatencyGracePeriod(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v2 = this + 11;
  EnterCriticalSection(this + 11);
  if ( this[12].LockCount )
  {
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        30LL,
        &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        this->LockSemaphore);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      this[12].DebugInfo,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, __int64))(*(_QWORD *)ThreadPool
                                                                                            + 32LL))(
      ThreadPool,
      this[12].DebugInfo,
      1LL);
    this[12].LockCount = 0;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)this) )
    {
      CApplication::RemoveAudioPlaybackRestriction((CApplication *)this);
      CApplication::RemoveCategoryOverrideFromProcesses(this);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
