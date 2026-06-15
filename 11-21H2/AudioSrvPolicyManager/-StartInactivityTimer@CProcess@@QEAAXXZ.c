/*
 * XREFs of ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18001C5CC
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180032264 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CProcess::StartInactivityTimer(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  signed __int32 v6; // eax
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+44h] [rbp+Ch]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 320);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 8);
  v9 = v2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x26u,
      &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
      *((_DWORD *)this + 40));
  }
  if ( !*((_QWORD *)this + 45) )
  {
    v3 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CProcess *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CProcess::InactivityTimerCallback,
           this);
    *((_QWORD *)this + 45) = v3;
    if ( v3 )
    {
      do
        v6 = *((_DWORD *)this + 5);
      while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)this + 5, v6 + 1, v6) );
      v7 = -200000000;
      v8 = -1;
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)this + 45),
        &v7,
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
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, v5);
        }
        AudPolicyLogError("CProcess::StartInactivityTimer", 3290, v5);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
