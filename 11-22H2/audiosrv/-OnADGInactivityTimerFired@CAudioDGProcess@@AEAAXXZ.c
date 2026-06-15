/*
 * XREFs of ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x1800CEC64
 * Callers:
 *     ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800CED00 (-OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIM.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800CE918 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGInactivityTimerFired(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  void (__fastcall ***v3)(_QWORD, _QWORD); // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CAudioDGProcess::DoTerminateADG(this);
    v3 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 19);
    if ( v3 )
      (**v3)(v3, 0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
