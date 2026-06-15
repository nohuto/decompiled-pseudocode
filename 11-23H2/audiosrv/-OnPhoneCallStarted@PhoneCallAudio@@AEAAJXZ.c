/*
 * XREFs of ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x18013CE64
 * Callers:
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013D510 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FE9B0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x18013CC44 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18013E68C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180140130 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::OnPhoneCallStarted(PhoneCallAudio *this)
{
  __int64 *v2; // rdi
  int v3; // eax
  unsigned int v4; // esi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+30h] [rbp-D8h]
  PhoneCallAudio *v8; // [rsp+38h] [rbp-D0h]
  int v9; // [rsp+40h] [rbp-C8h]
  _DWORD v10[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v11[272]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  if ( !(unsigned int)PhoneCallAudio::IsInCall((struct _RTL_CRITICAL_SECTION *)this) )
    goto LABEL_5;
  memset_0(v11, 0, 0x104uLL);
  v10[0] = 0;
  v10[3] = 2;
  v10[2] = 3;
  v10[1] = 2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
  v8 = this;
  LOBYTE(v9) = 1;
  v2 = (__int64 *)((char *)this + 144);
  if ( *((_QWORD *)this + 18)
    || (v3 = DynamicAudioEndpointManager::AddRule(
               g_DynamicAudioEndpointManager,
               *((struct IAudioProcess **)this + 17),
               (struct _DynamicRoutingRule *)v10,
               (__int64 *)this + 18),
        v4 = v3,
        v3 >= 0) )
  {
LABEL_5:
    if ( (_BYTE)v7 )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x399,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v3);
    DynamicAudioEndpointManager::RemoveRule(g_DynamicAudioEndpointManager, *((struct IAudioProcess **)this + 17), *v2);
    *v2 = 0LL;
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    return v4;
  }
}
