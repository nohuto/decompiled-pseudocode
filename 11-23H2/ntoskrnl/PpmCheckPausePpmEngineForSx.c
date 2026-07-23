/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x140596878
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x14032B3A4 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmReleaseLock @ 0x14032C510 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x14082CDEC (PpmCheckReInit.c)
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
