/*
 * XREFs of ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00694A0
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0069880 (-_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0040930 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C0068B40 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C0069154 (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C0080E08 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryCapabilities(FxPkgPdo *this, FxIrp *Irp)
{
  signed int StackCapabilities; // r8d
  _DEVICE_CAPABILITIES *Capabilities; // rsi
  bool HasEnoughRemainingThreadStack; // al
  void *v7; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  _DEVICE_OBJECT *v10; // rcx
  MxDeviceObject parentDeviceObject; // [rsp+20h] [rbp-98h] BYREF
  _STACK_DEVICE_CAPABILITIES parentStackCapabilities; // [rsp+30h] [rbp-88h] BYREF

  memset(&parentStackCapabilities, 0, sizeof(parentStackCapabilities));
  StackCapabilities = -1073741823;
  Capabilities = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.DeviceCapabilities.Capabilities;
  if ( Capabilities->Version == 1 && Capabilities->Size >= 0x40u )
  {
    HasEnoughRemainingThreadStack = Mx::MxHasEnoughRemainingThreadStack();
    m_DeviceBase = this->m_DeviceBase;
    if ( HasEnoughRemainingThreadStack )
    {
      parentDeviceObject.m_DeviceObject = *(_DEVICE_OBJECT **)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 144LL);
      StackCapabilities = GetStackCapabilities(this->m_Globals, &parentDeviceObject, 0LL, &parentStackCapabilities);
      if ( StackCapabilities >= 0 )
      {
        FxPkgPdo::HandleQueryCapabilities(this, Capabilities, &parentStackCapabilities.DeviceCaps);
        StackCapabilities = 0;
      }
    }
    else
    {
      m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      parentDeviceObject.m_DeviceObject = 0LL;
      if ( (int)MxWorkItem::Allocate((MxWorkItem *)&parentDeviceObject, m_DeviceObject, v7) >= 0 )
      {
        v10 = parentDeviceObject.m_DeviceObject;
        Irp->m_Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (_LIST_ENTRY *)parentDeviceObject.m_DeviceObject;
        Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        IoQueueWorkItem((PIO_WORKITEM)v10, FxPkgPdo::_QueryCapsWorkItem, DelayedWorkQueue, Irp->m_Irp);
        return 259LL;
      }
      StackCapabilities = -1073741670;
    }
  }
  return FxPkgPnp::CompletePnpRequest(this, Irp, StackCapabilities);
}
