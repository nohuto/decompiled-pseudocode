/*
 * XREFs of ??1CXvmPowerReferenceManager@@QEAA@XZ @ 0x180103CB4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@EEAAXXZ @ 0x180104AD0 (-_Destroy@-$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ @ 0x18010449C (-CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ.c)
 */

void __fastcall CXvmPowerReferenceManager::~CXvmPowerReferenceManager(CXvmPowerReferenceManager *this)
{
  if ( *((_QWORD *)this + 15) )
  {
    CXvmPowerReferenceManager::CancelDeferredPowerReferenceRelease(this);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 15));
    *((_QWORD *)this + 15) = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 16);
  _Mtx_destroy_in_situ((CXvmPowerReferenceManager *)((char *)this + 40));
}
