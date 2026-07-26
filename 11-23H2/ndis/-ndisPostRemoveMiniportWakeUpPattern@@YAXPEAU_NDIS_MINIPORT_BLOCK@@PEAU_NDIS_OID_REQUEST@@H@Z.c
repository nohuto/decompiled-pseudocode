/*
 * XREFs of ?ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0097C0C
 * Callers:
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095830 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0098020 (-ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C000D200 (WPP_RECORDER_SF_qqD.c)
 *     memcmp @ 0x1C0038280 (memcmp.c)
 */

void __fastcall ndisPostRemoveMiniportWakeUpPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  UCHAR *i; // rcx
  _SINGLE_LIST_ENTRY *v7; // rsi
  _SINGLE_LIST_ENTRY *Next; // rbx
  _DWORD *InformationBuffer; // rdi
  __int64 Next_high; // r13
  PVOID v11; // rcx
  __int64 v12; // rbp
  int v13; // eax
  __int64 Next_low; // r8
  _SINGLE_LIST_ENTRY *v15; // rcx
  _SINGLE_LIST_ENTRY *v16; // rcx
  _SINGLE_LIST_ENTRY *v17; // rax
  _SINGLE_LIST_ENTRY *v18; // rcx
  _SINGLE_LIST_ENTRY *v19; // rax
  _SINGLE_LIST_ENTRY *v20; // r8
  char v21; // r9
  __int64 v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+40h] [rbp-48h]
  _SINGLE_LIST_ENTRY *v24; // [rsp+48h] [rbp-40h]
  int v25; // [rsp+A8h] [rbp+20h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x25u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( !a3 )
  {
    for ( i = a2->NdisReserved; _bittest((const signed __int32 *)i + 4, 0xEu); i = (UCHAR *)(*((_QWORD *)i + 3) + 72LL) )
      ;
    v7 = 0LL;
    Next = a1->PatternList.Next;
    v24 = (_SINGLE_LIST_ENTRY *)*((_QWORD *)i + 4);
    while ( Next )
    {
      InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      if ( InformationBuffer[4] == LODWORD(Next[8].Next) && InformationBuffer[2] == LODWORD(Next[7].Next) )
      {
        Next_high = HIDWORD(Next[7].Next);
        v11 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        v12 = (unsigned int)InformationBuffer[3];
        v25 = InformationBuffer[1];
        v13 = HIDWORD(Next[6].Next);
        InformationBuffer[1] = 0;
        HIDWORD(Next[6].Next) = 0;
        InformationBuffer[3] = 0;
        Next_low = LODWORD(Next[7].Next);
        HIDWORD(Next[7].Next) = 0;
        v23 = v13;
        if ( !memcmp(v11, &Next[6], Next_low + 24)
          && !memcmp((char *)InformationBuffer + v12, (char *)&Next[6] + Next_high, LODWORD(Next[8].Next)) )
        {
          v15 = Next + 1;
          if ( v24 == Next[3].Next )
          {
            v16 = v15->Next;
            if ( v16 )
            {
              v18 = v16 - 1;
              if ( v7 )
                v7->Next = v18;
              else
                a1->PatternList.Next = v18;
              v18->Next = Next->Next;
            }
            else
            {
              v17 = Next->Next;
              if ( v7 )
                v7->Next = v17;
              else
                a1->PatternList.Next = v17;
            }
LABEL_25:
            InformationBuffer[3] = v12;
          }
          else
          {
            HIDWORD(Next[7].Next) = Next_high;
            v19 = v15->Next;
            if ( v15->Next )
            {
              while ( 1 )
              {
                v20 = v19->Next;
                if ( v19[2].Next == v24 )
                  break;
                v15 = v19;
                v19 = v19->Next;
                if ( !v20 )
                {
                  InformationBuffer[3] = v12;
                  goto LABEL_35;
                }
              }
              v15->Next = v20;
              v21 = 1;
              if ( v19 )
              {
                Next = v19 - 1;
                goto LABEL_25;
              }
            }
            else
            {
              v21 = 0;
            }
            InformationBuffer[3] = v12;
            if ( !v21 )
              break;
          }
          ExFreePoolWithTag(Next, 0);
          break;
        }
        InformationBuffer[3] = v12;
        HIDWORD(Next[7].Next) = Next_high;
        InformationBuffer[1] = v25;
        HIDWORD(Next[6].Next) = v23;
      }
      v7 = Next;
      Next = Next->Next;
    }
  }
LABEL_35:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v22) = a3;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x26u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      (char)a2,
      v22);
  }
}
