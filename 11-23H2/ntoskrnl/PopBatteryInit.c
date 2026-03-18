/*
 * XREFs of PopBatteryInit @ 0x140B6F9F4
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_140C3CEC8 = (__int64)&qword_140C3CEC0;
  qword_140C3CEC0 = (__int64)&qword_140C3CEC0;
  qword_140C3CED8 = (__int64)&qword_140C3CED0;
  qword_140C3CED0 = (__int64)&qword_140C3CED0;
  v0 = 4LL;
  qword_140C3CEA8 = 0LL;
  dword_140C3D04C = -1;
  PopWeakChargerCompositeState = -1;
  PopWeakChargerNotificationBatteryMiniport = -1;
  PopWeakChargerNotificationUsbStack = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140C3CFE8;
  *(_OWORD *)&xmmword_140C3D078 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140C3D088 = 0LL;
  xmmword_140C3D078 = 0LL;
  qword_140C3A428 = 0LL;
  PopWeakChargerLock = 0LL;
  xmmword_140C3D098 = 0LL;
  qword_140C3D05C = 0LL;
  byte_140C3D048 = 0;
  LOBYTE(xmmword_140C3D088) = 1;
  qword_140C3D068 = 0LL;
  dword_140C3D058 = 0;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C3CF28.Header.Lock = 8LL;
  stru_140C3CFA8.Header.WaitListHead.Blink = &stru_140C3CFA8.Header.WaitListHead;
  stru_140C3CFA8.Header.WaitListHead.Flink = &stru_140C3CFA8.Header.WaitListHead;
  qword_140C3CF80 = (__int64)PopBatteryWakeDpc;
  stru_140C3CF28.Header.WaitListHead.Blink = &stru_140C3CF28.Header.WaitListHead;
  stru_140C3CF28.Header.WaitListHead.Flink = &stru_140C3CF28.Header.WaitListHead;
  stru_140C3CFC0.WorkerRoutine = (void (__fastcall *)(void *))PopBootBatteryStatusWorker;
  LOWORD(stru_140C3CFA8.Header.Lock) = 1;
  stru_140C3CFA8.Header.Size = 6;
  stru_140C3CFA8.Header.SignalState = 0;
  qword_140C3D070 = 0LL;
  dword_140C3CF68 = 275;
  qword_140C3CF88 = 0LL;
  qword_140C3CFA0 = 0LL;
  qword_140C3CF78 = 0LL;
  stru_140C3CF28.DueTime.QuadPart = 0LL;
  stru_140C3CF28.Period = 0;
  stru_140C3CF28.Processor = 0;
  stru_140C3CFC0.Parameter = 0LL;
  stru_140C3CFC0.List.Flink = 0LL;
  byte_140C3CEB8 = 0;
  dword_140C3CF1C = 0;
  *(_QWORD *)&stru_140C3A4C0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140C3A498 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140C3A4C0.Header.WaitListHead;
  stru_140C3A4C0.Header.WaitListHead.Blink = &stru_140C3A4C0.Header.WaitListHead;
  stru_140C3A4C0.Header.WaitListHead.Flink = &stru_140C3A4C0.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140C3A4A0 = 0LL;
  qword_140C3A4B8 = 0LL;
  qword_140C3A490 = 0LL;
  stru_140C3A4C0.DueTime.QuadPart = 0LL;
  stru_140C3A4C0.Period = 0;
  stru_140C3A4C0.Processor = 0;
  byte_140C3CFE0 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
