/*
 * XREFs of ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18001AAA8
 * Callers:
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015FC8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Do_call @ 0x18001D5E0 (std--_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_--_Do_call.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::RemoveAudioPlaybackRestriction(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( *((_DWORD *)this + 155) == 5 )
  {
    *(_QWORD *)((char *)this + 620) = 0LL;
    *(_QWORD *)((char *)this + 628) = 0LL;
    *(_QWORD *)((char *)this + 636) = 0LL;
    *((_DWORD *)this + 161) = 1;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
