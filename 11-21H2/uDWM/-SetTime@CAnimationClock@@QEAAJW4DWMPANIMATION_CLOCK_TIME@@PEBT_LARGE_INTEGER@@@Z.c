/*
 * XREFs of ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A294C
 * Callers:
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A4F38 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A4038 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::SetTime(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  LODWORD(a3) = CAnimationClock::_SetTime(a1, a2, a3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return (unsigned int)a3;
}
