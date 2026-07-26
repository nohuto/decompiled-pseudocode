/*
 * XREFs of ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009A1E8
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095F50 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062ECC (WPP_RECORDER_SF_LL_ea_1C0062ECC.c)
 *     ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x1C0092F38 (-ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C009359C (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093D68 (-ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSourcePreAddWoLPattern(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        char *a4)
{
  unsigned int v8; // ebx
  struct _NDIS_PM_WOL_PATTERN *InformationBuffer; // rbp
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdx
  _SINGLE_LIST_ENTRY *Next; // rdi
  struct _NDIS_PACKET_PATTERN_ENTRY *WoLPatternEntry; // rcx

  v8 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x36u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      a3);
  InformationBuffer = (struct _NDIS_PM_WOL_PATTERN *)a3->DATA.QUERY_INFORMATION.InformationBuffer;
  *a4 = 1;
  if ( a1 )
    MiniportHandle = a1->MiniportHandle;
  else
    MiniportHandle = a2->Miniport;
  if ( ndisIsWoLPacketTypeSupported(InformationBuffer->WoLPacketType, MiniportHandle) )
  {
    if ( a1 )
      Next = a1->WOLPatternList.Next;
    else
      Next = a2->WOLPatternList.Next;
    while ( Next )
    {
      if ( ndisCompareWoLPatterns((struct _NDIS_PM_WOL_PATTERN *)&Next[6], InformationBuffer) )
      {
        v8 = -1073676267;
        goto LABEL_18;
      }
      Next = Next->Next;
    }
    WoLPatternEntry = ndisCreateWoLPatternEntry(InformationBuffer, a3->PortNumber);
    if ( WoLPatternEntry )
    {
      WoLPatternEntry->Source = *(void **)&a3->NdisReserved[32];
      *(_QWORD *)&a3->NdisReserved[88] = WoLPatternEntry;
      *a4 = 0;
    }
    else
    {
      v8 = -1073741670;
    }
  }
  else
  {
    v8 = -1073741637;
  }
LABEL_18:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x37u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      *a4,
      v8);
  return v8;
}
