/*
 * XREFs of ?SetACLineStatus@CStreamConnectionManagerImpl@@UEAAXE@Z @ 0x18012F100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamConnectionManagerImpl::SetACLineStatus(CMonitorManager **this, unsigned __int8 a2)
{
  CMonitorManager::OnPowerStateChanged(this[1], a2);
}
