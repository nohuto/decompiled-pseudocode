/*
 * XREFs of ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180005DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18004371C (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?Release@?$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ @ 0x1800437B8 (-Release@-$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PhoneCallAudio::OnEndpointDeviceAdded(PhoneCallAudio *this, struct IEndpointDevice *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  if ( (int)PhoneCallAudio::InitPhoneTopology(this) >= 0 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      &lpCriticalSection,
      (char *)this + 80);
    ATL::CComPtrBase<IPhoneTopology>::Release((char *)this + 40);
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6), (char *)this + 40);
    if ( v4 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
