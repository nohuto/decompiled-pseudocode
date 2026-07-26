/*
 * XREFs of ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094990
 * Callers:
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095B90 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A098 (WPP_RECORDER_SF_D.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C005BB74 (WPP_RECORDER_SF_qdL_ea_1C005BB74.c)
 *     ?ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z @ 0x1C0092E64 (-ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z.c)
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x1C0093300 (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C009396C (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093BE0 (-ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0097A40 (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall ndisMiniportPreAddProtocolOffload(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        char *a3)
{
  unsigned int v3; // ebx
  _SINGLE_LIST_ENTRY *v5; // rdi
  struct _NDIS_PM_PROTOCOL_OFFLOAD *InformationBuffer; // rbp
  unsigned int v9; // edx
  _SINGLE_LIST_ENTRY *OidSourceHandle; // rax
  struct _SINGLE_LIST_ENTRY *p_PMProtocolOffloadList; // rcx
  _SINGLE_LIST_ENTRY *v12; // r12
  _SINGLE_LIST_ENTRY *Next; // rsi
  _SINGLE_LIST_ENTRY *i; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *PMProtocolOffloadEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v16; // r9
  unsigned int ProtocolOffloadId; // eax
  char v19[8]; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v5 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x5Cu,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      a2);
  InformationBuffer = (struct _NDIS_PM_PROTOCOL_OFFLOAD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *a3 = 1;
  if ( ndisIsPMProtocolOffloadSupported(InformationBuffer->ProtocolOffloadType, a1) )
  {
    OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
    p_PMProtocolOffloadList = &a1->PMProtocolOffloadList;
    v12 = OidSourceHandle;
    Next = a1->PMProtocolOffloadList.Next;
    if ( Next )
    {
      while ( 1 )
      {
        v5 = Next;
        if ( ndisComparePMProtocolOffloads((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&Next[6], InformationBuffer) )
          break;
        Next = Next->Next;
        if ( !Next )
        {
          v5 = 0LL;
          goto LABEL_9;
        }
      }
      for ( i = Next + 1; i; i = i->Next )
      {
        if ( i[2].Next == v12 )
        {
          v3 = -1073676267;
          goto LABEL_32;
        }
      }
LABEL_9:
      p_PMProtocolOffloadList = &a1->PMProtocolOffloadList;
    }
    if ( (InformationBuffer->Flags & 1) != 0
      && ((v9 = InformationBuffer->ProtocolOffloadId, v9 < 0xFFFF) || ndisPMPatternIdExist(p_PMProtocolOffloadList, v9)) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v19 = v9;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x5Du,
          (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
          *(_QWORD *)v19);
      }
      v3 = -1073676267;
    }
    else
    {
      PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(InformationBuffer, a2->PortNumber);
      v16 = PMProtocolOffloadEntry;
      if ( PMProtocolOffloadEntry )
      {
        PMProtocolOffloadEntry->Source = v12;
        a1->OidContext = PMProtocolOffloadEntry;
        if ( (InformationBuffer->Flags & 1) != 0 )
        {
          ProtocolOffloadId = InformationBuffer->ProtocolOffloadId;
        }
        else if ( v5 )
        {
          ProtocolOffloadId = HIDWORD(v5[24].Next);
        }
        else
        {
          ProtocolOffloadId = ndisGetNewPatternEntryId(&a1->PMProtocolOffloadList);
        }
        InformationBuffer->ProtocolOffloadId = ProtocolOffloadId;
        v16->WoLPattern.PatternId = ProtocolOffloadId;
        v16->Id = ProtocolOffloadId;
        if ( v5 )
        {
          *a3 = 1;
          v16->DupLink.Next = v5 + 1;
        }
        else
        {
          *a3 = 0;
        }
      }
      else
      {
        v3 = -1073741670;
      }
    }
  }
  else
  {
    v3 = -1073741637;
  }
LABEL_32:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x5Eu,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      *a3,
      v3);
  return v3;
}
