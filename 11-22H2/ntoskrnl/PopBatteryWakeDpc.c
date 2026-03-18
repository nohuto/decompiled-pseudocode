/*
 * XREFs of PopBatteryWakeDpc @ 0x1403B5610
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x1403C5DF8 (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C3D220 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C3D1E8, 0, 0);
  _InterlockedExchange(&dword_140C3D160, 0);
  PopBatteryQueueWork(v0);
  ExQueueWorkItem(&stru_140C3D200, DelayedWorkQueue);
}
