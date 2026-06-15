/*
 * XREFs of ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x180016270
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_::_Do_call @ 0x18001D460 (std--_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_--_Do_call.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplication::CleanupGoodFaithExemptionTimer(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 384);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 384));
  if ( *((_QWORD *)this + 53) )
  {
    v3 = *((_QWORD *)this + 53);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *((const wchar_t **)this + 3));
      v3 = *((_QWORD *)this + 53);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      v3,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      *((_QWORD *)this + 53),
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      *((_QWORD *)this + 53));
    *((_DWORD *)this + 109) = 1;
    *((_QWORD *)this + 53) = 0LL;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
