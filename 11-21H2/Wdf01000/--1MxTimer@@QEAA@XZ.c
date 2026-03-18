/*
 * XREFs of ??1MxTimer@@QEAA@XZ @ 0x1C0016E64
 * Callers:
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C0016A84 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C00186F8 (--1FxTimer@@UEAA@XZ.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C00387A2 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x1C0089750 (--1FxPowerIdleMachine@@QEAA@XZ.c)
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
