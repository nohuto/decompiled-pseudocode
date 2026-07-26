/*
 * XREFs of ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C009FADC
 * Callers:
 *     ?ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B530 (-ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1C001C2A0 (WPP_RECORDER_SF_qqqDD.c)
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C3B0 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C005C7E4 (-ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C005CA18 (-ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthAddDeleteMulticast(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r15
  unsigned __int8 v4; // r14
  int *v5; // r12
  _X_FILTER *EthDB; // rbx
  struct _NDIS_MINIPORT_BLOCK *v9; // rcx
  int v10; // edx
  int IsValidMulticastFilter; // ebp
  unsigned int NumAddresses; // eax
  unsigned __int8 *InformationBuffer; // rdx
  int v14; // eax
  _X_FILTER *p_FTypeOpenList; // r12
  _NDIS_OPEN_BLOCK *OpenList; // r14
  unsigned int NextNumAddresses; // eax
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rcx
  unsigned __int8 *NextMCastAddressBuf; // r11
  __int64 v22; // r13
  unsigned int v23; // r10d
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // r8
  __int64 v26; // r13
  unsigned int v27; // r8d
  __int64 v28; // rcx
  unsigned __int8 *NextOldMCastAddressBuf; // r9
  unsigned __int8 *v30; // r10
  UINT v31; // ecx
  unsigned __int8 result; // al
  int v33; // [rsp+90h] [rbp+8h] BYREF
  int *v34; // [rsp+A0h] [rbp+18h]
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // [rsp+A8h] [rbp+20h]

  v34 = a3;
  MiniportHandle = a1->MiniportHandle;
  v4 = 1;
  v5 = a3;
  LOBYTE(v33) = 1;
  EthDB = MiniportHandle->EthDB;
  v9 = MiniportHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x41u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
    v9 = a1->MiniportHandle;
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(v9, a1, a2);
  if ( IsValidMulticastFilter )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x42u,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids);
      goto LABEL_51;
    }
LABEL_54:
    if ( (byte_1C00EE584 & 4) != 0 )
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
    goto LABEL_56;
  }
  if ( a1->MaxMulticastAddresses )
  {
    if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength == 6 )
    {
      memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12LL * a1->NumAddresses);
      NumAddresses = a1->NumAddresses;
      a1->NumAddresses = 0;
      a1->OldNumAddresses = NumAddresses;
      InformationBuffer = (unsigned __int8 *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
      if ( a2->DATA.QUERY_INFORMATION.Oid == 16843272 )
        v14 = ethAddOneOpenMulticastAddress(a1, InformationBuffer, (char *)&v33);
      else
        v14 = ethDeleteOneOpenMulticastAddress(a1, InformationBuffer, (char *)&v33);
      v4 = v33;
      IsValidMulticastFilter = v14;
      if ( (_BYTE)v33 != 1 )
      {
        p_FTypeOpenList = EthDB;
        OpenList = EthDB->OpenList;
        memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
        NextNumAddresses = EthDB->NextNumAddresses;
        EthDB->NextNumAddresses = 0;
        EthDB->NextOldNumAddresses = NextNumAddresses;
        do
        {
          while ( 1 )
          {
            if ( !OpenList )
            {
              if ( IsValidMulticastFilter )
                goto LABEL_42;
              if ( p_FTypeOpenList != EthDB
                || (p_FTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList, (OpenList = EthDB->NoFTypeOpenList) == 0LL) )
              {
                if ( p_FTypeOpenList != (_X_FILTER *)&EthDB->NoFTypeOpenList )
                  break;
                p_FTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
                OpenList = EthDB->FTypeOpenList;
                if ( !OpenList )
                  break;
              }
            }
            if ( IsValidMulticastFilter )
              goto LABEL_42;
            v18 = 0LL;
            v33 = 0;
            if ( OpenList->NumAddresses )
            {
              while ( 1 )
              {
                v19 = EthDB->NextNumAddresses;
                v10 = -1;
                v20 = 0LL;
                if ( v19 )
                {
                  NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
                  v22 = v18;
                  v10 = -1;
                  MCastAddressBuf = OpenList->MCastAddressBuf;
                  v23 = *(_DWORD *)&MCastAddressBuf[v18].MCastAddress[2];
                  while ( *(_DWORD *)&NextMCastAddressBuf[6 * v20 + 2] <= v23 )
                  {
                    if ( *(_DWORD *)&NextMCastAddressBuf[6 * v20 + 2] >= v23 )
                    {
                      v24 = *(_WORD *)&NextMCastAddressBuf[6 * v20];
                      v25 = *(_WORD *)MCastAddressBuf[v22].MCastAddress;
                      if ( v24 > v25 )
                        break;
                      if ( v24 >= v25 )
                        goto LABEL_31;
                    }
                    v20 = (unsigned int)(v20 + 1);
                    if ( (unsigned int)v20 >= v19 )
                      goto LABEL_27;
                  }
                  v10 = 1;
                }
LABEL_27:
                EthDB->NextNumAddresses = v19 + 1;
                if ( v19 + 1 > EthDB->MaxMulticastAddresses )
                  break;
                v26 = (unsigned int)v20;
                if ( v10 > 0 )
                  memmove(
                    EthDB->NextMCastAddressBuf[(unsigned int)(v20 + 1)],
                    &(*EthDB->NextMCastAddressBuf)[4 * v20 + 2 * (unsigned int)v20],
                    6 * (v19 + 1 - (unsigned int)v20) - 6);
                memmove(EthDB->NextMCastAddressBuf[v26], OpenList->MCastAddressBuf[v33].MCastAddress, 6uLL);
LABEL_31:
                v18 = (unsigned int)(v33 + 1);
                v33 = v18;
                if ( (unsigned int)v18 >= OpenList->NumAddresses )
                  goto LABEL_34;
              }
              IsValidMulticastFilter = -1073676279;
            }
LABEL_34:
            OpenList = OpenList->FilterNextOpen;
          }
        }
        while ( p_FTypeOpenList != (_X_FILTER *)&EthDB->FTypeOpenList );
LABEL_42:
        v27 = EthDB->NextNumAddresses;
        if ( v27 == EthDB->NextOldNumAddresses )
        {
          v28 = 0LL;
          if ( v27 )
          {
            NextOldMCastAddressBuf = (unsigned __int8 *)EthDB->NextOldMCastAddressBuf;
            v30 = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
            while ( 1 )
            {
              v10 = 3 * v28;
              if ( *(_DWORD *)&v30[6 * v28 + 2] != *(_DWORD *)&NextOldMCastAddressBuf[6 * v28 + 2]
                || *(_WORD *)&v30[6 * v28] != *(_WORD *)&NextOldMCastAddressBuf[6 * v28] )
              {
                break;
              }
              v28 = (unsigned int)(v28 + 1);
              if ( (unsigned int)v28 >= v27 )
              {
                memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
                EthDB->NextOldNumAddresses = 0;
                v4 = 1;
                goto LABEL_50;
              }
            }
          }
        }
        v4 = 0;
        *(_QWORD *)&a2->NdisReserved[80] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        *(_DWORD *)&a2->NdisReserved[88] = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        a2->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
        v31 = 6 * EthDB->NextNumAddresses;
        *(_DWORD *)&a2->NdisReserved[72] = a2->DATA.QUERY_INFORMATION.Oid;
        a2->DATA.QUERY_INFORMATION.InformationBufferLength = v31;
        a2->DATA.QUERY_INFORMATION.Oid = 16843011;
LABEL_50:
        v5 = v34;
      }
    }
    else
    {
      a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
      IsValidMulticastFilter = -1073676268;
      a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      WPP_RECORDER_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x43u,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
        (char)MiniportHandle,
        (char)a1,
        a2);
    }
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
LABEL_51:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      0xBu,
      0x44u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      IsValidMulticastFilter,
      v4);
  if ( IsValidMulticastFilter )
    goto LABEL_54;
LABEL_56:
  result = v4;
  *v5 = IsValidMulticastFilter;
  return result;
}
