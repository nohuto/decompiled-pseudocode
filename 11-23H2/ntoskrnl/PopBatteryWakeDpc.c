/*
 * XREFs of PopBatteryWakeDpc @ 0x1403B5E80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x1403C6638 (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C3D180 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C3D148, 0, 0);
  _InterlockedExchange(&dword_140C3D0C0, 0);
  PopBatteryQueueWork(v0);
  ExQueueWorkItem(&stru_140C3D160, DelayedWorkQueue);
}
