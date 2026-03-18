/*
 * XREFs of IopDropIrp @ 0x14028CDC8
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14028C3D0 (IopCopyCompleteReadIrp.c)
 *     IopCopyCompleteReadRequest @ 0x14028C5D0 (IopCopyCompleteReadRequest.c)
 *     IoRemoveIoCompletion @ 0x1402A9D60 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x1405594DC (IopIoRingCompleteIrp.c)
 *     IopFreeCompletionListPackets @ 0x140700E24 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IopDequeueIrpFromFileObject @ 0x14028CE8C (IopDequeueIrpFromFileObject.c)
 *     ObDereferenceObjectExWithTag @ 0x1402A2574 (ObDereferenceObjectExWithTag.c)
 *     IoFreeMdl @ 0x1402ACFE0 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x1402AF210 (IoFreeIrp.c)
 *     IopInterlockedAdd @ 0x14035E8E4 (IopInterlockedAdd.c)
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
