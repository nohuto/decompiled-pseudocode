/*
 * XREFs of ?ndisAddReceiveFilterToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C00833B8
 * Callers:
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085A5C (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAddReceiveFilterToList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RECEIVE_FILTER_BLOCK *a2)
{
  _LIST_ENTRY *p_ReceiveFilterList; // r9
  unsigned int v3; // r8d
  struct _NDIS_MINIPORT_BLOCK *Flink; // rax
  unsigned int FilterId; // ecx
  _LIST_ENTRY *NextMiniport; // rcx
  _LIST_ENTRY *v8; // rax

  p_ReceiveFilterList = &a1->ReceiveFilterList;
  v3 = 0;
  Flink = (struct _NDIS_MINIPORT_BLOCK *)a1->ReceiveFilterList.Flink;
  if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&a1->ReceiveFilterList )
  {
LABEL_6:
    NextMiniport = (_LIST_ENTRY *)Flink->NextMiniport;
    v8 = NextMiniport->Flink;
    if ( NextMiniport->Flink->Blink != NextMiniport )
      __fastfail(3u);
    a2->AdapterLink.Flink = v8;
    a2->AdapterLink.Blink = NextMiniport;
    v8->Blink = &a2->AdapterLink;
    NextMiniport->Flink = &a2->AdapterLink;
    ++a1->NumReceiveFilters;
  }
  else
  {
    FilterId = a2->FilterId;
    while ( Flink->PcwDatapathEventMask != FilterId )
    {
      if ( Flink->PcwDatapathEventMask <= FilterId )
      {
        Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
        if ( Flink != (struct _NDIS_MINIPORT_BLOCK *)p_ReceiveFilterList )
          continue;
      }
      goto LABEL_6;
    }
    return (unsigned int)-1073741270;
  }
  return v3;
}
