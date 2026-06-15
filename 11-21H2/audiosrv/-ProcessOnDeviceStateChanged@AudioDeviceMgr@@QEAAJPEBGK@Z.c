/*
 * XREFs of ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x18015CE14
 * Callers:
 *     ?Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x18015CCA0 (-Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x18015C804 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x18015CCBC (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::ProcessOnDeviceStateChanged(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        int a3)
{
  unsigned int v4; // edi
  int EndpointDevice; // eax
  __int64 *SpinCount; // rcx
  struct IEndpointDevice *v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  struct IEndpointDevice *v11[3]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v11[0] = 0LL;
  v12 = 0;
  v13 = 0;
  if ( a3 == 1 || a3 == 8 )
  {
    EndpointDevice = AudioDeviceMgr::GetEndpointDevice(this, a2, &v12, v11);
    if ( EndpointDevice < 0 )
    {
LABEL_6:
      v4 = EndpointDevice;
      goto LABEL_13;
    }
    SpinCount = (__int64 *)this->SpinCount;
    v7 = v11[0];
    if ( SpinCount )
    {
      v8 = *SpinCount;
      if ( v12 )
        (*(void (__fastcall **)(__int64 *, struct IEndpointDevice *))(v8 + 24))(SpinCount, v11[0]);
      else
        (*(void (__fastcall **)(__int64 *, struct IEndpointDevice *))(v8 + 40))(SpinCount, v11[0]);
    }
    v9 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, int *))(*(_QWORD *)v7 + 32LL))(v7, &v13);
    if ( v9 < 0 )
      v4 = v9;
  }
  else
  {
    EndpointDevice = AudioDeviceMgr::ProcessOnDeviceRemoved(this, a2);
    if ( EndpointDevice < 0 )
      goto LABEL_6;
  }
LABEL_13:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v11);
  return v4;
}
