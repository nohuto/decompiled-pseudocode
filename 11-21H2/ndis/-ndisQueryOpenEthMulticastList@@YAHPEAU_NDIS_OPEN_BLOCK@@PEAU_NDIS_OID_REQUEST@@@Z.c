/*
 * XREFs of ?ndisQueryOpenEthMulticastList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009EE9C
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F3B0 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z @ 0x1C005C704 (-EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z.c)
 */

__int64 __fastcall ndisQueryOpenEthMulticastList(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdx
  UINT v5; // ebx
  unsigned int v6; // edx
  UINT v7; // ecx
  __int64 result; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  MiniportHandle = a1->MiniportHandle;
  v5 = 0;
  v9 = 0;
  v10 = 0;
  EthQueryOpenFilterAddresses(
    (int *)&v9,
    MiniportHandle->EthDB,
    a1,
    a2->DATA.QUERY_INFORMATION.InformationBufferLength,
    &v10,
    (unsigned __int8 (*)[6])a2->DATA.QUERY_INFORMATION.InformationBuffer);
  v6 = v9;
  if ( v9 == -1073741823 )
  {
    v7 = 0;
    v6 = -1073676268;
    v5 = 6 * a1->NumAddresses;
  }
  else
  {
    v7 = 6 * v10;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = v5;
  result = v6;
  a2->DATA.QUERY_INFORMATION.BytesWritten = v7;
  return result;
}
