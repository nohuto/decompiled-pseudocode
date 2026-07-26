/*
 * XREFs of ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095990
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0093664 (-ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C0093860 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x1C00939BC (-ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 *     ?ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A44C (-ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostRemovePMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  struct _SINGLE_LIST_ENTRY *v2; // r14
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v4; // rsi
  int v5; // ebp
  _SINGLE_LIST_ENTRY *OidSourceHandle; // rax
  _QWORD *p_Next; // rcx
  _SINGLE_LIST_ENTRY *v8; // r8
  struct _NDIS_PACKET_PATTERN_ENTRY *i; // r9
  _SINGLE_LIST_ENTRY *v10; // rdx
  _SINGLE_LIST_ENTRY *p_DupLink; // rax
  _SINGLE_LIST_ENTRY *v12; // r10
  int PatternEffectivePriority; // eax
  __int64 v14; // r9
  struct _NDIS_PACKET_PATTERN_ENTRY *v15; // r8
  int v16; // eax
  __int64 v17; // r8
  struct _SINGLE_LIST_ENTRY *v18; // rcx

  v2 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 4);
  if ( !*((_DWORD *)a1 + 10) )
  {
    v5 = **(_DWORD **)(v4 + 40);
    if ( v3 )
    {
      OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4));
      p_Next = &v3->PMProtocolOffloadList.Next;
      v8 = OidSourceHandle;
      for ( i = (struct _NDIS_PACKET_PATTERN_ENTRY *)v3->PMProtocolOffloadList.Next;
            i;
            i = (struct _NDIS_PACKET_PATTERN_ENTRY *)i->Link.Next )
      {
        if ( i->WoLPattern.PatternId == v5 )
        {
          v10 = 0LL;
          p_DupLink = &i->DupLink;
          if ( i == (struct _NDIS_PACKET_PATTERN_ENTRY *)-8LL )
            return;
          do
          {
            v12 = p_DupLink - 1;
            if ( p_DupLink[2].Next == v8 )
              break;
            v10 = p_DupLink;
            v12 = 0LL;
            p_DupLink = p_DupLink->Next;
          }
          while ( p_DupLink );
          if ( !v12 )
            return;
          if ( v10 )
          {
            v10->Next = p_DupLink->Next;
            PatternEffectivePriority = ndisGetPatternEffectivePriority(i);
            *(_DWORD *)(v14 + 36) = PatternEffectivePriority;
          }
          else if ( p_DupLink->Next )
          {
            v15 = (struct _NDIS_PACKET_PATTERN_ENTRY *)&p_DupLink->Next[-1];
            *p_Next = v15;
            v15->Link.Next = i->Link.Next;
            v16 = ndisGetPatternEffectivePriority(v15);
            *(_DWORD *)(v17 + 36) = v16;
          }
          else
          {
            *p_Next = i->Link.Next;
          }
          ExFreePoolWithTag(v12, 0);
          if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v4) == &ndisIntReqWmi )
          {
            ndisUpdateWmiPMParamsForProtocolOffloads(v3);
            ndisGetCombinedPMConfig(v3, &v3->PMCurrentParameters);
          }
          goto LABEL_19;
        }
        p_Next = &i->Link.Next;
      }
    }
    else
    {
LABEL_19:
      if ( *((_QWORD *)a1 + 3) )
        ndisDeletePatternEntry(v2 + 64, v5);
      v18 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
      if ( v18 )
      {
        if ( (*(_DWORD *)(v4 + 88) & 0x4000) == 0 )
          ndisDeletePatternEntry(v18 + 90, v5);
      }
    }
  }
}
