/*
 * XREFs of ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x18015C804
 * Callers:
 *     ?GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIEndpointDevice@@@Z @ 0x18015C700 (-GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x18015CBF0 (-Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 *     ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x18015CE14 (-ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18004BD8C (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x18015C538 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18015C57C (-FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioDeviceMgr::GetEndpointDevice(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        int *a3,
        struct IEndpointDevice **a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  int EndpointDeviceInCollection; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v13; // [rsp+28h] [rbp-8h]
  struct IEndpointDevice *v14; // [rsp+60h] [rbp+30h] BYREF
  struct IMMDevice *v15; // [rsp+68h] [rbp+38h] BYREF

  v8 = 0;
  v14 = 0LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  if ( !a2 )
  {
    v8 = -2147024809;
    goto LABEL_18;
  }
  if ( !a4 )
  {
    v8 = -2147467261;
    goto LABEL_18;
  }
  if ( a3 )
    *a3 = 0;
  if ( (unsigned int)AudioDeviceMgr::FindEndpointDeviceInCollection((AudioDeviceMgr *)this, a2, &v14, 0LL) != -2147023728 )
  {
LABEL_14:
    if ( v14
      || (EndpointDeviceInCollection = AudioDeviceMgr::FindEndpointDeviceInCollection(
                                         (AudioDeviceMgr *)this,
                                         a2,
                                         &v14,
                                         0LL),
          EndpointDeviceInCollection >= 0) )
    {
      ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v14, a4);
    }
    else
    {
      v8 = EndpointDeviceInCollection;
    }
    goto LABEL_18;
  }
  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)this[1].DebugInfo + 40LL))(
         this[1].DebugInfo,
         a2,
         &v15);
  if ( v9 >= 0 )
  {
    v9 = AudioDeviceMgr::AddEndpointDevice((AudioDeviceMgr *)this, v15, &v14);
    if ( v9 >= 0 )
    {
      if ( a3 )
        *a3 = 1;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
      goto LABEL_14;
    }
  }
  v8 = v9;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
LABEL_18:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
  return v8;
}
