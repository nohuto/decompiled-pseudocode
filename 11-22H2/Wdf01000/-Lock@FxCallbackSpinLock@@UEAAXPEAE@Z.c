/*
 * XREFs of ?Lock@FxCallbackSpinLock@@UEAAXPEAE@Z @ 0x1C0039470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0046CA0 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

void __fastcall FxCallbackSpinLock::Lock(FxCallbackSpinLock *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  _KTHREAD *CurrentThread; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxVerifierLock *m_Verifier; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( this->m_OwnerThread == CurrentThread )
  {
    m_Globals = this->m_Globals;
    ++this->m_RecursionCount;
    WPP_IFR_SF_q(m_Globals, 1u, 0x12u, 0xAu, WPP_FxCallbackSpinLock_hpp_Traceguids, this);
    FxVerifierBugCheckWorker(m_Globals, WDF_RECURSIVE_LOCK, (unsigned __int64)this, 0LL);
  }
  m_Verifier = this->m_Verifier;
  if ( m_Verifier )
    FxVerifierLock::Lock(m_Verifier, PreviousIrql, a3);
  else
    *PreviousIrql = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  this->m_OwnerThread = CurrentThread;
}
