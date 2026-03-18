/*
 * XREFs of ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C007DF70
 * Callers:
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C007A370 (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 *     ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007DFAC (-UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IdleTimeoutManagement::UpdateIdleTimeoutStatus(
        IdleTimeoutManagement *this,
        IdleTimeoutManagement::IdleTimeoutStatusFlag Flag)
{
  volatile int m_IdleTimeoutStatus; // eax
  signed __int32 v4; // eax
  volatile int v5; // ett

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  if ( (this->m_IdleTimeoutStatus & Flag) != 0 )
    return 1LL;
  if ( (m_IdleTimeoutStatus & 1) != 0 )
    return 2LL;
  v5 = this->m_IdleTimeoutStatus;
  v4 = _InterlockedCompareExchange(&this->m_IdleTimeoutStatus, Flag | m_IdleTimeoutStatus, m_IdleTimeoutStatus);
  if ( v5 == v4 )
    return 0LL;
  else
    return ((v4 & 1) == 0) | 2u;
}
