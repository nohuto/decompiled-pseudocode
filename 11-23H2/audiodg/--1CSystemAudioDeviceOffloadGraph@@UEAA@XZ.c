/*
 * XREFs of ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14005AB00
 * Callers:
 *     ??1?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14005A97C (--1-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14005A9C8 (--1-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x14005AC50 (--_E-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x14005853C (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x14005AD30 (-Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph(CSystemAudioDeviceOffloadGraph *this)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  CSystemAudioDeviceOffloadGraph::Cleanup(this);
  if ( this != (CSystemAudioDeviceOffloadGraph *)-184LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  EtwEventActivityIdControl(4LL, &v2);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 59);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 58);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 57);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 56);
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  if ( *((_BYTE *)this + 440) )
  {
    *((_BYTE *)this + 440) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)this + 10);
  }
}
