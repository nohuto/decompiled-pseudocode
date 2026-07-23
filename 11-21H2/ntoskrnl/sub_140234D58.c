/*
 * XREFs of sub_140234D58 @ 0x140234D58
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     sub_140311870 @ 0x140311870 (sub_140311870.c)
 *     sub_140417DE0 @ 0x140417DE0 (sub_140417DE0.c)
 *     sub_140418160 @ 0x140418160 (sub_140418160.c)
 *     sub_140559FA8 @ 0x140559FA8 (sub_140559FA8.c)
 *     sub_1406ACB64 @ 0x1406ACB64 (sub_1406ACB64.c)
 * Callees:
 *     sub_14022A6A0 @ 0x14022A6A0 (sub_14022A6A0.c)
 *     sub_14028AE58 @ 0x14028AE58 (sub_14028AE58.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403476D0 @ 0x1403476D0 (sub_1403476D0.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140234D58(PIRP Irp, ULONG_PTR a2)
{
  PMDL MdlAddress; // rcx
  struct _MDL *Next; // rbx
  PKEVENT UserEvent; // rcx
  ULONG Flags; // eax
  ULONG v8; // ecx

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
    sub_1403476D0(Irp, a2);
    Flags = Irp->Flags;
  }
  LOWORD(v8) = Flags;
  if ( a2 && (Flags & 0x80u) == 0 )
  {
    sub_14028AE58(a2);
    v8 = Irp->Flags;
  }
  if ( (v8 & 0x8000) == 0 || !(unsigned int)sub_14022A6A0((volatile signed __int64 *)&Irp->Overlay, -1) )
    IoFreeIrp(Irp);
}
