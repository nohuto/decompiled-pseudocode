/*
 * XREFs of ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A1844
 * Callers:
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C0066C08 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D120 (-ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0030AE4 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C006AC1C (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00A2414 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C00A2758 (WPP_RECORDER_SF_LLL_ea_1C00A2758.c)
 *     WPP_RECORDER_SF_LLLL @ 0x1C00A2834 (WPP_RECORDER_SF_LLLL.c)
 *     WPP_RECORDER_SF_LLLLLLq @ 0x1C00A2930 (WPP_RECORDER_SF_LLLLLLq.c)
 *     WPP_RECORDER_SF_qDqLq @ 0x1C00A2AA4 (WPP_RECORDER_SF_qDqLq.c)
 *     WPP_RECORDER_SF_qDqLqD @ 0x1C00A2BD0 (WPP_RECORDER_SF_qDqLqD.c)
 */

__int64 __fastcall ndisValidateQosParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int8 *TcBandwidthAssignmentTable,
        struct _NDIS_QOS_PARAMETERS *a3,
        __int64 NumClassificationElements,
        unsigned int *a5)
{
  unsigned int v5; // r15d
  char v6; // di
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // r8
  unsigned int Flags; // r13d
  unsigned int NumTrafficClasses; // ecx
  int v13; // r12d
  unsigned int v14; // r11d
  unsigned int v15; // r9d
  int v16; // r10d
  unsigned int v17; // edx
  unsigned __int8 *PriorityAssignmentTable; // r14
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned __int8 v21; // al
  int v22; // eax
  __int64 FirstClassificationElementOffset; // rax
  int v24; // ecx
  unsigned int v25; // r10d
  int v26; // r10d
  unsigned int v27; // r11d
  int MaxNumEtsCapableTrafficClasses_low; // edx
  char v29[8]; // [rsp+28h] [rbp-80h]
  struct _NDIS_QOS_PARAMETERS *v30; // [rsp+38h] [rbp-70h]
  char v31[4]; // [rsp+40h] [rbp-68h]
  int v32; // [rsp+40h] [rbp-68h]
  unsigned int *v33; // [rsp+48h] [rbp-60h]

  v5 = NumClassificationElements;
  v6 = (char)TcBandwidthAssignmentTable;
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
          (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids);
    }
    return 3221225659LL;
  }
  Flags = a3->Flags;
  if ( (Flags & 2) != 0 )
  {
    NumTrafficClasses = a3->NumTrafficClasses;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ( NumTrafficClasses )
    {
      if ( !v6 || NumTrafficClasses <= QosCurrentCapabilities->MaxNumTrafficClasses )
      {
        v17 = 0;
        PriorityAssignmentTable = a3->PriorityAssignmentTable;
        do
        {
          v19 = *PriorityAssignmentTable;
          if ( (unsigned __int8)v19 >= 8u )
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
                (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
                v17,
                v19,
                v30,
                *(_DWORD *)v31,
                v33);
            }
            return 3221291029LL;
          }
          if ( !_bittest(&v13, v19) )
          {
            v13 |= 1 << v19;
            ++v14;
            if ( a3->TsaAssignmentTable[v19] == 2 )
              ++v15;
          }
          ++v17;
          ++PriorityAssignmentTable;
        }
        while ( v17 < 8 );
        if ( v14 > NumTrafficClasses )
        {
          if ( !v6 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              WPP_RECORDER_SF_DD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0xBu,
                0x63u,
                (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
                v14,
                a3->NumTrafficClasses,
                v30,
                *(_DWORD *)v31,
                v33);
            }
            return 3221291029LL;
          }
        }
        else if ( !v6 || v15 <= QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses )
        {
          TcBandwidthAssignmentTable = a3->TcBandwidthAssignmentTable;
          v20 = 0;
          LODWORD(NumClassificationElements) = 8;
          while ( 1 )
          {
            if ( _bittest(&v13, v20) )
            {
              v21 = TcBandwidthAssignmentTable[8];
              if ( v21 )
              {
                if ( v21 != 2 )
                {
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                    && *((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    WPP_RECORDER_SF_DDDD(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      a3->TsaAssignmentTable[v20],
                      0xBu,
                      0x67u,
                      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
                      v20,
                      a3->TsaAssignmentTable[v20],
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
                      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
                      v20,
                      v20);
                  }
                  return 3221291029LL;
                }
                v16 += v22;
              }
              else
              {
                if ( v6 && (QosCurrentCapabilities->Flags & 1) == 0 )
                  goto LABEL_31;
                if ( *TcBandwidthAssignmentTable )
                {
                  if ( v6 )
                  {
LABEL_31:
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                      && *((_WORD *)WPP_GLOBAL_Control + 36) )
                    {
                      v32 = a3->TcBandwidthAssignmentTable[v20];
                      WPP_RECORDER_SF_DDDD(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        v32,
                        0xBu,
                        0x64u,
                        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
                        v20,
                        QosCurrentCapabilities->Flags,
                        v20,
                        v32,
                        v33);
                    }
                    return 3221291029LL;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                    && *((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    LODWORD(v30) = a3->TcBandwidthAssignmentTable[v20];
                    WPP_RECORDER_SF_DDD(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      5u,
                      0xBu,
                      0x65u,
                      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
                      v20,
                      v20,
                      v30,
                      *(_DWORD *)v31,
                      v33);
                  }
                  return 3221291029LL;
                }
              }
            }
            ++v20;
            ++TcBandwidthAssignmentTable;
            if ( v20 >= 8 )
            {
              if ( !v16 || v16 == 100 )
                goto LABEL_69;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                && *((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                *(_DWORD *)v29 = v16;
                WPP_RECORDER_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  5u,
                  0xBu,
                  0x68u,
                  (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
                  *(_QWORD *)v29);
              }
              return 3221291029LL;
            }
          }
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          WPP_RECORDER_SF_LLLL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (_DWORD)WPP_GLOBAL_Control,
            (_DWORD)QosCurrentCapabilities,
            v15);
        }
        return 3221291029LL;
      }
    }
    else if ( !v6 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x60u,
          (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids);
      }
      return 3221291029LL;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_DD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0xBu,
        0x5Fu,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
        NumTrafficClasses,
        QosCurrentCapabilities->MaxNumTrafficClasses,
        v30,
        *(_DWORD *)v31,
        v33);
    return 3221291029LL;
  }
LABEL_69:
  if ( (Flags & 0x20000) != 0 )
  {
    FirstClassificationElementOffset = a3->FirstClassificationElementOffset;
    NumClassificationElements = a3->NumClassificationElements;
    TcBandwidthAssignmentTable = (unsigned __int8 *)a3->ClassificationElementSize;
    QosCurrentCapabilities = (_NDIS_QOS_CAPABILITIES *)(&a3->Header.Type + FirstClassificationElementOffset);
    if ( (_DWORD)NumClassificationElements
      && ((unsigned int)TcBandwidthAssignmentTable < 0x10
       || ((unsigned __int8)TcBandwidthAssignmentTable & 3) != 0
       || (unsigned int)FirstClassificationElementOffset < 0x34
       || (unsigned int)FirstClassificationElementOffset > v5
       || ((unsigned __int8)QosCurrentCapabilities & 3) != 0) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_LLLLLLq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (_DWORD)TcBandwidthAssignmentTable,
          (_DWORD)QosCurrentCapabilities,
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
          (_DWORD)QosCurrentCapabilities,
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
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x6Bu,
          (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
          v5,
          v24 + FirstClassificationElementOffset);
      }
      return 3221291028LL;
    }
    v26 = 0;
    if ( (_DWORD)NumClassificationElements )
    {
      while ( QosCurrentCapabilities->Header.Type == 0xB7
           && QosCurrentCapabilities->Header.Revision
           && QosCurrentCapabilities->Header.Size >= 0x10u )
      {
        v27 = QosCurrentCapabilities->Flags;
        if ( (v27 & 0xFF000000) != 0
          || (unsigned __int16)(LOWORD(QosCurrentCapabilities->MaxNumTrafficClasses) - 1) > 5u
          || LOWORD(QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses)
          || HIWORD(QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses) >= 8u )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            MaxNumEtsCapableTrafficClasses_low = LOWORD(QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses);
            LOBYTE(MaxNumEtsCapableTrafficClasses_low) = 5;
            WPP_RECORDER_SF_DDDDDDDDDDD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MaxNumEtsCapableTrafficClasses_low,
              11,
              109,
              (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
              v26,
              v27,
              0,
              0,
              QosCurrentCapabilities->MaxNumTrafficClasses,
              7,
              QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses,
              1,
              0,
              HIWORD(QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses),
              8);
          }
          return 3221291029LL;
        }
        QosCurrentCapabilities = (_NDIS_QOS_CAPABILITIES *)((char *)QosCurrentCapabilities
                                                          + (_QWORD)TcBandwidthAssignmentTable);
        if ( ++v26 >= (unsigned int)NumClassificationElements )
          goto LABEL_108;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v29 = v26;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x6Cu,
          (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
          *(_QWORD *)v29);
      }
      return 3221291029LL;
    }
  }
LABEL_108:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qDqLqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (_BYTE)TcBandwidthAssignmentTable,
      (_DWORD)QosCurrentCapabilities,
      NumClassificationElements);
  return 0LL;
}
