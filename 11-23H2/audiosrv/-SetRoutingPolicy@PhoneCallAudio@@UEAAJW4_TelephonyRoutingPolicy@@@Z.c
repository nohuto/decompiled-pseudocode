/*
 * XREFs of ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013D3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FE9B0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013C364 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x18013CC44 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::SetRoutingPolicy(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( (unsigned int)PhoneCallAudio::IsInCall((struct _RTL_CRITICAL_SECTION *)(a1 - 8)) )
  {
    v5 = PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(a1 - 8, a2);
    v4 = 0;
    if ( v5 < 0 )
      v4 = v5;
    if ( v8 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    v4 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x248,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)0x8000FFFFLL);
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
  }
  return v4;
}
