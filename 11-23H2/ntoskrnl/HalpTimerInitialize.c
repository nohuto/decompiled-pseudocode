/*
 * XREFs of HalpTimerInitialize @ 0x14037A720
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x14037A078 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerSelectRoles @ 0x14037A44C (HalpTimerSelectRoles.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A4224 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B68E0 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4800 (HalpTimerGetInternalData.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x14037A7B8 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerNoteHpetMaskingBehavior @ 0x14037AB4C (HalpTimerNoteHpetMaskingBehavior.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerInitialize(__int64 a1)
{
  int v2; // edi
  __int64 InternalData; // rax
  __int64 v5; // rax

  if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
  {
    v2 = 0;
  }
  else
  {
    InternalData = HalpTimerGetInternalData(a1);
    v2 = (*(__int64 (__fastcall **)(__int64))(a1 + 104))(InternalData);
    if ( v2 < 0 )
    {
      *(_DWORD *)(a1 + 256) = v2;
      HalpTimerLastProblem = 15;
      *(_DWORD *)(a1 + 252) = 15;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
      *(_DWORD *)(a1 + 272) = 2559;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v5 = HalpTimerGetInternalData(a1);
        _InterlockedExchange64((volatile __int64 *)(a1 + 200), (*(__int64 (__fastcall **)(__int64))(a1 + 112))(v5));
        HalpTimerCalibratePerformanceCounter(a1, 0LL);
      }
      if ( *(_DWORD *)(a1 + 228) == 3 )
        HalpTimerNoteHpetMaskingBehavior();
    }
  }
  *(_DWORD *)(a1 + 184) |= (v2 >> 31) + 2;
  return (unsigned int)v2;
}
