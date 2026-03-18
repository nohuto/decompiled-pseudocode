/*
 * XREFs of ??1MxTimer@@QEAA@XZ @ 0x1C003F8CC
 * Callers:
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C000DE42 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C0040DE4 (--1FxTimer@@UEAA@XZ.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C006E82C (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x1C0077108 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 *     ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C007D384 (-PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MxTimer::~MxTimer(MxTimer *this, __int64 a2)
{
  struct _EX_TIMER *m_KernelExTimer; // rcx

  if ( this->m_Timer.m_IsExtTimer )
  {
    m_KernelExTimer = this->m_Timer.m_KernelExTimer;
    if ( m_KernelExTimer )
    {
      LOBYTE(a2) = 1;
      ExDeleteTimer(m_KernelExTimer, a2, 0LL, 0LL);
      this->m_Timer.m_KernelExTimer = 0LL;
    }
  }
}
