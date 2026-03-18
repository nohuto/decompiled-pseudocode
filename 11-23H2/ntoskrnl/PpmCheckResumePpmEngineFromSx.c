/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x1405963CC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfUpdateQosDisableReasons @ 0x14032B114 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmReleaseLock @ 0x14032C280 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PpmCheckReInit @ 0x14082CAEC (PpmCheckReInit.c)
 */

void PpmCheckResumePpmEngineFromSx()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // r8d

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( PpmHeteroHgsEnabled )
  {
    v2 = 1;
    __writemsr(0x17D0u, (*(_QWORD *)(PpmHeteroHgsTableMdl + 48) << 12) | 1LL);
    v1 = 6097LL;
    if ( PpmHeteroHgsThreadEnabled )
      v2 = 3;
    v0 = 0LL;
    __writemsr(0x17D1u, v2);
  }
  PpmCheckForceDisarm = 0;
  PpmCheckReInit(v1, v0);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140D1F5F8 = 0;
  PpmReleaseLock(&PpmPerfPolicyLock);
}
