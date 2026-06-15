/*
 * XREFs of ?Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x18015CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x18015C804 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DefaultDeviceChangedWorkItem::Process(
        DefaultDeviceChangedWorkItem *this,
        struct _RTL_CRITICAL_SECTION *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  ULONG_PTR SpinCount; // rcx
  struct IEndpointDevice *v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 4);
  v4 = *((_DWORD *)this + 5);
  v6 = 0LL;
  if ( (int)AudioDeviceMgr::GetEndpointDevice(a2, *((const unsigned __int16 **)this + 1), 0LL, &v6) >= 0 )
  {
    SpinCount = a2->SpinCount;
    if ( SpinCount )
      (*(void (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, struct IEndpointDevice *))(*(_QWORD *)SpinCount + 48LL))(
        SpinCount,
        v4,
        v3,
        v6);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v6);
}
