/*
 * XREFs of PopFxReinitializeAccountingInstance @ 0x140397C14
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1403979C0 (PoFxStartDevicePowerManagement.c)
 *     PopFxClearDeviceConstraints @ 0x140589280 (PopFxClearDeviceConstraints.c)
 *     PopFxDisableBasicAccountingWorker @ 0x14058A0D0 (PopFxDisableBasicAccountingWorker.c)
 *     PopPepInitializeVetoMasks @ 0x14059F2C4 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x14059FE64 (PopPepUpdateDripsDeviceVetoMask.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void __fastcall PopFxReinitializeAccountingInstance(__int64 a1, int a2)
{
  if ( !a2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  memset((void *)(a1 + 32), 0, 0xC0uLL);
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 == 2 && !_InterlockedExchange(&PopFxBasicAccountingDisabled, 1) )
  {
    PopFxBasicAccountingDisableWorkItem.Parameter = 0LL;
    PopFxBasicAccountingDisableWorkItem.List.Flink = 0LL;
    PopFxBasicAccountingDisableWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopFxDisableBasicAccountingWorker;
    ExQueueWorkItem(&PopFxBasicAccountingDisableWorkItem, DelayedWorkQueue);
  }
}
