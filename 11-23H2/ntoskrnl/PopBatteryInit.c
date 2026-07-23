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

  qword_140C3D068 = (__int64)&qword_140C3D060;
  qword_140C3D060 = (__int64)&qword_140C3D060;
  qword_140C3D078 = (__int64)&qword_140C3D070;
  qword_140C3D070 = (__int64)&qword_140C3D070;
  v0 = 4LL;
  qword_140C3D048 = 0LL;
  dword_140C3D1EC = -1;
  PopWeakChargerCompositeState = -1;
  PopWeakChargerNotificationBatteryMiniport = -1;
  PopWeakChargerNotificationUsbStack = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140C3D188;
  *(_OWORD *)&xmmword_140C3D218 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140C3D228 = 0LL;
  xmmword_140C3D218 = 0LL;
  qword_140C3A408 = 0LL;
  PopWeakChargerLock = 0LL;
  xmmword_140C3D238 = 0LL;
  qword_140C3D1FC = 0LL;
  byte_140C3D1E8 = 0;
  LOBYTE(xmmword_140C3D228) = 1;
  qword_140C3D208 = 0LL;
  dword_140C3D1F8 = 0;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C3D0C8.Header.Lock = 8LL;
  stru_140C3D148.Header.WaitListHead.Blink = &stru_140C3D148.Header.WaitListHead;
  stru_140C3D148.Header.WaitListHead.Flink = &stru_140C3D148.Header.WaitListHead;
  qword_140C3D120 = (__int64)PopBatteryWakeDpc;
  stru_140C3D0C8.Header.WaitListHead.Blink = &stru_140C3D0C8.Header.WaitListHead;
  stru_140C3D0C8.Header.WaitListHead.Flink = &stru_140C3D0C8.Header.WaitListHead;
  stru_140C3D160.WorkerRoutine = (void (__fastcall *)(void *))PopBootBatteryStatusWorker;
  LOWORD(stru_140C3D148.Header.Lock) = 1;
  stru_140C3D148.Header.Size = 6;
  stru_140C3D148.Header.SignalState = 0;
  qword_140C3D210 = 0LL;
  dword_140C3D108 = 275;
  qword_140C3D128 = 0LL;
  qword_140C3D140 = 0LL;
  qword_140C3D118 = 0LL;
  stru_140C3D0C8.DueTime.QuadPart = 0LL;
  stru_140C3D0C8.Period = 0;
  stru_140C3D0C8.Processor = 0;
  stru_140C3D160.Parameter = 0LL;
  stru_140C3D160.List.Flink = 0LL;
  byte_140C3D058 = 0;
  dword_140C3D0BC = 0;
  *(_QWORD *)&stru_140C3A460.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140C3A438 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140C3A460.Header.WaitListHead;
  stru_140C3A460.Header.WaitListHead.Blink = &stru_140C3A460.Header.WaitListHead;
  stru_140C3A460.Header.WaitListHead.Flink = &stru_140C3A460.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140C3A440 = 0LL;
  qword_140C3A458 = 0LL;
  qword_140C3A430 = 0LL;
  stru_140C3A460.DueTime.QuadPart = 0LL;
  stru_140C3A460.Period = 0;
  stru_140C3A460.Processor = 0;
  byte_140C3D180 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
