/*
 * XREFs of ??1CPowerReferenceManager@@QEAA@XZ @ 0x180119A1C
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180058230 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ??1?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAA@XZ @ 0x1800663D8 (--1-$unique_ptr@VCPowerReferenceManager@@U-$default_delete@VCPowerReferenceManager@@@std@@@std@@.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800F0510 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@0@@Z @ 0x1800EEBB0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAX.c)
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800EF040 (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800F0438 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ??1CCaptureNotifier@@QEAA@XZ @ 0x180119974 (--1CCaptureNotifier@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x1801199C8 (--1CPlaybackNotifier@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x180119B04 (--1CSebNotifier@@QEAA@XZ.c)
 *     ??1CSleepStudyPowerReferenceManager@@QEAA@XZ @ 0x180119B54 (--1CSleepStudyPowerReferenceManager@@QEAA@XZ.c)
 */

void __fastcall CPowerReferenceManager::~CPowerReferenceManager(CPowerReferenceManager *this)
{
  CSerialWorkQueue *v2; // rdi
  __int64 v3; // rcx

  v2 = (CPowerReferenceManager *)((char *)this + 440);
  CSerialWorkQueue::Shutdown((CPowerReferenceManager *)((char *)this + 440));
  v3 = *((_QWORD *)this + 93);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPackConfiguration const>>>(v3, *((_QWORD *)this + 94));
    std::_Deallocate<16,0>(
      *((void **)this + 93),
      (*((_QWORD *)this + 95) - *((_QWORD *)this + 93)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 93) = 0LL;
    *((_QWORD *)this + 94) = 0LL;
    *((_QWORD *)this + 95) = 0LL;
  }
  _Mtx_destroy_in_situ((CPowerReferenceManager *)((char *)this + 664));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 82);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  CSerialWorkQueue::~CSerialWorkQueue(v2);
  CSleepStudyPowerReferenceManager::~CSleepStudyPowerReferenceManager((CPowerReferenceManager *)((char *)this + 408));
  CCaptureNotifier::~CCaptureNotifier((void **)this + 39);
  CPlaybackNotifier::~CPlaybackNotifier((void **)this + 27);
  CSebNotifier::~CSebNotifier((CPowerReferenceManager *)((char *)this + 112));
  CPdcActivationClient::~CPdcActivationClient(this);
}
