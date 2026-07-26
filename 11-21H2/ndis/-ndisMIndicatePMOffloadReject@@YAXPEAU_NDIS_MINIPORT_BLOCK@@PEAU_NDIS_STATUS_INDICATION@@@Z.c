/*
 * XREFs of ?ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008DFE0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C008D854 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0094424 (-ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMIndicatePMOffloadReject(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  char v2; // bp
  _SINGLE_LIST_ENTRY *p_PMProtocolOffloadList; // rcx
  int v6; // edx
  _SINGLE_LIST_ENTRY *i; // rbx
  _SINGLE_LIST_ENTRY *v8; // rbx
  _SINGLE_LIST_ENTRY *v9; // rcx
  void **p_Next; // rcx

  v2 = 0;
  if ( a2->StatusBufferSize >= 4 )
  {
    p_PMProtocolOffloadList = &a1->PMProtocolOffloadList;
    v6 = *(_DWORD *)a2->StatusBuffer;
    for ( i = p_PMProtocolOffloadList->Next; i; i = i->Next )
    {
      if ( HIDWORD(i[24].Next) == v6 )
      {
        p_PMProtocolOffloadList->Next = i->Next;
        LODWORD(a2->NdisReserved[2]) = 0;
        v8 = i + 1;
        if ( v8 )
        {
          do
          {
            v9 = v8;
            v8 = v8->Next;
            p_Next = (void **)&v9[-1].Next;
            if ( p_Next[3] == &ndisIntReqWmi )
              v2 = 1;
            ExFreePoolWithTag(p_Next, 0);
            ++LODWORD(a2->NdisReserved[2]);
          }
          while ( v8 );
          if ( v2 )
          {
            ndisUpdateWmiPMParamsForProtocolOffloads(a1);
            ndisGetCombinedPMConfig(a1, &a1->PMCurrentParameters);
          }
        }
        return;
      }
      p_PMProtocolOffloadList = i;
    }
  }
}
