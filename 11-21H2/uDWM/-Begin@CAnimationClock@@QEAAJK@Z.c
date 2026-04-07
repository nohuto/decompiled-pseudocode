/*
 * XREFs of ?Begin@CAnimationClock@@QEAAJK@Z @ 0x1800A1BB0
 * Callers:
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800A4A80 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800A1798 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A19E0 (--1BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x1800A2AF8 (-StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A2EB4 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     McTemplateU0jqi_EtwEventWriteTransfer @ 0x1800A47FC (McTemplateU0jqi_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::Begin(CAnimationClock *this, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  signed __int32 v6; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp-188h] BYREF
  struct _GUID v9; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v10[40]; // [rsp+50h] [rbp-168h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"BeginAnimationClock");
  v10[0] = &AnimationClockLoggingTelemetry::BeginAnimationClock::`vftable';
  v9 = *(struct _GUID *)((char *)this + 120);
  AnimationClockLoggingTelemetry::BeginAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::BeginAnimationClock *)v10,
    &v9,
    *((_DWORD *)this + 36));
  v4 = -2147019873;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    if ( a2 <= 0x2710 )
    {
      v5 = a2;
      if ( *((_DWORD *)this + 35) > a2 )
        v5 = *((_DWORD *)this + 35);
      *((_DWORD *)this + 35) = v5;
      v4 = 0;
      v6 = _InterlockedIncrement((volatile signed __int32 *)this + 36);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0jqi_EtwEventWriteTransfer(v6, 1, (_DWORD)this + 120, a2, v6);
    }
    else
    {
      v4 = -2147024809;
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10, v4);
  AnimationClockLoggingTelemetry::BeginAnimationClock::~BeginAnimationClock((AnimationClockLoggingTelemetry::BeginAnimationClock *)v10);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v4;
}
