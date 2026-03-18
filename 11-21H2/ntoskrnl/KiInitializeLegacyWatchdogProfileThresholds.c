/*
 * XREFs of KiInitializeLegacyWatchdogProfileThresholds @ 0x140B2CC08
 * Callers:
 *     KiInitDpcThresholds @ 0x140B2CB08 (KiInitDpcThresholds.c)
 * Callees:
 *     <none>
 */

void KiInitializeLegacyWatchdogProfileThresholds()
{
  unsigned int v0; // r8d
  unsigned int v1; // r9d
  unsigned int v2; // ecx

  v0 = KeDpcWatchdogProfileOffsetMs;
  if ( KeDpcWatchdogProfileOffsetMs
    && KeDpcWatchdogPeriodMs
    && KeDpcTimeoutMs
    && KeDpcTimeoutMs < (unsigned int)KeDpcWatchdogPeriodMs
    && KeDpcWatchdogProfileSingleDpcThresholdMs == -1
    && KeDpcWatchdogProfileCumulativeDpcThresholdMs == -1 )
  {
    if ( (unsigned int)KeDpcWatchdogProfileOffsetMs <= 0x3E8 )
      v0 = 1000;
    if ( v0 > KeDpcWatchdogPeriodMs )
    {
      v0 = 10000;
      if ( (unsigned int)KeDpcWatchdogPeriodMs <= 0x2710 )
        v0 = 1000;
    }
    v1 = KeDpcWatchdogPeriodMs - v0;
    KeDpcWatchdogProfileCumulativeDpcThresholdMs = KeDpcWatchdogPeriodMs - v0;
    if ( KeDpcWatchdogPeriodMs - v0 < 0x3E8 )
    {
      KeDpcWatchdogProfileCumulativeDpcThresholdMs = 1000;
      v1 = 1000;
    }
    v2 = KeDpcTimeoutMs * v1 / KeDpcWatchdogPeriodMs;
    if ( KeDpcTimeoutMs * v1 / (unsigned __int64)(unsigned int)KeDpcWatchdogPeriodMs > 0xFFFFFFFF )
      v2 = -1;
    KeDpcWatchdogProfileSingleDpcThresholdMs = v2;
    if ( KeDpcTimeoutMs - v2 > v0 )
    {
      KeDpcWatchdogProfileSingleDpcThresholdMs = 0;
      v2 = 0;
    }
    if ( KeDpcSoftTimeoutMs && v2 > KeDpcSoftTimeoutMs )
      KeDpcWatchdogProfileSingleDpcThresholdMs = KeDpcSoftTimeoutMs;
    if ( KeDpcCumulativeSoftTimeoutMs && v1 > KeDpcCumulativeSoftTimeoutMs )
      KeDpcWatchdogProfileCumulativeDpcThresholdMs = KeDpcCumulativeSoftTimeoutMs;
    if ( (_DWORD)KeDpcWatchdogProfileBufferSizeBytes == -1 )
      LODWORD(KeDpcWatchdogProfileBufferSizeBytes) = 26624 * (v0 / 0x3E8);
  }
}
