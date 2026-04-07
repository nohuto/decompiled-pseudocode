/*
 * XREFs of ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A4038
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x1800A1ECC (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A294C (-SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A2864 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z @ 0x1800A41B0 (-_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800A45B4 (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0ji_EtwEventWriteTransfer @ 0x1800A4788 (McTemplateU0ji_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationClock::_SetTime(__int64 a1, int a2, const union _LARGE_INTEGER *a3)
{
  int Frame; // ebx
  CAnimationClock *v7; // rcx
  int v8; // eax
  __int64 v10; // rcx
  union _LARGE_INTEGER *v11; // r8
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && (__int64)abs64(CAnimationClock::s_GetElapsedMillsecondsFromTime(a3)) > 5000 )
    return (unsigned int)-2147024809;
  if ( !a2 )
  {
    if ( ((*(_DWORD *)(a1 + 80) - 1) & 0xFFFFFFFD) == 0 )
    {
      v14 = 0LL;
      v11 = (union _LARGE_INTEGER *)&v14;
      if ( a3 )
        v11 = (union _LARGE_INTEGER *)(a1 + 88);
      Frame = CAnimationClock::_SetTimeToNextFrame((CAnimationClock *)a1, a3, v11);
      if ( Frame >= 0 )
      {
        Frame = CAnimationClock::_SetState(a1, 2u);
        if ( !a3 )
          *(_QWORD *)(a1 + 88) = v14;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0ji_EtwEventWriteTransfer(v12, &UdwmAnimationClock_Start, a1 + 120, *(_QWORD *)(a1 + 88));
      }
      return (unsigned int)Frame;
    }
    return (unsigned int)-2147019873;
  }
  if ( a2 != 1 )
    return (unsigned int)-2147024809;
  if ( (unsigned int)(*(_DWORD *)(a1 + 80) - 1) > 3 )
    return (unsigned int)-2147019873;
  v7 = *(CAnimationClock **)(a1 + 112);
  if ( (unsigned __int64)v7 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = NtDCompositionCommitSynchronizationObject(v7);
    if ( v8 < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x1E1,
               (int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
               (const char *)(unsigned int)v8);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(a1 + 112),
      0LL);
  }
  Frame = CAnimationClock::_SetTimeToNextFrame(v7, a3, (union _LARGE_INTEGER *)(a1 + 96));
  if ( Frame >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0ji_EtwEventWriteTransfer(v10, &UdwmAnimationClock_Cancel, a1 + 120, *(_QWORD *)(a1 + 96));
    return (unsigned int)CAnimationClock::_SetState(a1, 5u);
  }
  return (unsigned int)Frame;
}
