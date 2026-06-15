/*
 * XREFs of ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18004BD8C
 * Callers:
 *     ?EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ @ 0x18004B9A4 (-EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x18015C804 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIEndpointCollection@@@Z @ 0x18004BD00 (-GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAP.c)
 *     ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18004BE68 (-CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x18004C160 (-CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z.c)
 *     ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18004C938 (-GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x18015C538 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::AddEndpointDevice(
        AudioDeviceMgr *this,
        struct IMMDevice *a2,
        struct IEndpointDevice **a3)
{
  unsigned int v6; // ebx
  int DataFlow; // eax
  AudioDeviceMgr *v8; // rcx
  struct IEndpointDevice *v10; // [rsp+20h] [rbp-10h] BYREF
  struct IEndpointCollection *v11; // [rsp+28h] [rbp-8h] BYREF
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v12; // [rsp+58h] [rbp+28h] BYREF
  int v13; // [rsp+68h] [rbp+38h] BYREF

  v6 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    DataFlow = EndpointDevice::CreateInstance(a2, &v10);
    if ( DataFlow < 0
      || (DataFlow = AudioDeviceMgr::GetDataFlow(v8, a2, &v12), DataFlow < 0)
      || (DataFlow = AudioDeviceMgr::GetEndpointCollection(this, v12, &v11), DataFlow < 0)
      || (DataFlow = (*(__int64 (__fastcall **)(struct IEndpointCollection *, struct IEndpointDevice *))(*(_QWORD *)v11 + 32LL))(
                       v11,
                       v10),
          DataFlow < 0)
      || (DataFlow = AudioDeviceMgr::CreatePhoneTopology(this, a2, &v13), DataFlow < 0) )
    {
      v6 = DataFlow;
    }
    else if ( a3 )
    {
      ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v10, a3);
    }
  }
  else
  {
    v6 = -2147024809;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  return v6;
}
