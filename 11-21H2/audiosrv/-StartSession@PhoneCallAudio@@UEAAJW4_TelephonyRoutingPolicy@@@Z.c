/*
 * XREFs of ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180130100
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800D6354 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     _lambda_725372baeb855ae858d01405b3bc3564_::operator() @ 0x18012E990 (_lambda_725372baeb855ae858d01405b3bc3564_--operator().c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18012EA80 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18012ED54 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x18012F9DC (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PhoneCallAudio::StartSession(__int64 a1, int a2)
{
  __int64 (__fastcall *v4)(struct IAudioPolicyManager *, _QWORD, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // rbx
  char v8; // r14
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  PhoneCallAudio *v13; // [rsp+20h] [rbp-20h] BYREF
  char v14; // [rsp+28h] [rbp-18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v16; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  v18 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v18);
  v5 = v4(g_PolicyManager, 0LL, &v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_13;
  }
  v7 = (_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a1 + 128) )
  {
    PhoneCallAudio::CleanupRouting((PhoneCallAudio *)(a1 - 8));
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v7 + 488LL))(*v7, 0LL);
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)(a1 + 128));
  }
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 128), v18);
  v8 = 1;
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v7 + 488LL))(*v7, v9);
  v13 = (PhoneCallAudio *)(a1 - 8);
  v14 = 1;
  *(_DWORD *)(a1 + 60) = 1;
  v10 = PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(a1 - 8, a2);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 519LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_11;
  }
  v10 = PhoneCallAudio::OnPhoneCallStarted((PhoneCallAudio *)(a1 - 8));
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 522LL;
    goto LABEL_9;
  }
  v14 = 0;
  v6 = 0;
  v8 = 0;
LABEL_11:
  if ( v8 )
  {
    v14 = 0;
    lambda_725372baeb855ae858d01405b3bc3564_::operator()(&v13);
  }
LABEL_13:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
