/*
 * XREFs of ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180051320
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800E3DE8 (WPP_SF_dd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManagerNotification::Invoke(__int64 a1, __int64 *a2)
{
  int MediaEvent; // ebx
  unsigned int v5; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax

  MediaEvent = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 644LL)
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 644LL) != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*a2 + 48LL))(*a2) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 48LL))(*a2);
      WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids);
    }
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
    MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), v5);
    if ( MediaEvent )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, v7);
      }
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSessionManagerNotification::Invoke", 748, MediaEvent);
    }
    else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, v8);
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(a2);
  return (unsigned int)MediaEvent;
}
