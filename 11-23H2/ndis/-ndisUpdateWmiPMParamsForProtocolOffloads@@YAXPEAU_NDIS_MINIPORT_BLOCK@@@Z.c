/*
 * XREFs of ?ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A46C
 * Callers:
 *     ?ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0093FB8 (-ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00959B0 (-ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C0093714 (-ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@.c)
 */

void __fastcall ndisUpdateWmiPMParamsForProtocolOffloads(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r10
  _SINGLE_LIST_ENTRY *Next; // rax
  _SINGLE_LIST_ENTRY *i; // r9
  struct _NDIS_PM_PARAMETERS v4; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  Next = a1->PMProtocolOffloadList.Next;
  memset(&v4, 0, sizeof(v4));
  while ( Next )
  {
    for ( i = Next + 1; i; i = i->Next )
    {
      if ( i[2].Next == (_SINGLE_LIST_ENTRY *)&ndisIntReqWmi )
        ndisEnablePMParamForProtocolOffload((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&Next[6], &v4);
    }
    Next = Next->Next;
  }
  v1->PMWmiParameters.EnabledProtocolOffloads = v4.EnabledProtocolOffloads;
}
