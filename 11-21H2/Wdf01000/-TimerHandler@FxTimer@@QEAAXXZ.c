/*
 * XREFs of ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C0002AE4
 * Callers:
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0001050 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x1C0002A70 (-_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z.c)
 *     ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0002A90 (-_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTimer::TimerHandler(FxTimer *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void (__fastcall **p_m_Callback)(WDFTIMER__ *); // rdi
  _KTHREAD *volatile *p_m_CallbackThread; // rsi
  FxCallbackLock *m_CallbackLock; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v7; // rbx
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v9; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  p_m_Callback = &this->m_Callback;
  if ( this->m_Callback )
  {
    p_m_CallbackThread = &this->m_CallbackThread;
    m_CallbackLock = this->m_CallbackLock;
    this->m_CallbackThread = KeGetCurrentThread();
    if ( m_CallbackLock )
    {
      irql = 0;
      m_CallbackLock->Lock(m_CallbackLock, &irql);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      (*p_m_Callback)((WDFTIMER__ *)ObjectHandleUnchecked);
      LOBYTE(v9) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v9);
    }
    else
    {
      m_ObjectSize = this->m_ObjectSize;
      v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v7 = 0LL;
      (*p_m_Callback)((WDFTIMER__ *)v7);
    }
    *p_m_CallbackThread = 0LL;
  }
}
