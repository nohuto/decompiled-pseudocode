/*
 * XREFs of ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18015C57C
 * Callers:
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x18015C804 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x18015CCBC (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIEndpointCollection@@@Z @ 0x18004BD00 (-GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAP.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z @ 0x18004BD48 (-CopyTo@-$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18004C938 (-GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::FindEndpointDeviceInCollection(
        AudioDeviceMgr *this,
        const unsigned __int16 *a2,
        struct IEndpointDevice **a3,
        struct IEndpointCollection **a4)
{
  unsigned int v8; // ebx
  int DataFlow; // eax
  AudioDeviceMgr *v10; // rcx
  struct IEndpointCollection *v12; // [rsp+20h] [rbp-28h] BYREF
  struct IMMDevice *v13[4]; // [rsp+28h] [rbp-20h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v14; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0;
  v13[0] = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      DataFlow = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 5)
                                                                                                  + 40LL))(
                   *((_QWORD *)this + 5),
                   a2,
                   v13);
      if ( DataFlow < 0
        || (DataFlow = AudioDeviceMgr::GetDataFlow(v10, v13[0], &v14), DataFlow < 0)
        || (DataFlow = AudioDeviceMgr::GetEndpointCollection(this, v14, &v12), DataFlow < 0)
        || (DataFlow = (*(__int64 (__fastcall **)(struct IEndpointCollection *, const unsigned __int16 *, struct IEndpointDevice **))(*(_QWORD *)v12 + 48LL))(
                         v12,
                         a2,
                         a3),
            DataFlow < 0) )
      {
        v8 = DataFlow;
      }
      else if ( a4 )
      {
        ATL::CComPtrBase<IEndpointCollection>::CopyTo(&v12, a4);
      }
    }
    else
    {
      v8 = -2147467261;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v13);
  return v8;
}
