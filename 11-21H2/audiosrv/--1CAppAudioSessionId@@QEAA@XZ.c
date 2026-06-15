/*
 * XREFs of ??1CAppAudioSessionId@@QEAA@XZ @ 0x18000DB78
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18001C580 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$174 @ 0x18006DD40 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$174.c)
 *     _CAudioSessionManager::OnSessionStateChanged_::_1_::dtor$14 @ 0x18006E3A0 (_CAudioSessionManager--OnSessionStateChanged_--_1_--dtor$14.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800D6154 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     _CAudioSessionInstanceId::CAudioSessionInstanceId_::_1_::dtor$1 @ 0x1800DF090 (_CAudioSessionInstanceId--CAudioSessionInstanceId_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAppAudioSessionId::~CAppAudioSessionId(CAppAudioSessionId *this)
{
  volatile signed __int32 *v2; // rdx
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rdx

  v2 = (volatile signed __int32 *)(*((_QWORD *)this + 4) - 24LL);
  if ( _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v2 + 8LL))(*(_QWORD *)v2);
  v3 = (volatile signed __int32 *)(*((_QWORD *)this + 1) - 24LL);
  if ( _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
  v4 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
}
