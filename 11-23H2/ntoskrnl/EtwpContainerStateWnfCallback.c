/*
 * XREFs of EtwpContainerStateWnfCallback @ 0x1405FC4F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140399044 (EtwpQueryPartitionRegistryInformation.c)
 */

__int64 EtwpContainerStateWnfCallback()
{
  __int64 v0; // rbx

  v0 = EtwpHostSiloState;
  if ( !*(_DWORD *)(EtwpHostSiloState + 4160) )
  {
    EtwpQueryPartitionRegistryInformation(
      (GUID *)(EtwpHostSiloState + 4176),
      (PVOID *)(EtwpHostSiloState + 4216),
      (_WORD *)(EtwpHostSiloState + 4224),
      (_DWORD *)(EtwpHostSiloState + 4228),
      (_QWORD *)(EtwpHostSiloState + 4208),
      (GUID *)(EtwpHostSiloState + 4192));
    ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v0 + 4168), NormalWorkQueue);
    *(_DWORD *)(v0 + 4160) = 1;
  }
  return 0LL;
}
