/*
 * XREFs of ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18005A700
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x18005A628 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 *     ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x18012F790 (-OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ @ 0x18005A78C (-Release@-$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::InitPhoneTopology(PhoneCallAudio *this)
{
  unsigned int v2; // edi
  int v3; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v2 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &lpCriticalSection,
    (char *)this + 80);
  if ( !*((_DWORD *)this + 16) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 6) + 32LL))(
           *((_QWORD *)this + 6),
           (char *)this + 40);
    if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 120LL))((char *)this + 8), v3 < 0) )
    {
      v2 = v3;
      ATL::CComPtrBase<IPhoneTopology>::Release((char *)this + 40);
    }
    else
    {
      *((_DWORD *)this + 16) = 1;
    }
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
