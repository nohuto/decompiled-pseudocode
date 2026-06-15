/*
 * XREFs of ?GetRoutingPolicy@PhoneCallAudio@@UEAAJPEAW4_TelephonyRoutingPolicy@@@Z @ 0x18013CB00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FE9B0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x18013CC44 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::GetRoutingPolicy(PhoneCallAudio *this, enum _TelephonyRoutingPolicy *a2)
{
  unsigned int v4; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
  if ( a2 )
  {
    if ( !(unsigned int)PhoneCallAudio::IsInCall((PhoneCallAudio *)((char *)this - 8)) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25E,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)0x8000FFFFLL);
      ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
      return 2147549183LL;
    }
    switch ( *((_DWORD *)this + 17) )
    {
      case 2:
        *(_DWORD *)a2 = 7;
        break;
      case 4:
        *(_DWORD *)a2 = 0;
        break;
      case 5:
        *(_DWORD *)a2 = 5;
        break;
      case 6:
        *(_DWORD *)a2 = 1;
        break;
      default:
        v4 = -2147024809;
        break;
    }
  }
  else
  {
    v4 = -2147467261;
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
