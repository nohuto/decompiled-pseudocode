/*
 * XREFs of ?DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ @ 0x1C0060FD4
 * Callers:
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0010B10 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     ?SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z @ 0x1C006142C (-SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxCompanionTarget::DecrementPendingTaskCount(FxCompanionTarget *this)
{
  if ( _InterlockedExchangeAdd(&this->m_PendingTaskCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&this->m_DisposeEvent->m_Event.m_Event, 0, 0);
}
