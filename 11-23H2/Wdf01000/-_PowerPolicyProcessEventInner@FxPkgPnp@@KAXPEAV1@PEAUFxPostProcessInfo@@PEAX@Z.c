/*
 * XREFs of ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C007E190
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007D880 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxPkgPnp::_PowerPolicyProcessEventInner(FxPkgPnp *This, _FX_DRIVER_GLOBALS *Info, void *Context)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rsi

  p_m_StateMachineLock = &This->m_PowerPolicyMachine.m_StateMachineLock;
  FxWaitLockInternal::AcquireLock(&This->m_PowerPolicyMachine.m_StateMachineLock, Info, 0LL);
  FxPkgPnp::PowerPolicyProcessEventInner(This, (FxPostProcessInfo *)Info);
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
