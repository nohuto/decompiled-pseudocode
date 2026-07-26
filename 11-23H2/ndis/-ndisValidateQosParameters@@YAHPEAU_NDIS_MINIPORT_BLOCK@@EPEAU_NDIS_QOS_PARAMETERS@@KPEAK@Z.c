/*
 * XREFs of ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A83E4
 * Callers:
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006BF00 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3030 (-ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A228 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C002BC9C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0034D60 (WPP_RECORDER_SF_DD_ea_1C0034D60.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062ECC (WPP_RECORDER_SF_LL_ea_1C0062ECC.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C006FFEC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00A8E04 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C00A9148 (WPP_RECORDER_SF_LLL_ea_1C00A9148.c)
 *     WPP_RECORDER_SF_LLLL @ 0x1C00A9224 (WPP_RECORDER_SF_LLLL.c)
 *     WPP_RECORDER_SF_LLLLLLq @ 0x1C00A9320 (WPP_RECORDER_SF_LLLLLLq.c)
 *     WPP_RECORDER_SF_qDqLq @ 0x1C00A9494 (WPP_RECORDER_SF_qDqLq.c)
 *     WPP_RECORDER_SF_qDqLqD @ 0x1C00A95C0 (WPP_RECORDER_SF_qDqLqD.c)
 */

__int64 __fastcall ndisValidateQosParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int8 *TcBandwidthAssignmentTable,
        struct _NDIS_QOS_PARAMETERS *a3,
        __int64 NumClassificationElements,
        unsigned int *a5)
{
  unsigned int v5; // r14d
  char v6; // di
  struct _NDIS_QOS_PARAMETERS *v7; // rbx
  unsigned int v9; // r11d
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // r10
  unsigned int Flags; // r13d
  unsigned int NumTrafficClasses; // edx
  int v14; // r12d
  unsigned int v15; // r8d
  int v16; // ebp
  unsigned __int8 *PriorityAssignmentTable; // rcx
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int8 v20; // al
  unsigned int *p_Flags; // r8
  int v22; // eax
  __int64 FirstClassificationElementOffset; // rax
  int v24; // ecx
  unsigned int v25; // r10d
  int v26; // r10d
  unsigned int v27; // r11d
  int v28; // edx
  char v29[8]; // [rsp+28h] [rbp-80h]
  struct _NDIS_QOS_PARAMETERS *v30; // [rsp+38h] [rbp-70h]
  char v31[4]; // [rsp+40h] [rbp-68h]
  int v32; // [rsp+40h] [rbp-68h]
  unsigned int *v33; // [rsp+48h] [rbp-60h]

  v5 = NumClassificationElements;
  v6 = (char)TcBandwidthAssignmentTable;
  v7 = a3;
  v9 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    v33 = a5;
    *(_DWORD *)v31 = NumClassificationElements;
    v30 = a3;
    *(_DWORD *)&v29[4] = HIDWORD(a1);
    WPP_RECORDER_SF_qDqLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (_BYTE)TcBandwidthAssignmentTable,
      (_DWORD)a3,
      NumClassificationElements);
    v9 = 0;
  }
  if ( a5 )
    *a5 = 52;
  QosCurrentCapabilities = a1->QosCurrentCapabilities;
  if ( !QosCurrentCapabilities )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x5Eu,
          (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids);
    }
    return 3221225659LL;
  }
  Flags = v7->Flags;
  if ( (Flags & 2) != 0 )
  {
    NumTrafficClasses = v7->NumTrafficClasses;
    v14 = 0;
    v15 = 0;
    LODWORD(NumClassificationElements) = 0;
    v16 = 0;
    if ( !NumTrafficClasses || v6 && NumTrafficClasses > QosCurrentCapabilities->MaxNumTrafficClasses )
    {
      if ( v6 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0xBu,
            0x5Fu,
            (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
            NumTrafficClasses,
            QosCurrentCapabilities->MaxNumTrafficClasses,
            v30,
            *(_DWORD *)v31,
            v33);
        }
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
             && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x60u,
          (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids);
      }
    }
    else
    {
      PriorityAssignmentTable = v7->PriorityAssignmentTable;
      do
      {
        v18 = *PriorityAssignmentTable;
        if ( (unsigned __int8)v18 >= 8u )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            LODWORD(v30) = 8;
            WPP_RECORDER_SF_DDD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0xBu,
              0x61u,
              (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
              v9,
              v18,
              v30,
              *(_DWORD *)v31,
              v33);
          }
          return 3221291029LL;
        }
        if ( !_bittest(&v14, v18) )
        {
          v14 |= 1 << v18;
          ++v15;
          if ( v7->TsaAssignmentTable[v18] == 2 )
            LODWORD(NumClassificationElements) = NumClassificationElements + 1;
        }
        ++v9;
        ++PriorityAssignmentTable;
      }
      while ( v9 < 8 );
      if ( v15 > NumTrafficClasses
        || v6 && (unsigned int)NumClassificationElements > QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses )
      {
        if ( v6 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            WPP_RECORDER_SF_LLLL(*((_QWORD *)WPP_GLOBAL_Control + 8), NumTrafficClasses, v15, NumClassificationElements);
          }
        }
        else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0xBu,
            0x63u,
            (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
            v15,
            v7->NumTrafficClasses,
            v30,
            *(_DWORD *)v31,
            v33);
        }
      }
      else
      {
        v19 = 0;
        TcBandwidthAssignmentTable = v7->TcBandwidthAssignmentTable;
        LODWORD(a3) = 8;
        do
        {
          if ( _bittest(&v14, v19) )
          {
            v20 = TcBandwidthAssignmentTable[8];
            if ( v20 )
            {
              if ( v20 != 2 )
              {
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                  && *((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  WPP_RECORDER_SF_DDDD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v7->TsaAssignmentTable[v19],
                    0xBu,
                    0x67u,
                    (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
                    v19,
                    v7->TsaAssignmentTable[v19],
                    0,
                    2,
                    v33);
                }
                return 3221291029LL;
              }
              v22 = *TcBandwidthAssignmentTable;
              if ( !(_BYTE)v22 )
              {
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                  && *((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  WPP_RECORDER_SF_DD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    5u,
                    0xBu,
                    0x66u,
                    (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
                    v19,
                    v19);
                }
                return 3221291029LL;
              }
              v16 += v22;
            }
            else
            {
              p_Flags = &QosCurrentCapabilities->Flags;
              if ( v6 && (*p_Flags & 1) == 0 || *TcBandwidthAssignmentTable )
              {
                if ( v6 )
                {
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                    && *((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    v32 = v7->TcBandwidthAssignmentTable[v19];
                    WPP_RECORDER_SF_DDDD(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v32,
                      0xBu,
                      0x64u,
                      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
                      v19,
                      *p_Flags,
                      v19,
                      v32,
                      v33);
                  }
                }
                else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                       && *((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  LODWORD(v30) = v7->TcBandwidthAssignmentTable[v19];
                  WPP_RECORDER_SF_DDD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    5u,
                    0xBu,
                    0x65u,
                    (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
                    v19,
                    v19,
                    v30,
                    *(_DWORD *)v31,
                    v33);
                }
                return 3221291029LL;
              }
              LODWORD(a3) = 8;
            }
          }
          ++v19;
          ++TcBandwidthAssignmentTable;
        }
        while ( v19 < 8 );
        if ( !v16 || v16 == 100 )
          goto LABEL_70;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v29 = v16;
          WPP_RECORDER_SF_L(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0xBu,
            0x68u,
            (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
            *(_QWORD *)v29);
        }
      }
    }
    return 3221291029LL;
  }
LABEL_70:
  if ( (Flags & 0x20000) != 0 )
  {
    FirstClassificationElementOffset = v7->FirstClassificationElementOffset;
    NumClassificationElements = v7->NumClassificationElements;
    TcBandwidthAssignmentTable = (unsigned __int8 *)v7->ClassificationElementSize;
    a3 = (struct _NDIS_QOS_PARAMETERS *)((char *)v7 + FirstClassificationElementOffset);
    if ( (_DWORD)NumClassificationElements
      && ((unsigned int)TcBandwidthAssignmentTable < 0x10
       || ((unsigned __int8)TcBandwidthAssignmentTable & 3) != 0
       || (unsigned int)FirstClassificationElementOffset < 0x34
       || (unsigned int)FirstClassificationElementOffset > v5
       || ((unsigned __int8)a3 & 3) != 0) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_LLLLLLq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (_DWORD)TcBandwidthAssignmentTable,
          (_DWORD)a3,
          NumClassificationElements);
      }
      return 3221291029LL;
    }
    v24 = (_DWORD)TcBandwidthAssignmentTable * NumClassificationElements;
    if ( (unsigned __int64)((_QWORD)TcBandwidthAssignmentTable * NumClassificationElements) > 0xFFFFFFFF
      || (v25 = v24 + FirstClassificationElementOffset,
          v24 + (int)FirstClassificationElementOffset < (unsigned int)FirstClassificationElementOffset) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_LLL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (_DWORD)TcBandwidthAssignmentTable,
          (_DWORD)a3,
          NumClassificationElements);
      }
      return 3221291029LL;
    }
    if ( v5 < v25 )
    {
      if ( a5 )
        *a5 = v25;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x6Bu,
          (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
          v5,
          v24 + FirstClassificationElementOffset);
      }
      return 3221291028LL;
    }
    v26 = 0;
    if ( (_DWORD)NumClassificationElements )
    {
      while ( a3->Header.Type == 0xB7 && a3->Header.Revision && a3->Header.Size >= 0x10u )
      {
        v27 = a3->Flags;
        if ( (v27 & 0xFF000000) != 0
          || (unsigned __int16)(LOWORD(a3->NumTrafficClasses) - 1) > 5u
          || *(_WORD *)a3->PriorityAssignmentTable
          || *(_WORD *)&a3->PriorityAssignmentTable[2] >= 8u )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            v28 = *(unsigned __int16 *)a3->PriorityAssignmentTable;
            LOBYTE(v28) = 5;
            WPP_RECORDER_SF_DDDDDDDDDDD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v28,
              11,
              109,
              (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
              v26,
              v27,
              0,
              0,
              a3->NumTrafficClasses,
              7,
              *(_WORD *)a3->PriorityAssignmentTable,
              1,
              0,
              *(_WORD *)&a3->PriorityAssignmentTable[2],
              8);
          }
          return 3221291029LL;
        }
        a3 = (struct _NDIS_QOS_PARAMETERS *)((char *)a3 + (_QWORD)TcBandwidthAssignmentTable);
        if ( ++v26 >= (unsigned int)NumClassificationElements )
          goto LABEL_98;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v29 = v26;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x6Cu,
          (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
          *(_QWORD *)v29);
      }
      return 3221291029LL;
    }
  }
LABEL_98:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qDqLqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (_BYTE)TcBandwidthAssignmentTable,
      (_DWORD)a3,
      NumClassificationElements);
  return 0LL;
}
