/*
 * XREFs of ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x1800E3EB8
 * Callers:
 *     ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800E3F20 (-s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x1800E3E40 (-_OnTimerCallback@CTimer@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTimer::_OnTimerTick(CTimer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 18) = GetCurrentThreadId();
  CTimer::_OnTimerCallback(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
}
