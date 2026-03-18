/*
 * XREFs of ?PowerDisableWakeAtBusOverload@FxPkgPdo@@EEAAXXZ @ 0x1C0080610
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPkgPdo::PowerDisableWakeAtBusOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  __int64 v3; // rcx
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v5; // r8
  void (__fastcall *v6)(unsigned __int64); // rax

  if ( this->m_EnableWakeAtBusInvoked )
  {
    m_DeviceBase = this->m_DeviceBase;
    this->m_EnableWakeAtBusInvoked = 0;
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 648LL) + 888LL);
    if ( v3 )
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 904));
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v6 = *(void (__fastcall **)(unsigned __int64))(v5 + 1760);
    if ( v6 )
      v6(ObjectHandleUnchecked);
  }
}
