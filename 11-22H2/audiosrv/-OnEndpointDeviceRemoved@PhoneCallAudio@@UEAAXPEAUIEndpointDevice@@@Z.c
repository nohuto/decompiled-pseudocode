/*
 * XREFs of ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180003FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Release@?$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ @ 0x1800437B8 (-Release@-$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18013C0E0 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x18013D744 (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall PhoneCallAudio::OnEndpointDeviceRemoved(struct _RTL_CRITICAL_SECTION *this, struct IEndpointDevice *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v3 = this + 2;
  EnterCriticalSection(this + 2);
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)&this[1].LockCount + 24LL))(*(_QWORD *)&this[1].LockCount) )
  {
    EnterCriticalSection(v3);
    if ( LODWORD(this[1].LockSemaphore) )
    {
      ATL::CComPtrBase<IPhoneTopology>::Release(&this[1]);
      PhoneCallAudio::CleanupRouting((PhoneCallAudio *)this);
      HIDWORD(this[1].LockSemaphore) = 0;
      LODWORD(this[1].LockSemaphore) = 0;
      (*(void (__fastcall **)(HANDLE))(*(_QWORD *)this[1].OwningThread + 8LL))(this[1].OwningThread);
      PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)this, eRender, 0LL);
      PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)this, eCapture, 0LL);
    }
    LeaveCriticalSection(v3);
  }
  LeaveCriticalSection(v3);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v4);
}
