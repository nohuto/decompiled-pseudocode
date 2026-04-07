/*
 * XREFs of ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x1800E3E40
 * Callers:
 *     ?Start@CTimer@@QEAAJK@Z @ 0x1800E3CA8 (-Start@CTimer@@QEAAJK@Z.c)
 *     ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x1800E3EB8 (-_OnTimerTick@CTimer@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTimer::_OnTimerCallback(CTimer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  if ( *((_QWORD *)this + 8) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    (***((void (__fastcall ****)(_QWORD))this + 8))(*((_QWORD *)this + 8));
    EnterCriticalSection(v2);
  }
}
