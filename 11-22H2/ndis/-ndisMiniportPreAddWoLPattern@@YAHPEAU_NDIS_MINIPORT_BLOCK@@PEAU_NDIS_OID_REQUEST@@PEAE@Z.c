/*
 * XREFs of ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094BC0
 * Callers:
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095D50 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095F30 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A098 (WPP_RECORDER_SF_D.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C005BB74 (WPP_RECORDER_SF_qdL_ea_1C005BB74.c)
 *     ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x1C0092F18 (-ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C009357C (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C009396C (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093D48 (-ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0097A40 (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall ndisMiniportPreAddWoLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        char *a3)
{
  unsigned int v3; // ebx
  _SINGLE_LIST_ENTRY *v5; // rdi
  struct _NDIS_PM_WOL_PATTERN *InformationBuffer; // rbp
  unsigned int PatternId; // edx
  int v10; // r8d
  _SINGLE_LIST_ENTRY *OidSourceHandle; // rax
  _SINGLE_LIST_ENTRY *Next; // rsi
  _SINGLE_LIST_ENTRY *v13; // rsi
  _SINGLE_LIST_ENTRY *v14; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *WoLPatternEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v16; // r9
  int Next_high; // eax
  _NDIS_PM_WOL_PACKET WoLPacketType; // eax
  char v20[8]; // [rsp+28h] [rbp-40h]
  _SINGLE_LIST_ENTRY *v21; // [rsp+78h] [rbp+10h]

  v3 = 0;
  v5 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x38u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      a2);
  InformationBuffer = (struct _NDIS_PM_WOL_PATTERN *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *a3 = 1;
  if ( !ndisIsWoLPacketTypeSupported(InformationBuffer->WoLPacketType, a1)
    && (v10 != 2 || (unsigned int)(a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) > 2) )
  {
    v3 = -1073741637;
    goto LABEL_42;
  }
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  v21 = OidSourceHandle;
  Next = a1->WOLPatternList.Next;
  if ( !Next )
  {
    v13 = OidSourceHandle;
LABEL_12:
    if ( (InformationBuffer->Flags & 1) != 0 )
    {
      PatternId = InformationBuffer->PatternId;
      if ( PatternId < 0xFFFF || ndisPMPatternIdExist(&a1->WOLPatternList, PatternId) )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v20 = PatternId;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x39u,
            (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
            *(_QWORD *)v20);
        }
        v3 = -1073676267;
        goto LABEL_42;
      }
    }
    WoLPatternEntry = ndisCreateWoLPatternEntry(InformationBuffer, a2->PortNumber);
    v16 = WoLPatternEntry;
    if ( !WoLPatternEntry )
    {
      v3 = -1073741670;
      goto LABEL_42;
    }
    WoLPatternEntry->Source = v13;
    a1->OidContext = WoLPatternEntry;
    if ( (InformationBuffer->Flags & 1) != 0 )
    {
      Next_high = InformationBuffer->PatternId;
      goto LABEL_39;
    }
    if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x55u) )
    {
LABEL_32:
      if ( v5 )
        Next_high = HIDWORD(v5[24].Next);
      else
        Next_high = ndisGetNewPatternEntryId(&a1->WOLPatternList);
      goto LABEL_39;
    }
    WoLPacketType = InformationBuffer->WoLPacketType;
    if ( WoLPacketType == NdisPMWoLPacketMagicPacket )
    {
      Next_high = 65534;
    }
    else
    {
      if ( WoLPacketType != NdisPMWoLPacketEapolRequestIdMessage )
        goto LABEL_32;
      Next_high = 65533;
    }
LABEL_39:
    InformationBuffer->PatternId = Next_high;
    v16->WoLPattern.PatternId = Next_high;
    v16->Id = Next_high;
    if ( v5 )
    {
      *a3 = 1;
      v16->DupLink.Next = v5 + 1;
    }
    else
    {
      *a3 = 0;
    }
    goto LABEL_42;
  }
  while ( 1 )
  {
    v5 = Next;
    if ( ndisCompareWoLPatterns((struct _NDIS_PM_WOL_PATTERN *)&Next[6], InformationBuffer) )
      break;
    Next = Next->Next;
    if ( !Next )
    {
      v5 = 0LL;
LABEL_11:
      v13 = v21;
      goto LABEL_12;
    }
  }
  v14 = Next + 1;
  if ( Next == (_SINGLE_LIST_ENTRY *)-8LL )
    goto LABEL_11;
  v13 = v21;
  while ( v14[2].Next != v21 )
  {
    v14 = v14->Next;
    if ( !v14 )
      goto LABEL_12;
  }
  v3 = -1073676267;
LABEL_42:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      PatternId,
      0xBu,
      0x3Au,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      *a3,
      v3);
  return v3;
}
