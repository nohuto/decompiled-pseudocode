/*
 * XREFs of ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180006004
 * Callers:
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x18000388C (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180003D18 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18000576C (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180006004 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800AA15C (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180003D18 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000400C (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180005908 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x180005B10 (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180005D64 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     McTemplateU0jdd_EtwEventWriteTransfer @ 0x180005F84 (McTemplateU0jdd_EtwEventWriteTransfer.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180006004 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ??1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800061FC (--1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800066F4 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800AA66C (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimationClock::_SetState(__int64 a1, unsigned int a2)
{
  signed int v4; // r14d
  unsigned int v5; // edi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int128 *, _QWORD); // rcx
  void (__fastcall **v10)(_QWORD, __int128 *, _QWORD); // rax
  unsigned int v11; // ebp
  __int64 v13; // rax
  signed __int64 v14; // rdi
  __int64 ElapsedMillsecondsFromTime; // rax
  struct _GUID v16; // [rsp+30h] [rbp-198h] BYREF
  __int128 v17; // [rsp+40h] [rbp-188h] BYREF
  _QWORD v18[40]; // [rsp+50h] [rbp-178h] BYREF

  v4 = 0;
  v5 = -1;
  switch ( a2 )
  {
    case 1u:
      v5 = *(_DWORD *)(a1 + 136);
      goto LABEL_10;
    case 2u:
      if ( *(_QWORD *)(a1 + 88) )
      {
        ElapsedMillsecondsFromTime = CAnimationClock::s_GetElapsedMillsecondsFromTime((const union _LARGE_INTEGER *)(a1 + 88));
        if ( ElapsedMillsecondsFromTime > 0 )
          v5 = ElapsedMillsecondsFromTime;
      }
      else
      {
        v5 = 0;
      }
      goto LABEL_10;
    case 3u:
      goto LABEL_10;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 5 || a2 == 6 )
    {
      v5 = 1000;
    }
    else if ( a2 != 7 )
    {
      return (unsigned int)-2147418113;
    }
    goto LABEL_10;
  }
  v5 = *(_DWORD *)(a1 + 140);
  v4 = CAnimationClock::_TriggerAnimation((CAnimationClock *)a1);
  if ( *(_QWORD *)(a1 + 88) )
  {
    v13 = CAnimationClock::s_GetElapsedMillsecondsFromTime((const union _LARGE_INTEGER *)(a1 + 88));
    v14 = *(unsigned int *)(a1 + 140);
    if ( (__int64)abs64(v13) >= v14 )
      v5 = 0;
    else
      v5 = v14 - v13;
  }
  if ( v4 >= 0 )
  {
LABEL_10:
    v6 = *(_DWORD *)(a1 + 80);
    wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v18);
    v18[0] = &AnimationClockLoggingTelemetry::AnimationClockStateChange::`vftable';
    v16 = *(struct _GUID *)(a1 + 120);
    AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
      (AnimationClockLoggingTelemetry::AnimationClockStateChange *)v18,
      &v16,
      v6,
      a2);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0jdd_EtwEventWriteTransfer(v8, v7, a1 + 120, *(_DWORD *)(a1 + 80), a2);
    *(_DWORD *)(a1 + 80) = a2;
    if ( *(_QWORD *)(a1 + 72) )
    {
      *(_QWORD *)&v16.Data1 = a1 + 24;
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
      v9 = *(void (__fastcall ****)(_QWORD, __int128 *, _QWORD))(a1 + 72);
      v10 = *v9;
      v17 = *(_OWORD *)(a1 + 120);
      (*v10)(v9, &v17, a2);
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
    }
    if ( a2 == *(_DWORD *)(a1 + 80) )
    {
      if ( v5 != -1 )
        v4 = CAnimationClock::_SetTimer((CAnimationClock *)a1, v5);
      if ( v4 >= 0 )
      {
        v11 = a2 - 2;
        if ( v11 )
        {
          if ( v11 == 1 )
            v4 = CAnimationClock::_SetTime((union _LARGE_INTEGER *)a1, 0, 0LL);
        }
        else if ( v5 == -1 )
        {
          CAnimationClock::_SetState(a1, 4LL);
        }
      }
    }
    wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v18, v4);
    AnimationClockLoggingTelemetry::AnimationClockStateChange::~AnimationClockStateChange((AnimationClockLoggingTelemetry::AnimationClockStateChange *)v18);
  }
  return (unsigned int)v4;
}
