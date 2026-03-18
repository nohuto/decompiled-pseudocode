/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x140596388
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x14032B114 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmReleaseLock @ 0x14032C280 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x14082CAEC (PpmCheckReInit.c)
 */

void PpmCheckPausePpmEngineForSx()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140D1F5F8 = 1;
  PpmCheckForceDisarm = 1;
  PpmCheckReInit();
  PpmReleaseLock(&PpmPerfPolicyLock);
}
