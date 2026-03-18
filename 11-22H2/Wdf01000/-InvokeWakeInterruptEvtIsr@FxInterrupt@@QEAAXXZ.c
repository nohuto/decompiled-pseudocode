/*
 * XREFs of ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C007F72C
 * Callers:
 *     ?InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C0082320 (-InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?InvokingEvtIsrInDxNotArmedForWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C0082360 (-InvokingEvtIsrInDxNotArmedForWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C00823A0 (-InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00058A4 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0005984 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxInterrupt::InvokeWakeInterruptEvtIsr(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  unsigned __int64 ObjectHandleUnchecked; // rax

  FxInterrupt::AcquireLock(this, a2);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  this->m_WakeInterruptMachine->m_Claimed = ((__int64 (__fastcall *)(unsigned __int64))this->m_EvtInterruptIsr)(ObjectHandleUnchecked);
  FxInterrupt::ReleaseLock(this);
}
