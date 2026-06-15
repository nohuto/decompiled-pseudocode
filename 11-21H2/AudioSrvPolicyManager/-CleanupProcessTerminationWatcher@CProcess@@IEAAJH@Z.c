/*
 * XREFs of ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x1800163A4
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x180015100 (--1CProcess@@MEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18001ECD8 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180022440 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::CleanupProcessTerminationWatcher(CProcess *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdx
  char *v6; // rbp
  DWORD LastError; // ebx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 368);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  if ( *((_QWORD *)this + 51) )
  {
    v5 = *((_QWORD *)this + 51);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *((_DWORD *)this + 40));
      v5 = *((_QWORD *)this + 51);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 48LL))(
      ThreadPool,
      v5,
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 51));
    *((_QWORD *)this + 51) = 0LL;
    if ( a2 )
    {
      v6 = (char *)*((_QWORD *)this + 19);
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v6);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 19) = 0LL;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)this);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
