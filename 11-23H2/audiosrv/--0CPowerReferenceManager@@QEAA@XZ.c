/*
 * XREFs of ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005889C
 * Callers:
 *     ??$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x1800585B0 (--$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPowerReferenceManager@@.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x1800399D0 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18003AD64 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180056D68 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x180058B44 (--0CSerialWorkQueue@@QEAA@XZ.c)
 *     ?Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ @ 0x180058FAC (-Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
CPowerReferenceManager *__fastcall CPowerReferenceManager::CPowerReferenceManager(CPowerReferenceManager *this)
{
  int v2; // eax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  void *v7; // [rsp+28h] [rbp-40h]
  CPowerReferenceManager *v8; // [rsp+30h] [rbp-38h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 32), 2);
  v6 = 1;
  v7 = &CPdcActivationClient::PdcTimerActivatorCallback;
  v8 = this;
  v2 = Pdcv2ActivationClientRegister(40LL, &v6, this) | 0x10000000;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CPdcActivationClient::CPdcActivationClient", 18, v2);
  *((_DWORD *)this + 28) = 0;
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 120), 2);
  *((_BYTE *)this + 200) = -1;
  *((_QWORD *)this + 26) = CreateThreadpoolTimer(
                             (PTP_TIMER_CALLBACK)lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_,
                             (char *)this + 112,
                             0LL);
  CSebNotifier::PublishSebEvent((CPowerReferenceManager *)((char *)this + 112), 0);
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 216), 2);
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 37) = v3;
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPowerReferenceManager *)((char *)this + 216));
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 312), 2);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 49) = v4;
  CCaptureNotifier::PublishCaptureAudioStatus((CPowerReferenceManager *)((char *)this + 312));
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  CSleepStudyPowerReferenceManager::Initialize((CPowerReferenceManager *)((char *)this + 408));
  CSerialWorkQueue::CSerialWorkQueue((CPowerReferenceManager *)((char *)this + 440));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 616), 0, 0);
  *((_QWORD *)this + 82) = 0LL;
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 664), 2);
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  return this;
}
