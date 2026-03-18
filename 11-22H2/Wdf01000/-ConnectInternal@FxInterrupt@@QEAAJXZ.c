/*
 * XREFs of ?ConnectInternal@FxInterrupt@@QEAAJXZ @ 0x1C007FF50
 * Callers:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C007E91C (-Connect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000AC00 (memset.c)
 */

__int64 __fastcall FxInterrupt::ConnectInternal(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // rbx
  __int64 v3; // rdi
  unsigned __int8 v4; // zf
  _DEVICE_OBJECT *m_DeviceObject; // rax
  _IO_CONNECT_INTERRUPT_PARAMETERS connectParams; // [rsp+20h] [rbp-50h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  v3 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  memset(&connectParams, 0, sizeof(connectParams));
  v4 = this->m_InterruptInfo.ShareDisposition == 3;
  connectParams.Version = 4;
  m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
  connectParams.FullySpecified.ShareVector = v4;
  connectParams.FullySpecified.PhysicalDeviceObject = m_DeviceObject;
  connectParams.FullySpecified.InterruptObject = &this->m_Interrupt;
  connectParams.FullySpecified.ServiceRoutine = (unsigned __int8 (__fastcall *)(struct _KINTERRUPT *, void *))FxInterrupt::_InterruptThunk;
  connectParams.FullySpecified.SpinLock = this->m_SpinLock;
  connectParams.FullySpecified.FloatingSave = this->m_FloatingSave;
  connectParams.FullySpecified.Vector = this->m_InterruptInfo.Vector;
  connectParams.FullySpecified.Irql = this->m_InterruptInfo.Irql;
  connectParams.FullySpecified.ProcessorEnableMask = this->m_InterruptInfo.TargetProcessorSet;
  connectParams.FullySpecified.Group = this->m_InterruptInfo.Group;
  connectParams.FullySpecified.InterruptMode = this->m_InterruptInfo.Mode;
  connectParams.FullySpecified.SynchronizeIrql = this->m_SynchronizeIrql;
  connectParams.FullySpecified.ServiceContext = this;
  return (*(__int64 (__fastcall **)(_IO_CONNECT_INTERRUPT_PARAMETERS *))(v3 + 1144))(&connectParams);
}
