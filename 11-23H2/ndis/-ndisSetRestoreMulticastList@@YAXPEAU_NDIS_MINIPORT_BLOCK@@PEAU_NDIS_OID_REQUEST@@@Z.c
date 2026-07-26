/*
 * XREFs of ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A6B38
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0007E90 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

void __fastcall ndisSetRestoreMulticastList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _X_FILTER *EthDB; // rbx
  char v4; // r13
  _X_FILTER *p_NoFTypeOpenList; // rsi
  _NDIS_OPEN_BLOCK *OpenList; // rdi
  unsigned int NextNumAddresses; // eax
  __int64 i; // rbp
  unsigned int v9; // r9d
  int v10; // edx
  __int64 v11; // rcx
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // r12
  unsigned __int8 *NextMCastAddressBuf; // r11
  unsigned int v14; // r10d
  unsigned __int16 v15; // ax
  __int64 v16; // r14
  bool v17; // zf

  EthDB = a1->EthDB;
  v4 = (char)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x51u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      a2);
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
      if ( !OpenList )
      {
        if ( p_NoFTypeOpenList == EthDB )
        {
          p_NoFTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList;
          OpenList = EthDB->NoFTypeOpenList;
        }
        if ( !OpenList )
          break;
      }
      for ( i = 0LL; (unsigned int)i < OpenList->NumAddresses; i = (unsigned int)(i + 1) )
      {
        v9 = EthDB->NextNumAddresses;
        v10 = -1;
        v11 = 0LL;
        if ( v9 )
        {
          MCastAddressBuf = OpenList->MCastAddressBuf;
          NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
          v10 = -1;
          v14 = *(_DWORD *)&MCastAddressBuf[i].MCastAddress[2];
          while ( *(_DWORD *)&NextMCastAddressBuf[6 * v11 + 2] <= v14 )
          {
            if ( *(_DWORD *)&NextMCastAddressBuf[6 * v11 + 2] >= v14 )
            {
              v15 = *(_WORD *)&NextMCastAddressBuf[6 * v11];
              if ( v15 > *(_WORD *)MCastAddressBuf[i].MCastAddress )
                break;
              if ( v15 >= *(_WORD *)MCastAddressBuf[i].MCastAddress )
                goto LABEL_18;
            }
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= v9 )
              goto LABEL_14;
          }
          v10 = 1;
        }
LABEL_14:
        EthDB->NextNumAddresses = v9 + 1;
        if ( v9 + 1 > EthDB->MaxMulticastAddresses )
          break;
        v16 = (unsigned int)v11;
        if ( v10 > 0 )
          memmove(
            EthDB->NextMCastAddressBuf[(unsigned int)(v11 + 1)],
            EthDB->NextMCastAddressBuf[v11],
            6 * (v9 + 1 - (unsigned int)v11) - 6);
        memmove(EthDB->NextMCastAddressBuf[v16], &OpenList->MCastAddressBuf->MCastAddress[8 * i + 4 * i], 6uLL);
LABEL_18:
        ;
      }
      OpenList = OpenList->FilterNextOpen;
    }
    if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->NoFTypeOpenList )
    {
      p_NoFTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
      OpenList = EthDB->FTypeOpenList;
      v17 = OpenList == 0LL;
    }
    else
    {
      v17 = p_NoFTypeOpenList == (_X_FILTER *)&EthDB->FTypeOpenList;
    }
  }
  while ( !v17 );
  a2->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = 6 * EthDB->NextNumAddresses;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x52u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v4,
      a2);
}
