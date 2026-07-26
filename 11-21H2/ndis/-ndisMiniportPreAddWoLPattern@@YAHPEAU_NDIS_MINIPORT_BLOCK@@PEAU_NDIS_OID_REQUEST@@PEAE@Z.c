/*
 * XREFs of ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C008EBFC
 * Callers:
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008FD70 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008FF50 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C0056858 (WPP_RECORDER_SF_qdL_ea_1C0056858.c)
 *     ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x1C008CEF4 (-ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C008D558 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C008D960 (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008DD90 (-ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0091A40 (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall ndisMiniportPreAddWoLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        char *a3)
{
  unsigned int v3; // ebx
  char *v4; // rsi
  _SINGLE_LIST_ENTRY *v5; // rdi
  struct _NDIS_PM_WOL_PATTERN *InformationBuffer; // rbp
  unsigned int PatternId; // edx
  int v10; // r8d
  _SINGLE_LIST_ENTRY *OidSourceHandle; // r13
  _SINGLE_LIST_ENTRY *Next; // rsi
  _SINGLE_LIST_ENTRY *i; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *WoLPatternEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v15; // r9
  int Next_high; // eax
  _NDIS_PM_WOL_PACKET WoLPacketType; // eax
  char v19[8]; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v4 = a3;
  v5 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x38u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      a2);
  InformationBuffer = (struct _NDIS_PM_WOL_PATTERN *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *v4 = 1;
  if ( !ndisIsWoLPacketTypeSupported(InformationBuffer->WoLPacketType, a1)
    && (v10 != 2 || (unsigned int)(a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) > 2) )
  {
    v3 = -1073741637;
    goto LABEL_41;
  }
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  Next = a1->WOLPatternList.Next;
  if ( Next )
  {
    while ( 1 )
    {
      v5 = Next;
      if ( ndisCompareWoLPatterns((struct _NDIS_PM_WOL_PATTERN *)&Next[6], InformationBuffer) )
        break;
      Next = Next->Next;
      if ( !Next )
      {
        v5 = 0LL;
        goto LABEL_11;
      }
    }
    for ( i = Next + 1; i; i = i->Next )
    {
      if ( i[2].Next == OidSourceHandle )
      {
        v3 = -1073676267;
        goto LABEL_23;
      }
    }
  }
LABEL_11:
  if ( (InformationBuffer->Flags & 1) != 0 )
  {
    PatternId = InformationBuffer->PatternId;
    if ( PatternId < 0xFFFF || ndisPMPatternIdExist(&a1->WOLPatternList, PatternId) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v19 = PatternId;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x39u,
          (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
          *(_QWORD *)v19);
      }
      v4 = a3;
      v3 = -1073676267;
      goto LABEL_41;
    }
  }
  WoLPatternEntry = ndisCreateWoLPatternEntry(InformationBuffer, a2->PortNumber);
  v15 = WoLPatternEntry;
  if ( WoLPatternEntry )
  {
    WoLPatternEntry->Source = OidSourceHandle;
    a1->OidContext = WoLPatternEntry;
    if ( (InformationBuffer->Flags & 1) != 0 )
    {
      Next_high = InformationBuffer->PatternId;
      goto LABEL_38;
    }
    if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x55u) )
    {
LABEL_31:
      if ( v5 )
        Next_high = HIDWORD(v5[24].Next);
      else
        Next_high = ndisGetNewPatternEntryId(&a1->WOLPatternList);
      goto LABEL_38;
    }
    WoLPacketType = InformationBuffer->WoLPacketType;
    if ( WoLPacketType == NdisPMWoLPacketMagicPacket )
    {
      Next_high = 65534;
    }
    else
    {
      if ( WoLPacketType != NdisPMWoLPacketEapolRequestIdMessage )
        goto LABEL_31;
      Next_high = 65533;
    }
LABEL_38:
    v4 = a3;
    InformationBuffer->PatternId = Next_high;
    v15->WoLPattern.PatternId = Next_high;
    v15->Id = Next_high;
    if ( v5 )
    {
      *a3 = 1;
      v15->DupLink.Next = v5 + 1;
    }
    else
    {
      *a3 = 0;
    }
    goto LABEL_41;
  }
  v3 = -1073741670;
LABEL_23:
  v4 = a3;
LABEL_41:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      PatternId,
      0xBu,
      0x3Au,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      *v4,
      v3);
  return v3;
}
