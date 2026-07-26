/*
 * XREFs of ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0087988
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B635C (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007601C (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_dddD @ 0x1C0088B58 (WPP_RECORDER_SF_dddD_ea_1C0088B58.c)
 *     WPP_RECORDER_SF_dddDL @ 0x1C0088C54 (WPP_RECORDER_SF_dddDL.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0088D74 (WPP_RECORDER_SF_dddd_ea_1C0088D74.c)
 */

void __fastcall ndisRssV2UpdateIndirectionTable(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _DWORD *InformationBuffer; // rax
  int v3; // r8d
  struct _NDIS_MINIPORT_BLOCK *v4; // r13
  _NDIS_RECEIVE_SCALE_PARAMETERS *Next; // rbx
  struct _NDIS_MINIPORT_BLOCK *v6; // r12
  char *v7; // rdi
  unsigned __int16 v8; // ax
  char v9; // si
  __int64 v10; // rbp
  unsigned int v11; // r10d
  int v12; // r11d
  int v13; // r14d
  __int64 v14; // r15
  int v15; // r10d
  struct _NDIS_MINIPORT_BLOCK *VPortByVPortIdInternal; // rax
  char v17; // r10
  char v18; // al
  unsigned int v19; // eax
  int v20; // [rsp+20h] [rbp-98h]
  char v21; // [rsp+28h] [rbp-90h]
  int v22; // [rsp+50h] [rbp-68h]
  unsigned int v23; // [rsp+54h] [rbp-64h]
  __int128 v24; // [rsp+58h] [rbp-60h]
  struct _NDIS_MINIPORT_BLOCK *v25; // [rsp+C0h] [rbp+8h]
  unsigned __int16 v26; // [rsp+C8h] [rbp+10h]
  _PROCESSOR_NUMBER v27; // [rsp+D0h] [rbp+18h]
  int v28; // [rsp+D8h] [rbp+20h]

  v25 = a1;
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v3 = -1;
  v22 = -1;
  v4 = 0LL;
  LODWORD(a2) = InformationBuffer[4];
  Next = 0LL;
  v6 = 0LL;
  v7 = (char *)InformationBuffer + (unsigned int)InformationBuffer[3];
  v23 = (unsigned int)a2;
  v8 = 0;
  v26 = 0;
  if ( (_DWORD)a2 )
  {
    v9 = 0;
    do
    {
      v10 = 3LL * v8;
      v11 = *(_DWORD *)&v7[24 * v8 + 4];
      v12 = *(_DWORD *)&v7[24 * v8 + 20];
      v13 = *(_DWORD *)&v7[24 * v8 + 8];
      v14 = *(unsigned __int16 *)&v7[24 * v8 + 12];
      v27 = *(_PROCESSOR_NUMBER *)&v7[24 * v8 + 14];
      v27.Reserved = 0;
      v28 = v12;
      if ( v11 != v3 )
      {
        if ( v11 )
        {
          v22 = *(_DWORD *)&v7[24 * v8 + 4];
          VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(a1, v11);
          v4 = VPortByVPortIdInternal;
          if ( VPortByVPortIdInternal )
          {
            Next = (_NDIS_RECEIVE_SCALE_PARAMETERS *)VPortByVPortIdInternal->SingleWorkItems[2].Next;
          }
          else
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_dddD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, v3, 16, v20, v17, v9, v14, v13);
              v12 = v28;
            }
            Next = 0LL;
          }
        }
        else
        {
          if ( !v6 )
          {
            v6 = ndisIovFindVPortByVPortIdInternal(a1, 0);
            if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_dddD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (_DWORD)a2,
                v3,
                v15 + 15,
                v20,
                (unsigned __int8)a2 & v21,
                v9,
                v14,
                v13);
              v12 = v28;
              a1 = v25;
            }
          }
          Next = a1->CombinedNdisRSSParameters;
        }
      }
      if ( v12 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dddDL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (_DWORD)a2,
            v3,
            19,
            v20,
            *(_DWORD *)&v7[8 * v10 + 4],
            v9,
            v14,
            v13,
            v12);
      }
      else
      {
        v18 = v13 & 1;
        if ( Next || v18 )
        {
          if ( (v13 & 2) != 0 )
          {
            Next->DefaultProcessorNumber = v27;
          }
          else if ( v18 )
          {
            *((_QWORD *)&v24 + 1) = v27.Group;
            *(_QWORD *)&v24 = 1LL << v27.Number;
            if ( *(_DWORD *)&v7[8 * v10 + 4] )
            {
              if ( v4 )
                *(_OWORD *)&v4->EthRxCompleteHandler = v24;
            }
            else if ( v6 )
            {
              *(_OWORD *)&v6->EthRxCompleteHandler = v24;
            }
          }
          else
          {
            v19 = Next->IndirectionTableSize >> 2;
            if ( (unsigned int)v14 >= v19 )
            {
              a2 = (struct _NDIS_OID_REQUEST *)&WPP_RECORDER_INITIALIZED;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dddd(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (unsigned int)&WPP_RECORDER_INITIALIZED,
                  1,
                  0,
                  v20,
                  *(_DWORD *)&v7[8 * v10 + 4],
                  v9,
                  v14,
                  v19);
              *(_DWORD *)&v7[8 * v10 + 20] = -1073741811;
            }
            else
            {
              *(_PROCESSOR_NUMBER *)((char *)&Next->Header + 4 * v14 + Next->IndirectionTableOffset) = v27;
            }
          }
        }
        else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_dddDL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (_DWORD)a2,
            1,
            17,
            v20,
            *(_DWORD *)&v7[8 * v10 + 4],
            v9,
            v14,
            v13,
            0);
        }
      }
      a1 = v25;
      v8 = v26 + 1;
      v3 = v22;
      v9 = ++v26;
    }
    while ( v26 < v23 );
  }
}
