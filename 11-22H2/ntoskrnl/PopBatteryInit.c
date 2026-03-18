/*
 * XREFs of PopBatteryInit @ 0x140B709E4
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_140C3D108 = (__int64)&qword_140C3D100;
  qword_140C3D100 = (__int64)&qword_140C3D100;
  qword_140C3D118 = (__int64)&qword_140C3D110;
  qword_140C3D110 = (__int64)&qword_140C3D110;
  v0 = 4LL;
  qword_140C3D0E8 = 0LL;
  dword_140C3D28C = -1;
  PopWeakChargerCompositeState = -1;
  PopWeakChargerNotificationBatteryMiniport = -1;
  PopWeakChargerNotificationUsbStack = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140C3D228;
  *(_OWORD *)&xmmword_140C3D2B8 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140C3D2C8 = 0LL;
  xmmword_140C3D2B8 = 0LL;
  qword_140C3A428 = 0LL;
  PopWeakChargerLock = 0LL;
  xmmword_140C3D2D8 = 0LL;
  qword_140C3D29C = 0LL;
  byte_140C3D288 = 0;
  LOBYTE(xmmword_140C3D2C8) = 1;
  qword_140C3D2A8 = 0LL;
  dword_140C3D298 = 0;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C3D168.Header.Lock = 8LL;
  stru_140C3D1E8.Header.WaitListHead.Blink = &stru_140C3D1E8.Header.WaitListHead;
  stru_140C3D1E8.Header.WaitListHead.Flink = &stru_140C3D1E8.Header.WaitListHead;
  qword_140C3D1C0 = (__int64)PopBatteryWakeDpc;
  stru_140C3D168.Header.WaitListHead.Blink = &stru_140C3D168.Header.WaitListHead;
  stru_140C3D168.Header.WaitListHead.Flink = &stru_140C3D168.Header.WaitListHead;
  stru_140C3D200.WorkerRoutine = (void (__fastcall *)(void *))PopBootBatteryStatusWorker;
  LOWORD(stru_140C3D1E8.Header.Lock) = 1;
  stru_140C3D1E8.Header.Size = 6;
  stru_140C3D1E8.Header.SignalState = 0;
  qword_140C3D2B0 = 0LL;
  dword_140C3D1A8 = 275;
  qword_140C3D1C8 = 0LL;
  qword_140C3D1E0 = 0LL;
  qword_140C3D1B8 = 0LL;
  stru_140C3D168.DueTime.QuadPart = 0LL;
  stru_140C3D168.Period = 0;
  stru_140C3D168.Processor = 0;
  stru_140C3D200.Parameter = 0LL;
  stru_140C3D200.List.Flink = 0LL;
  byte_140C3D0F8 = 0;
  dword_140C3D15C = 0;
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
  byte_140C3D220 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
