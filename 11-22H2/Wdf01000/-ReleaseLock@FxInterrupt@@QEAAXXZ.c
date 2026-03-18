/*
 * XREFs of ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0005984
 * Callers:
 *     imp_WdfInterruptReleaseLock @ 0x1C0005940 (imp_WdfInterruptReleaseLock.c)
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0009100 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C00100A0 (-_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x1C007F5D4 (-InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 *     ?InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x1C007F6A4 (-InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C007F72C (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 */

void __fastcall FxInterrupt::ReleaseLock(FxInterrupt *this)
{
  struct _KINTERRUPT *m_Interrupt; // rcx
  const void *_a1; // rax
  FxWaitLockInternal *v4; // rcx

  if ( this->m_PassiveHandling )
  {
    v4 = &this->m_WaitLock->FxWaitLockInternal;
    v4->m_OwningThread = 0LL;
    KeSetEvent(&v4->m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
  else
  {
    m_Interrupt = this->m_Interrupt;
    if ( m_Interrupt || (m_Interrupt = this->m_InterruptCaptured) != 0LL )
    {
      KeReleaseInterruptSpinLock(m_Interrupt, this->m_OldIrql);
    }
    else
    {
      _a1 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x1Du, (const _GUID *)&WPP_InterruptObject_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(this->m_Globals);
    }
  }
}
