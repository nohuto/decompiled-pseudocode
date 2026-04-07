/*
 * XREFs of ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18000410C
 * Callers:
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000D6EC (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     McTemplateU0jqi_EtwEventWriteTransfer @ 0x180003C94 (McTemplateU0jqi_EtwEventWriteTransfer.c)
 *     ??1BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x18000422C (--1BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180004774 (-StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180005D64 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800066F4 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::Begin(CAnimationClock *this, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  signed __int32 v6; // eax
  char *v8; // [rsp+30h] [rbp-188h] BYREF
  struct _GUID v9; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v10[40]; // [rsp+50h] [rbp-168h] BYREF

  v8 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v10);
  v10[0] = &AnimationClockLoggingTelemetry::BeginAnimationClock::`vftable';
  v9 = *(struct _GUID *)((char *)this + 120);
  AnimationClockLoggingTelemetry::BeginAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::BeginAnimationClock *)v10,
    &v9,
    *((_DWORD *)this + 36));
  v4 = -2147019873;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    if ( a2 > 0x2710 )
    {
      v4 = -2147024809;
    }
    else
    {
      v5 = a2;
      if ( *((_DWORD *)this + 35) > a2 )
        v5 = *((_DWORD *)this + 35);
      *((_DWORD *)this + 35) = v5;
      v4 = 0;
      v6 = _InterlockedIncrement((volatile signed __int32 *)this + 36);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0jqi_EtwEventWriteTransfer(v6, 1LL, (__int64)this + 120, a2, v6);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10, v4);
  AnimationClockLoggingTelemetry::BeginAnimationClock::~BeginAnimationClock((AnimationClockLoggingTelemetry::BeginAnimationClock *)v10);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v4;
}
