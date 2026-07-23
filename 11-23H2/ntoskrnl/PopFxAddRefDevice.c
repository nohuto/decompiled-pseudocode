/*
 * XREFs of PopFxAddRefDevice @ 0x140312734
 * Callers:
 *     PopFxQueueWorkOrder @ 0x14028C45C (PopFxQueueWorkOrder.c)
 *     PopFxActivateComponentWorker @ 0x1403126B0 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140312F48 (PopFxIdleWorkerTail.c)
 *     PopFxActivateDevice @ 0x140322EF0 (PopFxActivateDevice.c)
 *     PoFxAddComponentRelation @ 0x140587B60 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140587F80 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140588600 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405889F0 (PoFxRemoveDeviceRelation.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1405890F4 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405891E4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x140589770 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14058B2E4 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140312780 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x1405890D0 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
