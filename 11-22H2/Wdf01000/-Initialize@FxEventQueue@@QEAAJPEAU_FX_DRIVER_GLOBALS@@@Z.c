/*
 * XREFs of ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0081358
 * Callers:
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C00786E0 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C007EAD8 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C00839D0 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxEventQueue::Initialize(FxEventQueue *this, _FX_DRIVER_GLOBALS *DriverGlobals)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rbx
  __int64 result; // rax

  p_m_StateMachineLock = &this->m_StateMachineLock;
  KeInitializeEvent(&this->m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
  result = 0LL;
  p_m_StateMachineLock->m_Event.m_DbgFlagIsInitialized = 1;
  return result;
}
