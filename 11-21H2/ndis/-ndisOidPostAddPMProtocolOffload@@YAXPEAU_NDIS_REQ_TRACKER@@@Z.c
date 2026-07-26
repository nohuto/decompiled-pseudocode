/*
 * XREFs of ?ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008F250
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C008D6D0 (-ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C008D854 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x1C008D9D4 (-ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 *     ?ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x1C008DBFC (-ndisInsertPatternListEntry@@YAXPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 */

void __fastcall ndisOidPostAddPMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  int v5; // eax
  struct _NDIS_PACKET_PATTERN_ENTRY *v6; // r9
  _SINGLE_LIST_ENTRY *p_DupLink; // rcx
  _SINGLE_LIST_ENTRY *Next; // r8
  __int64 v9; // r9
  int PatternEffectivePriority; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  void *v17; // rcx
  void *v18; // rcx
  void *OidContext; // rcx

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *(_DWORD *)(v1 + 88);
  if ( (v5 & 0x40000) == 0 && (v5 & 0x80000) == 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v3 )
      {
        v17 = *(void **)(v1 + 160);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
      }
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v18 = *(void **)(v1 + 160);
          if ( v18 )
            ExFreePoolWithTag(v18, 0);
        }
      }
      if ( *(_QWORD *)a1 )
      {
        OidContext = v4->OidContext;
        v4->OidContext = 0LL;
        if ( OidContext )
          ExFreePoolWithTag(OidContext, 0);
        if ( *(_DWORD *)(v1 + 48) >= 0x98u )
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = 0;
      }
    }
    else
    {
      if ( v4 )
      {
        v6 = (struct _NDIS_PACKET_PATTERN_ENTRY *)v4->OidContext;
        v4->OidContext = 0LL;
        p_DupLink = &v6->DupLink;
        Next = v6->DupLink.Next;
        if ( Next )
        {
          p_DupLink->Next = 0LL;
          p_DupLink->Next = Next->Next;
          Next->Next = p_DupLink;
          PatternEffectivePriority = ndisGetPatternEffectivePriority((struct _NDIS_PACKET_PATTERN_ENTRY *)&Next[-1]);
          *(_DWORD *)(v11 + 28) = PatternEffectivePriority;
        }
        else
        {
          ndisInsertPatternListEntry(&v4->PMProtocolOffloadList, v6);
          *(_DWORD *)(v9 + 36) = *(_DWORD *)(v9 + 32);
        }
        if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqWmi )
        {
          ndisEnablePMParamForProtocolOffload(*(struct _NDIS_PM_PROTOCOL_OFFLOAD **)(v1 + 40), &v4->PMWmiParameters);
          ndisGetCombinedPMConfig(v4, &v4->PMCurrentParameters);
        }
      }
      if ( *((_QWORD *)a1 + 3) )
      {
        v12 = *(_QWORD *)(v1 + 40);
        v13 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v13 + 196) = *(_DWORD *)(v12 + 148);
        *(_DWORD *)(v13 + 40) = *(_DWORD *)(v12 + 148);
        *(_QWORD *)v13 = *(_QWORD *)(v3 + 512);
        *(_QWORD *)(v3 + 512) = v13;
      }
      v14 = *((_QWORD *)a1 + 1);
      if ( v14 )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v15 = *(_QWORD *)(v1 + 40);
          v16 = *(_QWORD *)(v1 + 160);
          *(_DWORD *)(v16 + 196) = *(_DWORD *)(v15 + 148);
          *(_DWORD *)(v16 + 40) = *(_DWORD *)(v15 + 148);
          *(_QWORD *)v16 = *(_QWORD *)(v14 + 720);
          *(_QWORD *)(v14 + 720) = v16;
        }
      }
    }
  }
}
