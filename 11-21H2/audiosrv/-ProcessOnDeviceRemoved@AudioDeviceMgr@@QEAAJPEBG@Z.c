/*
 * XREFs of ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x18015CCBC
 * Callers:
 *     ?Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x18015CC80 (-Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 *     ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x18015CE14 (-ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Release@?$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ @ 0x18005A78C (-Release@-$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18015C57C (-FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioDeviceMgr::ProcessOnDeviceRemoved(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2)
{
  unsigned int v4; // edi
  int EndpointDeviceInCollection; // eax
  ULONG_PTR SpinCount; // rcx
  int v7; // eax
  ULONG_PTR v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v11; // [rsp+28h] [rbp-8h]
  int v12; // [rsp+50h] [rbp+20h] BYREF
  struct IEndpointDevice *v13; // [rsp+60h] [rbp+30h] BYREF
  struct IEndpointCollection *v14; // [rsp+68h] [rbp+38h] BYREF

  v4 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v12 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  EndpointDeviceInCollection = AudioDeviceMgr::FindEndpointDeviceInCollection((AudioDeviceMgr *)this, a2, &v13, &v14);
  if ( EndpointDeviceInCollection < 0
    || (EndpointDeviceInCollection = (*(__int64 (__fastcall **)(struct IEndpointCollection *, struct IEndpointDevice *))(*(_QWORD *)v14 + 40LL))(
                                       v14,
                                       v13),
        EndpointDeviceInCollection < 0) )
  {
    v4 = EndpointDeviceInCollection;
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
    SpinCount = this[1].SpinCount;
    if ( SpinCount )
    {
      v7 = (*(__int64 (__fastcall **)(ULONG_PTR, struct IEndpointDevice *, int *))(*(_QWORD *)SpinCount + 128LL))(
             SpinCount,
             v13,
             &v12);
      if ( v7 < 0 )
      {
        v4 = v7;
        goto LABEL_14;
      }
      if ( v12 )
        ATL::CComPtrBase<IPhoneTopology>::Release(&this[1].SpinCount);
    }
    v8 = this->SpinCount;
    if ( v8 )
      (*(void (__fastcall **)(ULONG_PTR, struct IEndpointDevice *))(*(_QWORD *)v8 + 32LL))(v8, v13);
  }
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  return v4;
}
