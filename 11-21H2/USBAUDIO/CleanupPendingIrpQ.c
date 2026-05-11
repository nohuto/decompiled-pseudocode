/*
 * XREFs of CleanupPendingIrpQ @ 0x1C00321C8
 * Callers:
 *     ExitIrpThreadAndQueue @ 0x1C0002B40 (ExitIrpThreadAndQueue.c)
 * Callees:
 *     <none>
 */

PIRP __fastcall CleanupPendingIrpQ(struct _IO_CSQ *a1)
{
  struct _IO_CSQ *v1; // rdi
  PIRP result; // rax
  IRP *v3; // rbx

  v1 = a1 + 9;
  while ( 1 )
  {
    result = IoCsqRemoveNextIrp(v1, 0LL);
    v3 = result;
    if ( !result )
      break;
    ExFreePool(result->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink);
    v3->IoStatus.Information = 0LL;
    v3->IoStatus.Status = -1073741536;
    IofCompleteRequest(v3, 0);
  }
  return result;
}
