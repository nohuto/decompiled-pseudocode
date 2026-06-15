/*
 * XREFs of ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180023FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180024110 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004767C (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800485E0 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 */

void __fastcall CPerStreamVolumeAudioSession::NewState(CPerStreamVolumeAudioSession *this, volatile int *a2)
{
  signed __int64 v2; // rax
  enum _AudioSessionState v3; // edi
  signed __int64 v5; // rtt

  v2 = *((_QWORD *)this + 7);
  v3 = (int)a2;
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 != 0x7FFFFFFF )
    {
      v5 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v2 + 1, v2);
      if ( v5 != v2 )
        continue;
    }
    goto LABEL_4;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), a2);
LABEL_4:
  CAudioSession::NewState(this, v3);
  if ( v3 == AudioSessionStateExpired )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this);
    if ( *((_BYTE *)this + 920) )
      CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, this);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::Release(this);
}
