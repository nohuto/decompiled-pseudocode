/*
 * XREFs of ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180051DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180052778 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     WPP_SF_qS @ 0x1800E3F64 (WPP_SF_qS.c)
 *     WPP_SF_D @ 0x1800E9CA0 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessionControl(
        CAudioSessionManager *this,
        unsigned int a2,
        bool a3,
        struct CAudioSession *a4,
        struct CServerAudioSessionControl **a5)
{
  CAudioSessionManager *v8; // rcx
  unsigned int AudioSessionControl; // eax
  int v10; // ebx
  struct CServerAudioSessionControl *v11; // rdi
  struct CServerAudioSessionControl *v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v13[0] = 0LL;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, a2);
      v8 = WPP_GLOBAL_Control;
    }
    if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v8 + 28) & 0x40) != 0
      && *((_BYTE *)v8 + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)v8 + 2), 14LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, 0LL);
    }
  }
  AudioSessionControl = CAudioSessionManager::CreateAudioSessionControl(v8, a4, a2, a3, v13);
  v10 = AudioSessionControl;
  if ( AudioSessionControl )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_c22fced76a16385f24e46043528014d7_Traceguids,
        AudioSessionControl);
    }
    *a5 = 0LL;
    if ( v10 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessionControl", 434, v10);
  }
  else
  {
    v11 = v13[0];
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16,
        (unsigned int)&WPP_c22fced76a16385f24e46043528014d7_Traceguids,
        v13[0],
        0LL);
    }
    v13[0] = 0LL;
    *a5 = v11;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v13);
  return (unsigned int)v10;
}
