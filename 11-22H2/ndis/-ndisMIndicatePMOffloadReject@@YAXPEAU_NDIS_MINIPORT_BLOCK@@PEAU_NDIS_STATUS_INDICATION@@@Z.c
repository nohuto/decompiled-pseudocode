/*
 * XREFs of ?ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0093F98
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E040 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C0093860 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A44C (-ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMIndicatePMOffloadReject(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  char v2; // bp
  int v5; // edx
  _SINGLE_LIST_ENTRY *p_PMProtocolOffloadList; // rax
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v8; // rcx
  _SINGLE_LIST_ENTRY *v9; // rbx
  _SINGLE_LIST_ENTRY *v10; // rcx
  void **p_Next; // rcx

  v2 = 0;
  if ( a2->StatusBufferSize >= 4 )
  {
    v5 = *(_DWORD *)a2->StatusBuffer;
    p_PMProtocolOffloadList = &a1->PMProtocolOffloadList;
    Next = a1->PMProtocolOffloadList.Next;
    if ( Next )
    {
      while ( 1 )
      {
        v8 = Next->Next;
        if ( HIDWORD(Next[24].Next) == v5 )
          break;
        p_PMProtocolOffloadList = Next;
        Next = Next->Next;
        if ( !v8 )
          return;
      }
      p_PMProtocolOffloadList->Next = v8;
      LODWORD(a2->NdisReserved[2]) = 0;
      v9 = Next + 1;
      if ( v9 )
      {
        do
        {
          v10 = v9;
          v9 = v9->Next;
          p_Next = (void **)&v10[-1].Next;
          if ( p_Next[3] == &ndisIntReqWmi )
            v2 = 1;
          ExFreePoolWithTag(p_Next, 0);
          ++LODWORD(a2->NdisReserved[2]);
        }
        while ( v9 );
        if ( v2 )
        {
          ndisUpdateWmiPMParamsForProtocolOffloads(a1);
          ndisGetCombinedPMConfig(a1, &a1->PMCurrentParameters);
        }
      }
    }
  }
}
