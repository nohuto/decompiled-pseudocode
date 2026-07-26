/*
 * XREFs of ?ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A4F80
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0007E90 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z @ 0x1C0061908 (-EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z.c)
 */

__int64 __fastcall ndisQueryMiniportEthMulticastList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned __int8 *InformationBuffer; // rax
  UINT InformationBufferLength; // r8d
  struct _X_FILTER *EthDB; // rdx
  __int64 result; // rax
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  InformationBuffer = (unsigned __int8 *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  EthDB = a1->EthDB;
  v8 = 0;
  v9 = 0;
  EthQueryGlobalFilterAddresses(
    (int *)&v8,
    EthDB,
    InformationBufferLength,
    &v9,
    (unsigned __int8 (*)[6])InformationBuffer);
  result = v8;
  if ( v8 )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 6 * a1->EthDB->MiniportNumAddresses;
    return 3221291028LL;
  }
  else
  {
    a2->DATA.QUERY_INFORMATION.BytesWritten = 6 * v9;
  }
  return result;
}
