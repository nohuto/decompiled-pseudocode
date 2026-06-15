/*
 * XREFs of ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x18012F790
 * Callers:
 *     <none>
 * Callees:
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18005A700 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?Release@?$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ @ 0x18005A78C (-Release@-$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PhoneCallAudio::OnEndpointDeviceAdded(struct _RTL_CRITICAL_SECTION *this, struct IEndpointDevice *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  if ( (int)PhoneCallAudio::InitPhoneTopology((PhoneCallAudio *)this) >= 0 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      this + 2);
    ATL::CComPtrBase<IPhoneTopology>::Release(&this[1].DebugInfo);
    (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION *))(**(_QWORD **)&this[1].LockCount + 32LL))(
      *(_QWORD *)&this[1].LockCount,
      this + 1);
    if ( v4 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
