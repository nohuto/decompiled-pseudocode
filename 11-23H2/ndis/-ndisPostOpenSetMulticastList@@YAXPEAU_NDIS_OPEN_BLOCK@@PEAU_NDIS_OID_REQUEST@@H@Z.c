/*
 * XREFs of ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00079F8
 * Callers:
 *     ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0007150 (-ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A04A0 (-ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqD @ 0x1C000743C (WPP_RECORDER_SF_qqqD.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

void __fastcall ndisPostOpenSetMulticastList(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r15
  _X_FILTER *EthDB; // rbp
  UINT v8; // ecx
  UINT InformationBufferLength; // ebx
  __int64 OldNumAddresses; // rax
  __int64 v11; // [rsp+40h] [rbp-28h]

  MiniportHandle = a1->MiniportHandle;
  EthDB = MiniportHandle->EthDB;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x55u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      a3);
  v8 = *(_DWORD *)&a2->NdisReserved[88];
  InformationBufferLength = 0;
  if ( v8 )
  {
    a2->DATA.QUERY_INFORMATION.InformationBuffer = *(PVOID *)&a2->NdisReserved[80];
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v8;
    *(_QWORD *)&a2->NdisReserved[80] = 0LL;
    *(_DWORD *)&a2->NdisReserved[88] = 0;
  }
  if ( a3 )
  {
    OldNumAddresses = a1->OldNumAddresses;
    if ( (_DWORD)OldNumAddresses )
    {
      memmove(a1->MCastAddressBuf, a1->OldMCastAddressBuf, 12 * OldNumAddresses);
      a1->NumAddresses = a1->OldNumAddresses;
    }
    a1->OldNumAddresses = 0;
    if ( EthDB->NextOldNumAddresses )
    {
      memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
      EthDB->NextNumAddresses = EthDB->NextOldNumAddresses;
    }
    EthDB->NextOldNumAddresses = 0;
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  }
  else
  {
    a1->OldNumAddresses = 0;
    EthDB->NextOldNumAddresses = 0;
    InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  }
  a2->DATA.QUERY_INFORMATION.BytesWritten = InformationBufferLength;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = a3;
    WPP_RECORDER_SF_qqqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x56u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      v11);
  }
}
