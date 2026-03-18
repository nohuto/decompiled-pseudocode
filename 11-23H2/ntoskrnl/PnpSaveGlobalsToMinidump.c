/*
 * XREFs of PnpSaveGlobalsToMinidump @ 0x1405606C0
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140551A74 (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403882BC (IoAddTriageDumpDataBlock.c)
 */

char PnpSaveGlobalsToMinidump()
{
  IoAddTriageDumpDataBlock((ULONG)&PnpDeviceActionThread, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&PnpDeviceEventThread, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&PnpDelayedRemoveWorkerThread, (PVOID)8);
  return IoAddTriageDumpDataBlock((ULONG)&PnpDeviceCompletionQueue, (PVOID)0x50);
}
