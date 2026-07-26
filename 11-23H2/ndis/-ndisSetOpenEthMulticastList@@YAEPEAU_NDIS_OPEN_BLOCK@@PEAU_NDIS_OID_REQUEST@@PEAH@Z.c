/*
 * XREFs of ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0007538
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0007E90 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqDD @ 0x1C0007244 (WPP_RECORDER_SF_qqqDD.c)
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0007354 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthMulticastList(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  int *v4; // r12
  struct _NDIS_OID_REQUEST *v5; // r14
  unsigned __int8 v7; // si
  _X_FILTER *EthDB; // rdi
  int v9; // edx
  int IsValidMulticastFilter; // r15d
  unsigned int NumAddresses; // eax
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  char *InformationBuffer; // r14
  unsigned int v15; // r8d
  int v16; // edx
  __int64 v17; // rcx
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // r11
  __int64 v19; // rbx
  unsigned int v20; // r10d
  __int64 v21; // rbx
  __int64 v22; // rbx
  _X_FILTER *p_NoFTypeOpenList; // r12
  _NDIS_OPEN_BLOCK *OpenList; // rbx
  unsigned int NextNumAddresses; // eax
  __int64 v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // r10
  unsigned __int8 *v29; // r11
  __int64 v30; // r13
  unsigned int v31; // r9d
  __int64 v32; // r13
  unsigned int v33; // r8d
  __int64 v35; // rcx
  unsigned __int8 *NextOldMCastAddressBuf; // r9
  unsigned __int8 *NextMCastAddressBuf; // r10
  unsigned __int16 v38; // ax
  unsigned __int16 v39; // ax
  char v40; // [rsp+38h] [rbp-70h]
  _ETH_MULTICAST_WRAPPER *v41; // [rsp+50h] [rbp-58h]
  int v42; // [rsp+B0h] [rbp+8h]
  struct _NDIS_OID_REQUEST *v43; // [rsp+B8h] [rbp+10h]
  _NDIS_MINIPORT_BLOCK *v45; // [rsp+C8h] [rbp+20h]

  v43 = a2;
  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  v5 = a2;
  v45 = MiniportHandle;
  v7 = 1;
  EthDB = MiniportHandle->EthDB;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v40 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      74,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v40);
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1->MiniportHandle, a1, v5);
  if ( IsValidMulticastFilter )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_65:
      if ( (byte_1C00F7644 & 4) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          MiniportHandle->IfIndex,
          (unsigned int)&SetOpenEthMulticastListFailed,
          (_DWORD)MiniportHandle + 4008,
          (_DWORD)MiniportHandle + 4008,
          MiniportHandle->IfIndex,
          MiniportHandle->NetLuid.Value,
          IsValidMulticastFilter,
          1,
          (char)a1);
      goto LABEL_47;
    }
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      75,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)v5);
  }
  else if ( a1->MaxMulticastAddresses )
  {
    memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12LL * a1->NumAddresses);
    NumAddresses = a1->NumAddresses;
    a1->NumAddresses = IsValidMulticastFilter & NumAddresses;
    a1->OldNumAddresses = NumAddresses;
    v12 = v5->DATA.QUERY_INFORMATION.InformationBufferLength / 6;
    if ( v12 )
    {
      v13 = 0;
      InformationBuffer = (char *)v5->DATA.QUERY_INFORMATION.InformationBuffer;
      do
      {
        v15 = a1->NumAddresses;
        v16 = -1;
        v17 = 0LL;
        if ( v15 )
        {
          MCastAddressBuf = a1->MCastAddressBuf;
          v19 = 6 * v13;
          v16 = -1;
          v20 = *(_DWORD *)&InformationBuffer[v19 + 2];
          while ( *(_DWORD *)&MCastAddressBuf[v17].MCastAddress[2] <= v20 )
          {
            if ( *(_DWORD *)&MCastAddressBuf[v17].MCastAddress[2] >= v20 )
            {
              v38 = *(_WORD *)MCastAddressBuf[v17].MCastAddress;
              if ( v38 > *(_WORD *)&InformationBuffer[v19] )
                break;
              if ( v38 >= *(_WORD *)&InformationBuffer[v19] )
                goto LABEL_17;
            }
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 >= v15 )
              goto LABEL_14;
          }
          v16 = 1;
        }
LABEL_14:
        v21 = (unsigned int)v17;
        a1->NumAddresses = v15 + 1;
        if ( v16 > 0 )
          memmove(
            &a1->MCastAddressBuf[(unsigned int)(v17 + 1)],
            &a1->MCastAddressBuf[v17],
            12LL * (v15 - (unsigned int)v17));
        v22 = v21;
        memmove(a1->MCastAddressBuf[v22].MCastAddress, &InformationBuffer[6 * v13], 6uLL);
        a1->MCastAddressBuf[v22].RefCount = 1;
LABEL_17:
        ++v13;
      }
      while ( v13 < v12 );
      v5 = v43;
    }
    p_NoFTypeOpenList = EthDB;
    OpenList = EthDB->OpenList;
    memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
    NextNumAddresses = EthDB->NextNumAddresses;
    EthDB->NextNumAddresses = 0;
    EthDB->NextOldNumAddresses = NextNumAddresses;
    while ( 1 )
    {
      if ( OpenList )
        goto LABEL_24;
LABEL_38:
      if ( p_NoFTypeOpenList == EthDB )
        break;
      if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->NoFTypeOpenList )
        goto LABEL_23;
      if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->FTypeOpenList )
        goto LABEL_41;
    }
    p_NoFTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList;
    OpenList = EthDB->NoFTypeOpenList;
    if ( OpenList )
      goto LABEL_24;
LABEL_23:
    p_NoFTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
    OpenList = EthDB->FTypeOpenList;
    if ( !OpenList )
    {
LABEL_41:
      v33 = EthDB->NextNumAddresses;
      if ( v33 == EthDB->NextOldNumAddresses )
      {
        v35 = 0LL;
        if ( v33 )
        {
          NextOldMCastAddressBuf = (unsigned __int8 *)EthDB->NextOldMCastAddressBuf;
          NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
          while ( 1 )
          {
            v9 = 3 * v35;
            if ( *(_DWORD *)&NextMCastAddressBuf[6 * v35 + 2] != *(_DWORD *)&NextOldMCastAddressBuf[6 * v35 + 2]
              || *(_WORD *)&NextMCastAddressBuf[6 * v35] != *(_WORD *)&NextOldMCastAddressBuf[6 * v35] )
            {
              break;
            }
            v35 = (unsigned int)(v35 + 1);
            if ( (unsigned int)v35 >= v33 )
            {
              memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
              EthDB->NextOldNumAddresses = 0;
              IsValidMulticastFilter = 0;
              goto LABEL_43;
            }
          }
        }
      }
      v7 = 0;
      *(_QWORD *)&v5->NdisReserved[80] = v5->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)&v5->NdisReserved[88] = v5->DATA.QUERY_INFORMATION.InformationBufferLength;
      v5->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
      v5->DATA.QUERY_INFORMATION.InformationBufferLength = 6 * EthDB->NextNumAddresses;
      goto LABEL_43;
    }
LABEL_24:
    while ( !IsValidMulticastFilter )
    {
      v26 = 0LL;
      v42 = 0;
      if ( OpenList->NumAddresses )
      {
        while ( 1 )
        {
          v27 = EthDB->NextNumAddresses;
          v28 = 0LL;
          v9 = -1;
          if ( v27 )
          {
            v29 = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
            v30 = v26;
            v41 = OpenList->MCastAddressBuf;
            v31 = *(_DWORD *)&v41[v26].MCastAddress[2];
            while ( *(_DWORD *)&v29[6 * v28 + 2] <= v31 )
            {
              if ( *(_DWORD *)&v29[6 * v28 + 2] >= v31 )
              {
                v39 = *(_WORD *)&v29[6 * v28];
                if ( v39 > *(_WORD *)v41[v30].MCastAddress )
                  break;
                if ( v39 >= *(_WORD *)v41[v30].MCastAddress )
                  goto LABEL_35;
              }
              v28 = (unsigned int)(v28 + 1);
              if ( (unsigned int)v28 >= v27 )
                goto LABEL_31;
            }
            v9 = 1;
          }
LABEL_31:
          EthDB->NextNumAddresses = v27 + 1;
          if ( v27 + 1 > EthDB->MaxMulticastAddresses )
            break;
          v32 = v28;
          if ( v9 > 0 )
            memmove(
              EthDB->NextMCastAddressBuf[(unsigned int)(v28 + 1)],
              EthDB->NextMCastAddressBuf[v28],
              6 * (v27 + 1 - (unsigned int)v28) - 6);
          memmove(EthDB->NextMCastAddressBuf[v32], OpenList->MCastAddressBuf[v42].MCastAddress, 6uLL);
LABEL_35:
          v26 = (unsigned int)(v42 + 1);
          v42 = v26;
          if ( (unsigned int)v26 >= OpenList->NumAddresses )
            goto LABEL_36;
        }
        IsValidMulticastFilter = -1073676279;
      }
LABEL_36:
      OpenList = OpenList->FilterNextOpen;
      if ( !OpenList )
      {
        if ( IsValidMulticastFilter )
          break;
        goto LABEL_38;
      }
    }
LABEL_43:
    v4 = a3;
    MiniportHandle = v45;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x4Cu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)v5,
      IsValidMulticastFilter,
      v7);
  if ( IsValidMulticastFilter )
    goto LABEL_65;
LABEL_47:
  *v4 = IsValidMulticastFilter;
  return v7;
}
