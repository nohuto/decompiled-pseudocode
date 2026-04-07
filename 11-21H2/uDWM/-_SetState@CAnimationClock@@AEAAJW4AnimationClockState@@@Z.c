/*
 * XREFs of ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8
 * Callers:
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x1800A2358 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800A2718 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x1800A3D8C (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A4038 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800A1798 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A19B4 (--1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x1800A29B8 (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A2EB4 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A4038 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800A41F4 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800A42BC (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800A45B4 (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0jdd_EtwEventWriteTransfer @ 0x1800A4708 (McTemplateU0jdd_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimationClock::_SetState(__int64 a1, unsigned int a2)
{
  int v4; // r14d
  unsigned int v5; // edi
  __int64 v6; // rax
  signed __int64 v7; // rdi
  __int64 ElapsedMillsecondsFromTime; // rax
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  void (__fastcall ***v12)(_QWORD, __int128 *, _QWORD); // rcx
  void (__fastcall **v13)(_QWORD, __int128 *, _QWORD); // rax
  unsigned int v14; // ebp
  struct _GUID v16; // [rsp+30h] [rbp-198h] BYREF
  __int128 v17; // [rsp+40h] [rbp-188h] BYREF
  _QWORD v18[40]; // [rsp+50h] [rbp-178h] BYREF

  v4 = 0;
  v5 = -1;
  switch ( a2 )
  {
    case 1u:
      v5 = *(_DWORD *)(a1 + 136);
      goto LABEL_21;
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
      goto LABEL_21;
    case 3u:
      goto LABEL_21;
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
    goto LABEL_21;
  }
  v5 = *(_DWORD *)(a1 + 140);
  v4 = CAnimationClock::_TriggerAnimation((CAnimationClock *)a1);
  if ( *(_QWORD *)(a1 + 88) )
  {
    v6 = CAnimationClock::s_GetElapsedMillsecondsFromTime((const union _LARGE_INTEGER *)(a1 + 88));
    v7 = *(unsigned int *)(a1 + 140);
    if ( (__int64)abs64(v6) >= v7 )
      v5 = 0;
    else
      v5 = v7 - v6;
  }
  if ( v4 >= 0 )
  {
LABEL_21:
    v9 = *(_DWORD *)(a1 + 80);
    wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v18,
      (__int64)"AnimationClockStateChange");
    v18[0] = &AnimationClockLoggingTelemetry::AnimationClockStateChange::`vftable';
    v16 = *(struct _GUID *)(a1 + 120);
    AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
      (AnimationClockLoggingTelemetry::AnimationClockStateChange *)v18,
      &v16,
      v9,
      a2);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0jdd_EtwEventWriteTransfer(v11, v10, a1 + 120, *(_DWORD *)(a1 + 80), a2);
    *(_DWORD *)(a1 + 80) = a2;
    if ( !*(_QWORD *)(a1 + 72)
      || (*(_QWORD *)&v16.Data1 = a1 + 24,
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24)),
          v12 = *(void (__fastcall ****)(_QWORD, __int128 *, _QWORD))(a1 + 72),
          v13 = *v12,
          v17 = *(_OWORD *)(a1 + 120),
          (*v13)(v12, &v17, a2),
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24)),
          a2 == *(_DWORD *)(a1 + 80)) )
    {
      if ( v5 != -1 )
        v4 = CAnimationClock::_SetTimer((CAnimationClock *)a1, v5);
      if ( v4 >= 0 )
      {
        v14 = a2 - 2;
        if ( v14 )
        {
          if ( v14 == 1 )
            v4 = CAnimationClock::_SetTime(a1, 0LL, 0LL);
        }
        else if ( v5 == -1 )
        {
          CAnimationClock::_SetState(a1, 4LL);
        }
      }
    }
    wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18, v4);
    AnimationClockLoggingTelemetry::AnimationClockStateChange::~AnimationClockStateChange((AnimationClockLoggingTelemetry::AnimationClockStateChange *)v18);
  }
  return (unsigned int)v4;
}
