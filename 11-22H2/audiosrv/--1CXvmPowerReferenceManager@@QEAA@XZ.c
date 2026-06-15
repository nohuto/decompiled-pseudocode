/*
 * XREFs of ??1CXvmPowerReferenceManager@@QEAA@XZ @ 0x180119C04
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@EEAAXXZ @ 0x18011A8C0 (-_Destroy@-$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ @ 0x18011A3EC (-CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ.c)
 */

void __fastcall CXvmPowerReferenceManager::~CXvmPowerReferenceManager(CXvmPowerReferenceManager *this)
{
  if ( *((_QWORD *)this + 15) )
  {
    CXvmPowerReferenceManager::CancelDeferredPowerReferenceRelease(this);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 15));
    *((_QWORD *)this + 15) = 0LL;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 17);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 16);
  _Mtx_destroy_in_situ((CXvmPowerReferenceManager *)((char *)this + 40));
}
