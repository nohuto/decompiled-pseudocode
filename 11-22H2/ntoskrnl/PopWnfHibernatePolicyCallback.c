/*
 * XREFs of PopWnfHibernatePolicyCallback @ 0x1409894C0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireTransitionLock @ 0x140802E90 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140802F44 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x140804218 (PopHibernateEvaluation.c)
 *     PopQueryHiberPersistedRegValue @ 0x14082273C (PopQueryHiberPersistedRegValue.c)
 *     PopTraceHibernatePolicyUpdate @ 0x140863C5C (PopTraceHibernatePolicyUpdate.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 PopWnfHibernatePolicyCallback()
{
  int HiberPersistedRegValue; // edi
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  HIDWORD(v7[0]) = 0;
  LOBYTE(v7[0]) = 0;
  HiberPersistedRegValue = PopQueryHiberPersistedRegValue(3, (unsigned int *)v7 + 1);
  if ( HiberPersistedRegValue >= 0 )
  {
    PopAcquireTransitionLock(2);
    PopAcquirePolicyLock(v1);
    PopAllowHibernateReg = HIDWORD(v7[0]);
    HiberPersistedRegValue = PopHibernateEvaluation(1, 1, (bool *)v7);
    PopReleasePolicyLock(v3, v2, v4, v5, v7[0], v7[1]);
    PopReleaseTransitionLock(2);
    PopTraceHibernatePolicyUpdate();
  }
  return (unsigned int)HiberPersistedRegValue;
}
