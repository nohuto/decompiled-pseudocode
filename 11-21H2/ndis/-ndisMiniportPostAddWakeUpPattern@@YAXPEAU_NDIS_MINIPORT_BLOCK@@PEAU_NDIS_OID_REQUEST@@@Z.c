/*
 * XREFs of ?ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008E86C
 * Callers:
 *     ?ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008F4A0 (-ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetAddWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091E50 (-ndisPostSetAddWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x1C008DBFC (-ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 */

void __fastcall ndisMiniportPostAddWakeUpPattern(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_PACKET_PATTERN_ENTRY *OidContext; // rdi
  _SINGLE_LIST_ENTRY *p_DupLink; // rcx
  _SINGLE_LIST_ENTRY *Next; // r8

  OidContext = (struct _NDIS_PACKET_PATTERN_ENTRY *)a1->OidContext;
  a1->OidContext = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x14u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      a2);
  p_DupLink = &OidContext->DupLink;
  Next = OidContext->DupLink.Next;
  if ( Next )
  {
    p_DupLink->Next = 0LL;
    p_DupLink->Next = Next->Next;
    Next->Next = p_DupLink;
  }
  else
  {
    ndisInsertPatternListEntry(&a1->PatternList, OidContext);
  }
}
