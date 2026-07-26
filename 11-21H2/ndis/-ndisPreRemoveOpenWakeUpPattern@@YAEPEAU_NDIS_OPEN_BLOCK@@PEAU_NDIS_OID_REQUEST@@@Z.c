/*
 * XREFs of ?ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00924E0
 * Callers:
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0090C70 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     memcmp @ 0x1C0035F50 (memcmp.c)
 */

unsigned __int8 __fastcall ndisPreRemoveOpenWakeUpPattern(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned __int8 v4; // bp
  _SINGLE_LIST_ENTRY *i; // rbx
  _DWORD *InformationBuffer; // rdi
  int Next_high; // eax
  __int64 v8; // r15
  PVOID v9; // rcx
  __int64 v10; // r12
  int v11; // r13d
  __int64 Next_low; // r8
  int v14; // [rsp+70h] [rbp+8h]

  v4 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Fu,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      a2);
  for ( i = a1->PatternList.Next; ; i = i->Next )
  {
    if ( !i )
    {
      v4 = 0;
      goto LABEL_12;
    }
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( InformationBuffer[4] == LODWORD(i[8].Next) && InformationBuffer[2] == LODWORD(i[7].Next) )
      break;
LABEL_9:
    ;
  }
  Next_high = HIDWORD(i[6].Next);
  v8 = (unsigned int)InformationBuffer[3];
  v9 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v10 = HIDWORD(i[7].Next);
  InformationBuffer[3] = 0;
  v11 = InformationBuffer[1];
  HIDWORD(i[7].Next) = 0;
  InformationBuffer[1] = 0;
  Next_low = LODWORD(i[7].Next);
  HIDWORD(i[6].Next) = 0;
  v14 = Next_high;
  if ( memcmp(v9, &i[6], Next_low + 24)
    || memcmp((char *)InformationBuffer + v8, (char *)&i[6] + v10, LODWORD(i[8].Next)) )
  {
    InformationBuffer[3] = v8;
    HIDWORD(i[7].Next) = v10;
    InformationBuffer[1] = v11;
    HIDWORD(i[6].Next) = v14;
    goto LABEL_9;
  }
  InformationBuffer[3] = v8;
  HIDWORD(i[7].Next) = v10;
  *(_DWORD *)&a2->NdisReserved[80] = i[5].Next;
LABEL_12:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x20u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      (char)a2,
      v4);
  return v4;
}
