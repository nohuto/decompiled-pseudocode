/*
 * XREFs of ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x18001576C
 * Callers:
 *     ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180015730 (-s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x1800157BC (-_OnTimerCallback@CTimer@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTimer::_OnTimerTick(CTimer *this)
{
  char *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 18) = GetCurrentThreadId();
  CTimer::_OnTimerCallback(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
}
