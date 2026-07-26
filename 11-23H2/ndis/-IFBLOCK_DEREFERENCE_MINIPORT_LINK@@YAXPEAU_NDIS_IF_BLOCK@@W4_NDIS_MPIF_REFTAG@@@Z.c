/*
 * XREFs of ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0021544
 * Callers:
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00214DC (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000CEA0 (NdisDereferenceWithTag.c)
 */

void __fastcall IFBLOCK_DEREFERENCE_MINIPORT_LINK(struct _NDIS_IF_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx

  NdisDereferenceWithTag((ULONG_PTR)a1->MpRefCountTracker, a2);
  if ( a1->MiniportLinkReference-- == 1 )
  {
    Miniport = a1->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
}
