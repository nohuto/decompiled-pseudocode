/*
 * XREFs of ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18012FD1C
 * Callers:
 *     ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x18012F820 (-OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ @ 0x18005A78C (-Release@-$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18012EA80 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1801302D0 (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::ReleasePhoneTopology(struct _RTL_CRITICAL_SECTION *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  if ( LODWORD(this[1].LockSemaphore) )
  {
    ATL::CComPtrBase<IPhoneTopology>::Release(&this[1].DebugInfo);
    PhoneCallAudio::CleanupRouting((PhoneCallAudio *)this);
    HIDWORD(this[1].LockSemaphore) = 0;
    LODWORD(this[1].LockSemaphore) = 0;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)this[1].OwningThread + 8LL))(this[1].OwningThread);
    PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)this, eRender, 0LL);
    PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)this, eCapture, 0LL);
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
