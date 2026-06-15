/*
 * XREFs of ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015FC8
 * Callers:
 *     ??1CApplication@@MEAA@XZ @ 0x180014F70 (--1CApplication@@MEAA@XZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015AF0 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_::_Do_call @ 0x18001D6B0 (std--_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_--_Do_call.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800186B8 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18001AAA8 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplication::CleanupBCMStartupLatencyGracePeriod(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v3; // r8
  _DWORD *v4; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 440);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  if ( *((_DWORD *)this + 122) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Eu,
        &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *((const wchar_t **)this + 3));
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 60),
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      *((_QWORD *)this + 60),
      1LL);
    *((_DWORD *)this + 122) = 0;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(this) )
    {
      CApplication::RemoveAudioPlaybackRestriction(this);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      v3 = (_QWORD *)*((_QWORD *)this + 9);
      while ( v3 )
      {
        v4 = (_DWORD *)v3[2];
        v3 = (_QWORD *)*v3;
        if ( !v4[104] && v4[119] == 7 )
        {
          v4[119] = 0;
          v4[120] = 0;
          v4[121] = 4;
        }
      }
      if ( this != (CApplication *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
