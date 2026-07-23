/*
 * XREFs of PopThermalInit @ 0x140B64A38
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14031E7AC (KiInitializeTimer2.c)
 *     PopInitializeWorkItem @ 0x14082245C (PopInitializeWorkItem.c)
 *     PopInitializeTimer @ 0x140848B88 (PopInitializeTimer.c)
 */

__int64 PopThermalInit()
{
  _BYTE *v0; // r8
  unsigned int i; // ecx
  unsigned int v2; // kr00_4
  __int64 result; // rax

  LOBYTE(word_140C3C770) = 1;
  qword_140C3CB78 = 0LL;
  PopThermalLock = 0LL;
  qword_140C3C898 = 0LL;
  PopThermalTelemetryLock = 0LL;
  qword_140C3C768 = 0LL;
  PopSystemThermalInfo = 0LL;
  PopInitializeTimer(
    (__int64)&PopThermalTelemetryTimer,
    (__int64)PopThermalTelemetryCallback,
    0LL,
    (__int64)PopThermalTelemetryWorker,
    0LL);
  if ( PopThermalPollingMode )
    PopThermalPollingWakesAllowed = 1;
  v0 = PopThermalTrackingThresholds;
  for ( i = 0; i < 0x834; i += 100 )
  {
    v2 = i;
    *v0++ = v2 / 0x14;
  }
  word_140C3C672 = 0;
  KiInitializeTimer2((unsigned __int64)&unk_140C3C670, (__int64)PopThermalEventTransitionTimerCallback, 0LL, 0);
  dword_140C3C66C = -1;
  byte_140C3C668 = 1;
  result = PopInitializeWorkItem(
             (__int64)&PopThermalStateTransitionWorkItem,
             (__int64)PopThermalStateTransitionWorker,
             0LL);
  qword_140C3C748 = 0LL;
  PopThermalStateTransitionContext = 0LL;
  byte_140C3C750 = 1;
  return result;
}
