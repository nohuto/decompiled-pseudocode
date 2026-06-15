/*
 * XREFs of ?Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x1800075E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180007690 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall DefaultDeviceChangedWorkItem::Process(DefaultDeviceChangedWorkItem *this, struct AudioDeviceMgr *a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ebp
  int EndpointDevice; // eax
  struct IEndpointDevice *v6; // rbx
  __int64 v7; // rcx
  struct IEndpointDevice *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 4);
  v4 = *((_DWORD *)this + 5);
  v8 = 0LL;
  EndpointDevice = AudioDeviceMgr::GetEndpointDevice(a2, *((const unsigned __int16 **)this + 1), 0LL, &v8);
  v6 = v8;
  if ( EndpointDevice >= 0 )
  {
    v7 = *((_QWORD *)a2 + 4);
    if ( v7 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, struct IEndpointDevice *))(*(_QWORD *)v7 + 48LL))(v7, v4, v3, v8);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v6 + 16LL))(v6);
}
