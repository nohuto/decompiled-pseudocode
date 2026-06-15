/*
 * XREFs of ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x18012F9DC
 * Callers:
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180130100 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x18012F604 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1801311DC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180133050 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::OnPhoneCallStarted(PhoneCallAudio *this)
{
  __int64 *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-158h] BYREF
  char v7; // [rsp+28h] [rbp-150h]
  PhoneCallAudio *v8; // [rsp+30h] [rbp-148h]
  char v9; // [rsp+38h] [rbp-140h]
  _DWORD v10[4]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v11[272]; // [rsp+50h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

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
  v9 = 1;
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
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x399,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v3);
    DynamicAudioEndpointManager::RemoveRule(g_DynamicAudioEndpointManager, *((struct IAudioProcess **)this + 17), *v2);
    *v2 = 0LL;
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
