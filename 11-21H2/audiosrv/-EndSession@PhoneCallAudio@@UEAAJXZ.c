/*
 * XREFs of ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x18012EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ @ 0x18012F968 (-OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1801302D0 (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneCallAudio::EndSession(PhoneCallAudio *this)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(struct IAudioPolicyManager *, _QWORD, __int64 *); // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
  if ( !*((_QWORD *)this + 16) )
  {
    v2 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_14;
  }
  v13 = 0LL;
  v3 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v13);
  v4 = v3(g_PolicyManager, 0LL, &v13);
  v2 = v4;
  if ( v4 < 0 )
  {
    v5 = 537LL;
LABEL_10:
    v8 = (unsigned int)v4;
    goto LABEL_11;
  }
  v6 = *((_QWORD *)this + 16);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6) == v7 )
  {
    if ( !*((_DWORD *)this + 15)
      || (*((_DWORD *)this + 15) = 0,
          v4 = PhoneCallAudio::OnPhoneCallEnded((PhoneCallAudio *)((char *)this - 8)),
          v2 = v4,
          v4 >= 0) )
    {
      PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)((char *)this - 8), eRender, 0LL);
      PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)((char *)this - 8), eCapture, 0LL);
      v2 = 0;
      goto LABEL_13;
    }
    v5 = 546LL;
    goto LABEL_10;
  }
  v2 = -2147418113;
  v8 = 2147549183LL;
  v5 = 538LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
    (const char *)v8);
LABEL_13:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
LABEL_14:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
