/*
 * XREFs of ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18012F8B0
 * Callers:
 *     ?TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z @ 0x180130630 (-TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18012EA80 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x18012F604 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1801302D0 (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::OnPhoneCallEndTimeout(PhoneCallAudio *this)
{
  __int64 v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  if ( !(unsigned int)PhoneCallAudio::IsInCall((struct _RTL_CRITICAL_SECTION *)this) )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)this + 2);
    PhoneCallAudio::CleanupRouting(this);
    *((_DWORD *)this + 19) = 2;
    PhoneCallAudio::SwitchActivePhoneCallEndpoint(this, eRender, 0LL);
    PhoneCallAudio::SwitchActivePhoneCallEndpoint(this, eCapture, 0LL);
    v2 = *((_QWORD *)this + 17);
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 488LL))(v2, 0LL);
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)this + 17);
    }
    if ( v5 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return 0LL;
}
