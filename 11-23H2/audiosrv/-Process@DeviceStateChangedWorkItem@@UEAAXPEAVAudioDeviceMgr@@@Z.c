/*
 * XREFs of ?Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x180007A10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180007690 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x180007AF0 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall DeviceStateChangedWorkItem::Process(DeviceStateChangedWorkItem *this, struct _RTL_CRITICAL_SECTION *a2)
{
  const unsigned __int16 *v3; // rdx
  struct IEndpointDevice *v4; // rbx
  int EndpointDevice; // eax
  __int64 *SpinCount; // rcx
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+40h] [rbp+18h] BYREF
  struct IEndpointDevice *v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = (const unsigned __int16 *)*((_QWORD *)this + 1);
  v4 = 0LL;
  v10 = 0LL;
  v8 = 0;
  v9 = 0;
  if ( *((_DWORD *)this + 4) == 8 || *((_DWORD *)this + 4) == 1 )
  {
    EndpointDevice = AudioDeviceMgr::GetEndpointDevice(a2, v3, &v8, &v10);
    v4 = v10;
    if ( EndpointDevice >= 0 )
    {
      SpinCount = (__int64 *)a2->SpinCount;
      if ( SpinCount )
      {
        v7 = *SpinCount;
        if ( v8 )
          (*(void (__fastcall **)(__int64 *, struct IEndpointDevice *))(v7 + 24))(SpinCount, v10);
        else
          (*(void (__fastcall **)(__int64 *, struct IEndpointDevice *))(v7 + 40))(SpinCount, v10);
      }
      (*(void (__fastcall **)(struct IEndpointDevice *, int *))(*(_QWORD *)v4 + 32LL))(v4, &v9);
    }
  }
  else
  {
    AudioDeviceMgr::ProcessOnDeviceRemoved((AudioDeviceMgr *)a2, v3);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v4 + 16LL))(v4);
}
