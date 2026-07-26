/*
 * XREFs of ?ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0099B0C
 * Callers:
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095D50 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C00184D8 (WPP_RECORDER_SF_qLL.c)
 *     memcmp @ 0x1C00380F0 (memcmp.c)
 *     ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1C009349C (-ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@.c)
 */

__int64 __fastcall ndisSetOpenAddWakeUpPattern(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, char *a3)
{
  char *v3; // rdi
  struct _NDIS_OID_REQUEST *v4; // rbp
  unsigned int v6; // ebx
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  int v8; // r14d
  struct _NDIS_PM_PACKET_PATTERN *InformationBuffer; // rsi
  __int64 MaskSize; // rax
  unsigned __int64 PatternOffset; // r8
  unsigned int PatternSize; // ecx
  _SINGLE_LIST_ENTRY *i; // rdi
  __int64 v14; // r12
  __int64 Next_high; // r13
  size_t v16; // r8
  struct _NDIS_PACKET_PATTERN_ENTRY *WakeUpPatternEntry; // rcx

  v3 = a3;
  v4 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      a2);
  v6 = 0;
  *v3 = 1;
  v4->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  ProtocolHandle = a1->ProtocolHandle;
  if ( ProtocolHandle->MajorNdisVersion > 6u
    || ProtocolHandle->MajorNdisVersion == 6 && ProtocolHandle->MinorNdisVersion >= 0x14u )
  {
    v6 = -1073741637;
  }
  else
  {
    LODWORD(a2) = v4->DATA.QUERY_INFORMATION.InformationBufferLength;
    v8 = 24;
    if ( (unsigned int)a2 >= 0x18 )
    {
      InformationBuffer = (struct _NDIS_PM_PACKET_PATTERN *)v4->DATA.QUERY_INFORMATION.InformationBuffer;
      MaskSize = InformationBuffer->MaskSize;
      if ( !(_DWORD)MaskSize
        || (PatternOffset = InformationBuffer->PatternOffset, PatternOffset < MaskSize + 24)
        || (PatternSize = InformationBuffer->PatternSize,
            PatternSize + (unsigned int)PatternOffset < (unsigned int)PatternOffset) )
      {
LABEL_8:
        v6 = -1073676267;
        goto LABEL_28;
      }
      if ( (unsigned int)a2 >= PatternSize + (unsigned int)PatternOffset )
      {
        InformationBuffer->Priority = 0;
        for ( i = a1->PatternList.Next; i; i = i->Next )
        {
          if ( PatternSize == LODWORD(i[8].Next) && InformationBuffer->MaskSize == LODWORD(i[7].Next) )
          {
            v14 = InformationBuffer->PatternOffset;
            Next_high = HIDWORD(i[7].Next);
            InformationBuffer->PatternOffset = 0;
            v16 = LODWORD(i[7].Next) + 24LL;
            HIDWORD(i[7].Next) = 0;
            if ( !memcmp(InformationBuffer, &i[6], v16)
              && !memcmp((char *)InformationBuffer + v14, (char *)&i[6] + Next_high, LODWORD(i[8].Next)) )
            {
              InformationBuffer->PatternOffset = v14;
              HIDWORD(i[7].Next) = Next_high;
              v3 = a3;
              goto LABEL_8;
            }
            InformationBuffer->PatternOffset = v14;
            HIDWORD(i[7].Next) = Next_high;
            PatternSize = InformationBuffer->PatternSize;
          }
        }
        v3 = a3;
        WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(InformationBuffer, v4->PortNumber);
        if ( WakeUpPatternEntry )
        {
          WakeUpPatternEntry->Source = *(void **)&v4->NdisReserved[32];
          *(_QWORD *)&v4->NdisReserved[88] = WakeUpPatternEntry;
          *a3 = 0;
        }
        else
        {
          v6 = -1073741670;
        }
        goto LABEL_28;
      }
      v8 = PatternSize + PatternOffset;
    }
    v6 = -1073676268;
    v4->DATA.QUERY_INFORMATION.BytesNeeded = v8;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v6;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x16u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids);
  }
LABEL_28:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      *v3,
      v6);
  return v6;
}
