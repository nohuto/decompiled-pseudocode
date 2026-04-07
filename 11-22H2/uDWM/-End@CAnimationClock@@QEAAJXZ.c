/*
 * XREFs of ?End@CAnimationClock@@QEAAJXZ @ 0x180004258
 * Callers:
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18000DF14 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180003D18 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0ji_EtwEventWriteTransfer @ 0x180003E14 (McTemplateU0ji_EtwEventWriteTransfer.c)
 *     ??1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18000438C (--1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x1800046AC (-StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180005D64 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800066F4 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimationClock::End(CAnimationClock *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  int v4; // esi
  char *v6; // [rsp+20h] [rbp-178h] BYREF
  struct _GUID v7; // [rsp+30h] [rbp-168h] BYREF
  _QWORD v8[40]; // [rsp+40h] [rbp-158h] BYREF

  v6 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v8);
  v8[0] = &AnimationClockLoggingTelemetry::EndAnimationClock::`vftable';
  v7 = *(struct _GUID *)((char *)this + 120);
  AnimationClockLoggingTelemetry::EndAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::EndAnimationClock *)v8,
    &v7,
    *((_DWORD *)this + 36));
  v3 = -2147019873;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    v4 = _InterlockedDecrement((volatile signed __int32 *)this + 36);
    if ( v4 < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 36);
    }
    else
    {
      v3 = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0ji_EtwEventWriteTransfer(v2, (int)&UdwmAnimationClock_End, (__int64)this + 120, v4, v6);
      if ( (*((_DWORD *)this + 34) != -1 || *((_DWORD *)this + 35)) && !v4 )
        v3 = CAnimationClock::_SetTime((union _LARGE_INTEGER *)this, 0, 0LL);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8, v3);
  AnimationClockLoggingTelemetry::EndAnimationClock::~EndAnimationClock((AnimationClockLoggingTelemetry::EndAnimationClock *)v8);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v3;
}
