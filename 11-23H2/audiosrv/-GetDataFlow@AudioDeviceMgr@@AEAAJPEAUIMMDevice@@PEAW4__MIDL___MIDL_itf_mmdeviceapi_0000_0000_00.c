/*
 * XREFs of ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180026D64
 * Callers:
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180007690 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180026AD0 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::GetDataFlow(
        AudioDeviceMgr *this,
        struct IMMDevice *a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a3)
{
  int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
             a2,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v7);
      if ( v4 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *))(*(_QWORD *)v7 + 24LL))(
               v7,
               a3);
        v4 = 0;
        if ( v5 < 0 )
          v4 = v5;
      }
    }
    else
    {
      v4 = -2147467261;
    }
  }
  else
  {
    v4 = -2147024809;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
  return (unsigned int)v4;
}
