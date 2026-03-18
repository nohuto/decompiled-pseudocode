/*
 * XREFs of PopFxAddRefDevice @ 0x1403124A4
 * Callers:
 *     PopFxQueueWorkOrder @ 0x14028C1CC (PopFxQueueWorkOrder.c)
 *     PopFxActivateComponentWorker @ 0x140312420 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140312CB8 (PopFxIdleWorkerTail.c)
 *     PopFxActivateDevice @ 0x140322C60 (PopFxActivateDevice.c)
 *     PoFxAddComponentRelation @ 0x140587670 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140587A90 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140588110 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140588500 (PoFxRemoveDeviceRelation.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140588C04 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140588CF4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x140589280 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14058ADF4 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1403124F0 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x140588BE0 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
