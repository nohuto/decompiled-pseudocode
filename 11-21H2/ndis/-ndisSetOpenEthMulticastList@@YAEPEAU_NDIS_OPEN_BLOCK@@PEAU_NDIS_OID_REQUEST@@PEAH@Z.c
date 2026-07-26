/*
 * XREFs of ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001BDD4
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F3B0 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1C001C2A0 (WPP_RECORDER_SF_qqqDD.c)
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C3B0 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

char __fastcall ndisSetOpenEthMulticastList(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  int *v4; // r13
  struct _NDIS_OID_REQUEST *v5; // r14
  char v7; // bp
  _X_FILTER *EthDB; // rdi
  struct _NDIS_MINIPORT_BLOCK *v9; // rcx
  int v10; // edx
  int IsValidMulticastFilter; // r15d
  unsigned int NumAddresses; // eax
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  char *InformationBuffer; // r14
  unsigned int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // r11
  __int64 v20; // rbx
  unsigned int v21; // r10d
  __int64 v22; // rbx
  __int64 v23; // rbx
  _X_FILTER *p_FTypeOpenList; // r13
  _NDIS_OPEN_BLOCK *OpenList; // rbx
  unsigned int NextNumAddresses; // eax
  __int64 v27; // rax
  unsigned int v28; // r8d
  __int64 v29; // r10
  unsigned __int8 *NextMCastAddressBuf; // r11
  __int64 v31; // r12
  unsigned int v32; // r9d
  __int64 v33; // r12
  unsigned int v34; // r8d
  __int64 v36; // rcx
  unsigned __int8 *NextOldMCastAddressBuf; // r9
  unsigned __int8 *v38; // r10
  unsigned __int16 v39; // ax
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // cx
  _ETH_MULTICAST_WRAPPER *v42; // [rsp+50h] [rbp-58h]
  int v43; // [rsp+B0h] [rbp+8h]
  _NDIS_MINIPORT_BLOCK *v46; // [rsp+C8h] [rbp+20h]

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  v5 = a2;
  v46 = MiniportHandle;
  v7 = 1;
  EthDB = MiniportHandle->EthDB;
  v9 = MiniportHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x4Au,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
    v9 = a1->MiniportHandle;
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(v9, a1, v5);
  if ( IsValidMulticastFilter )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_66:
      if ( (byte_1C00EE584 & 4) != 0 )
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
      goto LABEL_46;
    }
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x4Bu,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v5);
  }
  else if ( a1->MaxMulticastAddresses )
  {
    memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12LL * a1->NumAddresses);
    NumAddresses = a1->NumAddresses;
    a1->NumAddresses = IsValidMulticastFilter & NumAddresses;
    a1->OldNumAddresses = NumAddresses;
    v13 = v5->DATA.QUERY_INFORMATION.InformationBufferLength / 6;
    if ( v13 )
    {
      v14 = 0;
      InformationBuffer = (char *)v5->DATA.QUERY_INFORMATION.InformationBuffer;
      do
      {
        v16 = a1->NumAddresses;
        v17 = -1;
        v18 = 0LL;
        if ( v16 )
        {
          MCastAddressBuf = a1->MCastAddressBuf;
          v20 = 6 * v14;
          v17 = -1;
          v21 = *(_DWORD *)&InformationBuffer[v20 + 2];
          while ( *(_DWORD *)&MCastAddressBuf[v18].MCastAddress[2] <= v21 )
          {
            if ( *(_DWORD *)&MCastAddressBuf[v18].MCastAddress[2] >= v21 )
            {
              v39 = *(_WORD *)MCastAddressBuf[v18].MCastAddress;
              if ( v39 > *(_WORD *)&InformationBuffer[v20] )
                break;
              if ( v39 >= *(_WORD *)&InformationBuffer[v20] )
                goto LABEL_17;
            }
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= v16 )
              goto LABEL_14;
          }
          v17 = 1;
        }
LABEL_14:
        v22 = (unsigned int)v18;
        a1->NumAddresses = v16 + 1;
        if ( v17 > 0 )
          memmove(
            &a1->MCastAddressBuf[(unsigned int)(v18 + 1)],
            &a1->MCastAddressBuf[v18],
            12LL * (v16 - (unsigned int)v18));
        v23 = v22;
        memmove(a1->MCastAddressBuf[v23].MCastAddress, &InformationBuffer[6 * v14], 6uLL);
        a1->MCastAddressBuf[v23].RefCount = 1;
LABEL_17:
        ++v14;
      }
      while ( v14 < v13 );
      v5 = a2;
    }
    p_FTypeOpenList = EthDB;
    OpenList = EthDB->OpenList;
    memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
    NextNumAddresses = EthDB->NextNumAddresses;
    EthDB->NextNumAddresses = 0;
    EthDB->NextOldNumAddresses = NextNumAddresses;
    do
    {
      if ( OpenList )
        goto LABEL_23;
LABEL_37:
      if ( p_FTypeOpenList != EthDB
        || (p_FTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList, (OpenList = EthDB->NoFTypeOpenList) == 0LL) )
      {
        if ( p_FTypeOpenList != (_X_FILTER *)&EthDB->NoFTypeOpenList )
          continue;
        p_FTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
        OpenList = EthDB->FTypeOpenList;
        if ( !OpenList )
          continue;
      }
LABEL_23:
      while ( !IsValidMulticastFilter )
      {
        v27 = 0LL;
        v43 = 0;
        if ( OpenList->NumAddresses )
        {
          while ( 1 )
          {
            v28 = EthDB->NextNumAddresses;
            v29 = 0LL;
            v10 = -1;
            if ( v28 )
            {
              NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
              v31 = v27;
              v42 = OpenList->MCastAddressBuf;
              v32 = *(_DWORD *)&v42[v27].MCastAddress[2];
              while ( *(_DWORD *)&NextMCastAddressBuf[6 * v29 + 2] <= v32 )
              {
                if ( *(_DWORD *)&NextMCastAddressBuf[6 * v29 + 2] >= v32 )
                {
                  v40 = *(_WORD *)&NextMCastAddressBuf[6 * v29];
                  v41 = *(_WORD *)v42[v31].MCastAddress;
                  if ( v40 > v41 )
                    break;
                  if ( v40 >= v41 )
                    goto LABEL_34;
                }
                v29 = (unsigned int)(v29 + 1);
                if ( (unsigned int)v29 >= v28 )
                  goto LABEL_30;
              }
              v10 = 1;
            }
LABEL_30:
            EthDB->NextNumAddresses = v28 + 1;
            if ( v28 + 1 > EthDB->MaxMulticastAddresses )
              break;
            v33 = v29;
            if ( v10 > 0 )
              memmove(
                EthDB->NextMCastAddressBuf[(unsigned int)(v29 + 1)],
                EthDB->NextMCastAddressBuf[v29],
                6 * (v28 + 1 - (unsigned int)v29) - 6);
            memmove(EthDB->NextMCastAddressBuf[v33], OpenList->MCastAddressBuf[v43].MCastAddress, 6uLL);
LABEL_34:
            v27 = (unsigned int)(v43 + 1);
            v43 = v27;
            if ( (unsigned int)v27 >= OpenList->NumAddresses )
              goto LABEL_35;
          }
          IsValidMulticastFilter = -1073676279;
        }
LABEL_35:
        OpenList = OpenList->FilterNextOpen;
        if ( !OpenList )
        {
          if ( IsValidMulticastFilter )
            goto LABEL_42;
          goto LABEL_37;
        }
      }
      goto LABEL_42;
    }
    while ( p_FTypeOpenList != (_X_FILTER *)&EthDB->FTypeOpenList );
    v34 = EthDB->NextNumAddresses;
    if ( v34 == EthDB->NextOldNumAddresses )
    {
      v36 = 0LL;
      if ( v34 )
      {
        NextOldMCastAddressBuf = (unsigned __int8 *)EthDB->NextOldMCastAddressBuf;
        v38 = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
        while ( 1 )
        {
          v10 = 3 * v36;
          if ( *(_DWORD *)&v38[6 * v36 + 2] != *(_DWORD *)&NextOldMCastAddressBuf[6 * v36 + 2]
            || *(_WORD *)&v38[6 * v36] != *(_WORD *)&NextOldMCastAddressBuf[6 * v36] )
          {
            break;
          }
          v36 = (unsigned int)(v36 + 1);
          if ( (unsigned int)v36 >= v34 )
          {
            memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
            EthDB->NextOldNumAddresses = 0;
            IsValidMulticastFilter = 0;
            goto LABEL_42;
          }
        }
      }
    }
    v7 = 0;
    *(_QWORD *)&v5->NdisReserved[80] = v5->DATA.QUERY_INFORMATION.InformationBuffer;
    *(_DWORD *)&v5->NdisReserved[88] = v5->DATA.QUERY_INFORMATION.InformationBufferLength;
    v5->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
    v5->DATA.QUERY_INFORMATION.InformationBufferLength = 6 * EthDB->NextNumAddresses;
LABEL_42:
    v4 = a3;
    MiniportHandle = v46;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      11,
      76,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)v5,
      IsValidMulticastFilter,
      v7);
  if ( IsValidMulticastFilter )
    goto LABEL_66;
LABEL_46:
  *v4 = IsValidMulticastFilter;
  return v7;
}
