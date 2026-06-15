/*
 * XREFs of ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800C2A7C
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180056E70 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ??1?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAA@XZ @ 0x18005E004 (--1-$unique_ptr@VCPowerReferenceManager@@U-$default_delete@VCPowerReferenceManager@@@std@@@std@@.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800C54A0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@@Z @ 0x1800C23BC (--$_Destroy_range@V-$allocator@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAXPE.c)
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800C2B50 (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     ??1CCaptureNotifier@@QEAA@XZ @ 0x180103B78 (--1CCaptureNotifier@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x180103BCC (--1CPlaybackNotifier@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x180103C20 (--1CSebNotifier@@QEAA@XZ.c)
 *     ??1CSleepStudyPowerReferenceManager@@QEAA@XZ @ 0x180103C70 (--1CSleepStudyPowerReferenceManager@@QEAA@XZ.c)
 */

void __fastcall CPowerReferenceManager::~CPowerReferenceManager(CPowerReferenceManager *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 92);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(v2, *((_QWORD *)this + 93));
    std::_Deallocate<16,0>(
      *((void **)this + 92),
      (*((_QWORD *)this + 94) - *((_QWORD *)this + 92)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 92) = 0LL;
    *((_QWORD *)this + 93) = 0LL;
    *((_QWORD *)this + 94) = 0LL;
  }
  _Mtx_destroy_in_situ((CPowerReferenceManager *)((char *)this + 656));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 81);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 608));
  CSerialWorkQueue::~CSerialWorkQueue((CPowerReferenceManager *)((char *)this + 440));
  CSleepStudyPowerReferenceManager::~CSleepStudyPowerReferenceManager((CPowerReferenceManager *)((char *)this + 408));
  CCaptureNotifier::~CCaptureNotifier((CPowerReferenceManager *)((char *)this + 312));
  CPlaybackNotifier::~CPlaybackNotifier((CPowerReferenceManager *)((char *)this + 216));
  CSebNotifier::~CSebNotifier((CPowerReferenceManager *)((char *)this + 112));
  CPdcActivationClient::~CPdcActivationClient(this);
}
