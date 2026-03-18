/*
 * XREFs of ??1FxPowerIdleMachine@@QEAA@XZ @ 0x1C0077108
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C007A208 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 * Callees:
 *     ??1MxTimer@@QEAA@XZ @ 0x1C003F8CC (--1MxTimer@@QEAA@XZ.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C0045FBC (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 */

void __fastcall FxPowerIdleMachine::~FxPowerIdleMachine(FxPowerIdleMachine *this, __int64 a2)
{
  FxTagTracker *m_TagTracker; // rcx

  m_TagTracker = this->m_TagTracker;
  if ( m_TagTracker )
  {
    FxTagTracker::`scalar deleting destructor'(m_TagTracker);
    this->m_TagTracker = 0LL;
  }
  MxTimer::~MxTimer(&this->m_PowerTimeoutTimer, a2);
  this->m_Lock.m_DbgFlagIsInitialized = 0;
}
