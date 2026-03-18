/*
 * XREFs of PopBatteryWakeDpc @ 0x1403B5CA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x1403C6458 (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C3CFE0 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C3CFA8, 0, 0);
  _InterlockedExchange(&dword_140C3CF20, 0);
  PopBatteryQueueWork(v0);
  ExQueueWorkItem(&stru_140C3CFC0, DelayedWorkQueue);
}
