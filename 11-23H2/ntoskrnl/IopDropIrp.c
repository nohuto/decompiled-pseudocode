/*
 * XREFs of IopDropIrp @ 0x14028D058
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14028C660 (IopCopyCompleteReadIrp.c)
 *     IopCopyCompleteReadRequest @ 0x14028C860 (IopCopyCompleteReadRequest.c)
 *     IoRemoveIoCompletion @ 0x1402A9FF0 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x140559B9C (IopIoRingCompleteIrp.c)
 *     IopFreeCompletionListPackets @ 0x140701034 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IopDequeueIrpFromFileObject @ 0x14028D11C (IopDequeueIrpFromFileObject.c)
 *     ObDereferenceObjectExWithTag @ 0x1402A2804 (ObDereferenceObjectExWithTag.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     IopInterlockedAdd @ 0x14035EA84 (IopInterlockedAdd.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall IopDropIrp(PIRP Irp, ULONG_PTR a2)
{
  PMDL MdlAddress; // rcx
  struct _MDL *Next; // rbx
  PKEVENT UserEvent; // rcx
  ULONG Flags; // eax

  if ( (Irp->Flags & 0x20) != 0 )
    ExFreePoolWithTag(Irp->AssociatedIrp.MasterIrp, 0);
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    do
    {
      Next = MdlAddress->Next;
      IoFreeMdl(MdlAddress);
      MdlAddress = Next;
    }
    while ( Next );
  }
  UserEvent = Irp->UserEvent;
  if ( UserEvent && a2 && (Irp->Flags & 4) == 0 )
    ObfDereferenceObject(UserEvent);
  Flags = Irp->Flags;
  if ( (Flags & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject(Irp, a2);
    Flags = Irp->Flags;
  }
  if ( a2 && (Flags & 0x80u) == 0 )
    ObDereferenceObjectExWithTag(a2);
  if ( (Irp->Flags & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd(&Irp->Overlay, 0xFFFFFFFFLL) )
    IoFreeIrp(Irp);
}
