/*
 * XREFs of ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015AF0
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x1800155EC (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015FC8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800186B8 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18001AB1C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::BeginBCMStartupLatencyGracePeriod(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 440);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  v8 = v2;
  CApplication::CleanupBCMStartupLatencyGracePeriod(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
      *((const wchar_t **)this + 3));
  }
  if ( *((_QWORD *)this + 60)
    || (v3 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::BCMStartupGracePeriodExpiredCallback,
               this),
        (*((_QWORD *)this + 60) = v3) != 0LL) )
  {
    v6 = -100000000;
    v7 = -1;
    *((_DWORD *)this + 122) = 1;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(this) )
    {
      CApplication::AddCategoryOverrideToProcesses((__int64)this, 7, 1, 0);
      CApplication::RestrictAudioPlaybackToPrimaryCategories(this);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 60),
      &v6,
      0LL,
      100);
  }
  else
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, v5);
      }
      AudPolicyLogError("CApplication::BeginBCMStartupLatencyGracePeriod", 2197, v5);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
