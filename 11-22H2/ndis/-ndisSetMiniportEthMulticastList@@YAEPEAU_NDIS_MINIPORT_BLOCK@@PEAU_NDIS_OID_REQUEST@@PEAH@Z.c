/*
 * XREFs of ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C000798C
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0007D00 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A13F0 (-ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00071C4 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 */

char __fastcall ndisSetMiniportEthMulticastList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _X_FILTER *EthDB; // rbp
  struct _NDIS_OID_REQUEST *v5; // r14
  char v7; // bl
  int v8; // edx
  int IsValidMulticastFilter; // edi
  unsigned int MiniportNumAddresses; // eax
  unsigned __int8 *MiniportOldMCastAddressBuf; // rcx
  char v13; // [rsp+30h] [rbp-38h]

  EthDB = a1->EthDB;
  v5 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      77,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      v13);
  }
  v7 = 1;
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1, 0LL, v5);
  if ( IsValidMulticastFilter )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        11,
        78,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)a1,
        (char)v5);
    }
  }
  else if ( EthDB->MaxMulticastAddresses )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        11,
        79,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)a1,
        (char)v5);
    }
    MiniportNumAddresses = EthDB->MiniportNumAddresses;
    MiniportOldMCastAddressBuf = (unsigned __int8 *)EthDB->MiniportOldMCastAddressBuf;
    EthDB->MiniportOldNumAddresses = MiniportNumAddresses;
    memmove(MiniportOldMCastAddressBuf, EthDB->MiniportMCastAddressBuf, 6 * MiniportNumAddresses);
    IsValidMulticastFilter = 0;
    v7 = 0;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  *a3 = IsValidMulticastFilter;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      11,
      80,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      (char)v5,
      IsValidMulticastFilter,
      v7);
  }
  return v7;
}
