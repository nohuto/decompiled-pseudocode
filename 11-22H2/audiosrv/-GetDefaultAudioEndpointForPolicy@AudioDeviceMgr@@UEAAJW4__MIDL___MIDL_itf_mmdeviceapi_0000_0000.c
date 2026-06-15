/*
 * XREFs of ?GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIEndpointDevice@@@Z @ 0x180163610
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180004D60 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180007690 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioDeviceMgr::GetDefaultAudioEndpointForPolicy(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  int EndpointDevice; // eax
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  struct IEndpointDevice *v10; // [rsp+38h] [rbp-8h] BYREF
  LPVOID pv; // [rsp+50h] [rbp+10h] BYREF

  v6 = 0;
  v10 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  EndpointDevice = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(a1 + 40) + 64LL))(
                     *(_QWORD *)(a1 + 40),
                     a2,
                     a3,
                     &v9);
  if ( EndpointDevice < 0
    || (EndpointDevice = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 40LL))(v9, &pv),
        EndpointDevice < 0)
    || (EndpointDevice = AudioDeviceMgr::GetEndpointDevice(
                           (struct _RTL_CRITICAL_SECTION *)a1,
                           (const unsigned __int16 *)pv,
                           0LL,
                           &v10),
        EndpointDevice < 0) )
  {
    v6 = EndpointDevice;
  }
  else
  {
    ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v10, a4);
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v10);
  return v6;
}
