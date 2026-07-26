/*
 * XREFs of ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0099334
 * Callers:
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095D70 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095F50 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A228 (WPP_RECORDER_SF_D.c)
 *     memcmp @ 0x1C0038280 (memcmp.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C005BB94 (WPP_RECORDER_SF_qdL_ea_1C005BB94.c)
 *     ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1C00934BC (-ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C009398C (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0097A60 (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall ndisSetAddWakeUpPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *PatternOffset,
        char *a3)
{
  _SINGLE_LIST_ENTRY *v3; // r13
  UCHAR *NdisReserved; // r9
  struct _NDIS_OID_REQUEST *v6; // rbp
  int v8; // r14d
  unsigned int InformationBufferLength; // r8d
  struct _NDIS_PM_PACKET_PATTERN *InformationBuffer; // rsi
  __int64 MaskSize; // rax
  unsigned int v12; // ebx
  unsigned int v14; // ecx
  __int64 i; // rcx
  struct _SINGLE_LIST_ENTRY *p_PatternList; // rax
  _SINGLE_LIST_ENTRY *Next; // rdi
  unsigned int v18; // eax
  unsigned int Reserved; // eax
  size_t v20; // r8
  unsigned int Next_high; // eax
  int v22; // eax
  _SINGLE_LIST_ENTRY *v23; // r14
  unsigned int v24; // edx
  int v25; // edx
  _SINGLE_LIST_ENTRY *j; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *WakeUpPatternEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v28; // r9
  unsigned int NewPatternEntryId; // eax
  char v30[8]; // [rsp+28h] [rbp-70h]
  _SINGLE_LIST_ENTRY *v31; // [rsp+48h] [rbp-50h]
  unsigned int v32; // [rsp+A0h] [rbp+8h]
  unsigned int v33; // [rsp+A8h] [rbp+10h]
  unsigned int v34; // [rsp+B0h] [rbp+18h]
  int v35; // [rsp+B8h] [rbp+20h]

  v3 = 0LL;
  NdisReserved = PatternOffset->NdisReserved;
  v6 = PatternOffset;
  v8 = 24;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x18u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      PatternOffset);
    NdisReserved = v6->NdisReserved;
  }
  a1->OidContext = 0LL;
  v6->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  InformationBufferLength = v6->DATA.QUERY_INFORMATION.InformationBufferLength;
  *a3 = 1;
  if ( InformationBufferLength < 0x18 )
    goto LABEL_13;
  InformationBuffer = (struct _NDIS_PM_PACKET_PATTERN *)v6->DATA.QUERY_INFORMATION.InformationBuffer;
  MaskSize = InformationBuffer->MaskSize;
  if ( !(_DWORD)MaskSize
    || (PatternOffset = (struct _NDIS_OID_REQUEST *)InformationBuffer->PatternOffset,
        (unsigned __int64)PatternOffset < MaskSize + 24)
    || (v14 = (_DWORD)PatternOffset + InformationBuffer->PatternSize, v14 < (unsigned int)PatternOffset) )
  {
    v12 = -1073676267;
LABEL_6:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)PatternOffset,
        0xBu,
        0x1Bu,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
        (char)a1,
        *a3,
        v12);
    return v12;
  }
  if ( InformationBufferLength < v14 )
  {
    v8 = (_DWORD)PatternOffset + InformationBuffer->PatternSize;
LABEL_13:
    v12 = -1073676268;
    v6->DATA.QUERY_INFORMATION.BytesNeeded = v8;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v12;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x1Au,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids);
    goto LABEL_6;
  }
  for ( i = (__int64)NdisReserved; _bittest((const signed __int32 *)(i + 16), 0xEu); i = *(_QWORD *)(i + 24) + 72LL )
    ;
  p_PatternList = &a1->PatternList;
  Next = a1->PatternList.Next;
  v12 = -1073676267;
  v31 = *(_SINGLE_LIST_ENTRY **)(i + 32);
  if ( !Next )
  {
LABEL_25:
    v23 = 0LL;
    goto LABEL_26;
  }
  while ( 1 )
  {
    if ( InformationBuffer->PatternSize != LODWORD(Next[8].Next) || InformationBuffer->MaskSize != LODWORD(Next[7].Next) )
      goto LABEL_23;
    v18 = InformationBuffer->PatternOffset;
    InformationBuffer->PatternOffset = 0;
    v32 = v18;
    Reserved = InformationBuffer->Reserved;
    InformationBuffer->Reserved = 0;
    v34 = Reserved;
    v20 = LODWORD(Next[7].Next) + 24LL;
    Next_high = HIDWORD(Next[7].Next);
    HIDWORD(Next[7].Next) = 0;
    v33 = Next_high;
    v22 = HIDWORD(Next[6].Next);
    HIDWORD(Next[6].Next) = 0;
    v35 = v22;
    if ( !memcmp(InformationBuffer, &Next[6], v20)
      && !memcmp((char *)InformationBuffer + v32, (char *)&Next[6] + v33, LODWORD(Next[8].Next)) )
    {
      break;
    }
    InformationBuffer->PatternOffset = v32;
    InformationBuffer->Reserved = v34;
    HIDWORD(Next[7].Next) = v33;
    HIDWORD(Next[6].Next) = v35;
LABEL_23:
    Next = Next->Next;
    if ( !Next )
    {
      p_PatternList = &a1->PatternList;
      goto LABEL_25;
    }
  }
  v23 = Next;
  InformationBuffer->PatternOffset = v32;
  InformationBuffer->Reserved = v34;
  HIDWORD(Next[7].Next) = v33;
  HIDWORD(Next[6].Next) = v35;
  if ( Next[3].Next == v31 )
    goto LABEL_6;
  v3 = Next;
  for ( j = Next + 1; j; j = j->Next )
  {
    v3 = j - 1;
    if ( j[2].Next == v31 )
      goto LABEL_6;
  }
  p_PatternList = &a1->PatternList;
LABEL_26:
  v24 = InformationBuffer->Reserved;
  if ( v24 <= 0xFFFF || !ndisPMPatternIdExist(p_PatternList, v24) )
  {
    WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(InformationBuffer, v6->PortNumber);
    v28 = WakeUpPatternEntry;
    if ( WakeUpPatternEntry )
    {
      WakeUpPatternEntry->Source = v31;
      a1->OidContext = WakeUpPatternEntry;
      NewPatternEntryId = InformationBuffer->Reserved;
      if ( NewPatternEntryId <= 0xFFFF )
      {
        if ( v23 )
          NewPatternEntryId = (unsigned int)v23[5].Next;
        else
          NewPatternEntryId = ndisGetNewPatternEntryId(&a1->PatternList);
      }
      v28->Id = NewPatternEntryId;
      *(_DWORD *)&v6->NdisReserved[80] = NewPatternEntryId;
      v12 = 0;
      v28->Pattern.Reserved = v28->Id;
      if ( v3 )
      {
        *a3 = 1;
        v28->DupLink.Next = Next + 1;
      }
      else
      {
        *a3 = 0;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    goto LABEL_6;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v30 = v25;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x19u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      *(_QWORD *)v30);
    goto LABEL_6;
  }
  return v12;
}
