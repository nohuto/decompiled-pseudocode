/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140B71C9C
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140B51F08 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x14082245C (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x140860DD4 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x140860E10 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140B4EF98 (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140C3F168 = 0LL;
  stru_140C3F0F8.Header.SignalState = 0;
  dword_140C3F1A8 = 0;
  qword_140C3F300 = -1LL;
  unk_140C3F170 = 0;
  dword_140C3F174 = 0;
  stru_140C3F0F8.Header.WaitListHead.Blink = &stru_140C3F0F8.Header.WaitListHead;
  stru_140C3F0F8.Header.WaitListHead.Flink = &stru_140C3F0F8.Header.WaitListHead;
  LOWORD(stru_140C3F0F8.Header.Lock) = 1;
  stru_140C3F0F8.Header.Size = 6;
  dword_140C3F118 = -1946157056;
  byte_140C3F178 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140C3F180,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C3F1B0, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C3F250, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140C3F308 = 0LL;
  dword_140C3F310 = 0;
  PopDirectedDripsDiagInitialize(0);
  PopDirectedDripsUmInitialize();
}
