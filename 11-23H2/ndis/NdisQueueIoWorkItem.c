/*
 * XREFs of NdisQueueIoWorkItem @ 0x1C003DB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisQueueIoWorkItem(
        NDIS_HANDLE NdisIoWorkItemHandle,
        NDIS_IO_WORKITEM_ROUTINE Routine,
        PVOID WorkItemContext)
{
  *((_QWORD *)NdisIoWorkItemHandle + 4) = Routine;
  *((_QWORD *)NdisIoWorkItemHandle + 5) = WorkItemContext;
  IoQueueWorkItem(
    *((PIO_WORKITEM *)NdisIoWorkItemHandle + 2),
    (PIO_WORKITEM_ROUTINE)ndisDispatchIoWorkItem,
    CriticalWorkQueue,
    NdisIoWorkItemHandle);
}
