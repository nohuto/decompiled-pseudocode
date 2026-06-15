/*
 * XREFs of ?OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ @ 0x18012F968
 * Callers:
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x18012EF00 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x18012F604 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::OnPhoneCallEnded(struct _RTL_CRITICAL_SECTION *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  if ( !(unsigned int)PhoneCallAudio::IsInCall(this) )
    (**(void (__fastcall ***)(HANDLE))this[1].OwningThread)(this[1].OwningThread);
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
