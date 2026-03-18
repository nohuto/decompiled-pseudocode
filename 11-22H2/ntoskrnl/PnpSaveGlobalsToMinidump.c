/*
 * XREFs of PnpSaveGlobalsToMinidump @ 0x140560760
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140551B14 (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403AC964 (IoAddTriageDumpDataBlock.c)
 */

char PnpSaveGlobalsToMinidump()
{
  IoAddTriageDumpDataBlock((ULONG)&PnpDeviceActionThread, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&PnpDeviceEventThread, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&PnpDelayedRemoveWorkerThread, (PVOID)8);
  return IoAddTriageDumpDataBlock((ULONG)&PnpDeviceCompletionQueue, (PVOID)0x50);
}
