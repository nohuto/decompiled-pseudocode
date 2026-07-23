/*
 * XREFs of IopIoRingCompleteIrp @ 0x140559B9C
 * Callers:
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     IopUpdateIrpTransferCount @ 0x14028C930 (IopUpdateIrpTransferCount.c)
 *     IopDropIrp @ 0x14028D058 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x14028D11C (IopDequeueIrpFromFileObject.c)
 *     IopProcessBufferedIoCompletion @ 0x1402AC530 (IopProcessBufferedIoCompletion.c)
 *     IopDequeueIrpFromThread @ 0x1402AF9C0 (IopDequeueIrpFromThread.c)
 *     IopCompleteIoRingEntry @ 0x140559A1C (IopCompleteIoRingEntry.c)
 *     IopMcReleaseMdl @ 0x14055F834 (IopMcReleaseMdl.c)
 */

void __fastcall IopIoRingCompleteIrp(PIRP Irp, ULONG_PTR a2, KPRIORITY a3)
{
  void *v3; // rbp

  v3 = (void *)((unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcContext & 0xFFFFFFFFFFFFFFF8uLL);
  IopProcessBufferedIoCompletion((__int64)Irp);
  if ( a2 )
    *(_DWORD *)(a2 + 56) = Irp->IoStatus.Status;
  IopUpdateIrpTransferCount((__int64)Irp);
  if ( (Irp->Flags & 0x2000) != 0 )
    IopDequeueIrpFromFileObject((__int64)Irp, a2);
  else
    IopDequeueIrpFromThread(Irp);
  IopCompleteIoRingEntry((__int64)v3, (__int64)Irp->UserIosb, &Irp->IoStatus.0, a3);
  if ( (*(_DWORD *)(&Irp->Overlay.AllocationSize + 1) & 1) != 0 )
  {
    IopMcReleaseMdl((ULONG_PTR)Irp->MdlAddress);
    Irp->MdlAddress = 0LL;
  }
  ObfDereferenceObjectWithTag(v3, 0x49526F49u);
  Irp->Flags &= ~0x200000u;
  IopDropIrp(Irp, a2);
}
