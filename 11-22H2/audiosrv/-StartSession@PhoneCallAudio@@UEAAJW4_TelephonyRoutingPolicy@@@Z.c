/*
 * XREFs of ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013D560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x18000C918 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FEA00 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___ @ 0x18013BE64 (wil--details--lambda_call__lambda_725372baeb855ae858d01405b3bc3564___--_lambda_call__lambda_7253.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18013C0E0 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013C3B4 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x18013CEB4 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PhoneCallAudio::StartSession(__int64 a1, int a2)
{
  __int64 (__fastcall *v4)(struct IAudioPolicyManager *, _QWORD, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // rsi
  PhoneCallAudio *v8; // rbx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  char v15; // [rsp+28h] [rbp-18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v17; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  v19 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v19);
  v5 = v4(g_PolicyManager, 0LL, &v19);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    return v6;
  }
  v7 = (_QWORD *)(a1 + 128);
  v8 = (PhoneCallAudio *)(a1 - 8);
  if ( *(_QWORD *)(a1 + 128) )
  {
    PhoneCallAudio::CleanupRouting((PhoneCallAudio *)(a1 - 8));
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v7 + 488LL))(*v7, 0LL);
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)(a1 + 128));
  }
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 128), v19);
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v7 + 488LL))(*v7, v9);
  v14 = a1 - 8;
  v15 = 1;
  *(_DWORD *)(a1 + 60) = 1;
  v10 = PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(a1 - 8, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x207,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v10);
    wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___((__int64)&v14);
    v6 = v11;
    goto LABEL_9;
  }
  v12 = PhoneCallAudio::OnPhoneCallStarted(v8);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20A,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v12);
    wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___((__int64)&v14);
    goto LABEL_9;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
