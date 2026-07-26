/*
 * XREFs of ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A5ED0
 * Callers:
 *     ?ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A1410 (-ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1C0007244 (WPP_RECORDER_SF_qqqDD.c)
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0007354 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C0061A8C (-ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C0061CC4 (-ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthAddDeleteMulticast(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r13
  unsigned __int8 v4; // r14
  int *v5; // r15
  _X_FILTER *EthDB; // rbx
  int v9; // edx
  int IsValidMulticastFilter; // ebp
  unsigned int NumAddresses; // eax
  _ETH_MULTICAST_WRAPPER *InformationBuffer; // rdx
  int v13; // eax
  _X_FILTER *p_NoFTypeOpenList; // r15
  _NDIS_OPEN_BLOCK *OpenList; // r14
  unsigned int NextNumAddresses; // eax
  __int64 v17; // rax
  unsigned int v18; // r9d
  __int64 v19; // rcx
  unsigned __int8 *NextMCastAddressBuf; // r11
  __int64 v21; // r12
  unsigned int v22; // r10d
  unsigned __int16 v23; // ax
  __int64 v24; // r12
  bool v25; // zf
  unsigned int v26; // r8d
  __int64 v27; // rcx
  unsigned __int8 *NextOldMCastAddressBuf; // r9
  unsigned __int8 *v29; // r10
  UINT v30; // ecx
  unsigned __int8 result; // al
  int v32; // [rsp+90h] [rbp+8h] BYREF
  int *v33; // [rsp+A0h] [rbp+18h]
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // [rsp+A8h] [rbp+20h]

  v33 = a3;
  MiniportHandle = a1->MiniportHandle;
  v4 = 1;
  v5 = a3;
  LOBYTE(v32) = 1;
  EthDB = MiniportHandle->EthDB;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x41u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1->MiniportHandle, a1, a2);
  if ( IsValidMulticastFilter )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x42u,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids);
      goto LABEL_53;
    }
    goto LABEL_56;
  }
  if ( !a1->MaxMulticastAddresses )
  {
    IsValidMulticastFilter = 0;
    goto LABEL_53;
  }
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength != 6 )
  {
    a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
    IsValidMulticastFilter = -1073676268;
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x43u,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)MiniportHandle,
        (char)a1,
        a2);
      goto LABEL_53;
    }
    goto LABEL_56;
  }
  memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12LL * a1->NumAddresses);
  NumAddresses = a1->NumAddresses;
  a1->NumAddresses = 0;
  a1->OldNumAddresses = NumAddresses;
  InformationBuffer = (_ETH_MULTICAST_WRAPPER *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  if ( a2->DATA.QUERY_INFORMATION.Oid == 16843272 )
    v13 = ethAddOneOpenMulticastAddress(a1, InformationBuffer, (char *)&v32);
  else
    v13 = ethDeleteOneOpenMulticastAddress(a1, (unsigned __int8 *)InformationBuffer, (char *)&v32);
  v4 = v32;
  IsValidMulticastFilter = v13;
  if ( (_BYTE)v32 == 1 )
    goto LABEL_53;
  p_NoFTypeOpenList = EthDB;
  OpenList = EthDB->OpenList;
  memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
  NextNumAddresses = EthDB->NextNumAddresses;
  EthDB->NextNumAddresses = 0;
  EthDB->NextOldNumAddresses = NextNumAddresses;
  do
  {
    while ( 1 )
    {
      if ( OpenList )
        goto LABEL_16;
      if ( IsValidMulticastFilter )
        goto LABEL_44;
      if ( p_NoFTypeOpenList != EthDB )
        break;
      p_NoFTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList;
      OpenList = EthDB->NoFTypeOpenList;
      if ( !OpenList )
        goto LABEL_41;
LABEL_16:
      if ( IsValidMulticastFilter )
        goto LABEL_44;
      v17 = 0LL;
      v32 = 0;
      if ( OpenList->NumAddresses )
      {
        while ( 1 )
        {
          v18 = EthDB->NextNumAddresses;
          v9 = -1;
          v19 = 0LL;
          if ( v18 )
          {
            NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
            v21 = v17;
            v9 = -1;
            MCastAddressBuf = OpenList->MCastAddressBuf;
            v22 = *(_DWORD *)&MCastAddressBuf[v17].MCastAddress[2];
            while ( *(_DWORD *)&NextMCastAddressBuf[6 * v19 + 2] <= v22 )
            {
              if ( *(_DWORD *)&NextMCastAddressBuf[6 * v19 + 2] >= v22 )
              {
                v23 = *(_WORD *)&NextMCastAddressBuf[6 * v19];
                if ( v23 > *(_WORD *)MCastAddressBuf[v21].MCastAddress )
                  break;
                if ( v23 >= *(_WORD *)MCastAddressBuf[v21].MCastAddress )
                  goto LABEL_31;
              }
              v19 = (unsigned int)(v19 + 1);
              if ( (unsigned int)v19 >= v18 )
                goto LABEL_27;
            }
            v9 = 1;
          }
LABEL_27:
          EthDB->NextNumAddresses = v18 + 1;
          if ( v18 + 1 > EthDB->MaxMulticastAddresses )
            break;
          v24 = (unsigned int)v19;
          if ( v9 > 0 )
            memmove(
              EthDB->NextMCastAddressBuf[(unsigned int)(v19 + 1)],
              EthDB->NextMCastAddressBuf[v19],
              6 * (v18 + 1 - (unsigned int)v19) - 6);
          memmove(EthDB->NextMCastAddressBuf[v24], OpenList->MCastAddressBuf[v32].MCastAddress, 6uLL);
LABEL_31:
          v17 = (unsigned int)(v32 + 1);
          v32 = v17;
          if ( (unsigned int)v17 >= OpenList->NumAddresses )
            goto LABEL_34;
        }
        IsValidMulticastFilter = -1073676279;
      }
LABEL_34:
      OpenList = OpenList->FilterNextOpen;
    }
    if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->NoFTypeOpenList )
    {
LABEL_41:
      p_NoFTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
      OpenList = EthDB->FTypeOpenList;
      v25 = OpenList == 0LL;
      continue;
    }
    v25 = p_NoFTypeOpenList == (_X_FILTER *)&EthDB->FTypeOpenList;
  }
  while ( !v25 );
LABEL_44:
  v26 = EthDB->NextNumAddresses;
  if ( v26 == EthDB->NextOldNumAddresses )
  {
    v27 = 0LL;
    if ( v26 )
    {
      NextOldMCastAddressBuf = (unsigned __int8 *)EthDB->NextOldMCastAddressBuf;
      v29 = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
      while ( 1 )
      {
        v9 = 3 * v27;
        if ( *(_DWORD *)&v29[6 * v27 + 2] != *(_DWORD *)&NextOldMCastAddressBuf[6 * v27 + 2]
          || *(_WORD *)&v29[6 * v27] != *(_WORD *)&NextOldMCastAddressBuf[6 * v27] )
        {
          break;
        }
        v27 = (unsigned int)(v27 + 1);
        if ( (unsigned int)v27 >= v26 )
        {
          memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
          EthDB->NextOldNumAddresses = 0;
          v4 = 1;
          goto LABEL_52;
        }
      }
    }
  }
  v4 = 0;
  *(_QWORD *)&a2->NdisReserved[80] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *(_DWORD *)&a2->NdisReserved[88] = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  a2->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
  v30 = 6 * EthDB->NextNumAddresses;
  *(_DWORD *)&a2->NdisReserved[72] = a2->DATA.QUERY_INFORMATION.Oid;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = v30;
  a2->DATA.QUERY_INFORMATION.Oid = 16843011;
LABEL_52:
  v5 = v33;
LABEL_53:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x44u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      IsValidMulticastFilter,
      v4);
  if ( IsValidMulticastFilter )
  {
LABEL_56:
    if ( (byte_1C00F7644 & 4) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        MiniportHandle->IfIndex,
        &SetOpenEthAddDeleteMulticastFailed,
        &MiniportHandle->InterfaceGuid,
        (__int64)&MiniportHandle->InterfaceGuid,
        MiniportHandle->IfIndex,
        MiniportHandle->NetLuid.Value,
        IsValidMulticastFilter,
        1,
        (char)a1);
  }
  result = v4;
  *v5 = IsValidMulticastFilter;
  return result;
}
