/*
 * XREFs of ?ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x1C003DC2C
 * Callers:
 *     ?ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094784 (-ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094830 (-ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095220 (-ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisInsertPatternListEntry(struct _SINGLE_LIST_ENTRY *a1, struct _NDIS_PACKET_PATTERN_ENTRY *a2)
{
  _SINGLE_LIST_ENTRY *i; // rax

  for ( i = a1->Next; i; i = i->Next )
  {
    if ( LODWORD(i[5].Next) > a2->Id )
      break;
    a1 = i;
  }
  a2->Link = (_SINGLE_LIST_ENTRY)a1->Next;
  a1->Next = &a2->Link;
}
