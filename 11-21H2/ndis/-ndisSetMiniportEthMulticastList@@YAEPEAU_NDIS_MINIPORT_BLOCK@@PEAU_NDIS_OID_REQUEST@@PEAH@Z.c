/*
 * XREFs of ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001E44C
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F3B0 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B530 (-ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C3B0 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 */

unsigned __int8 __fastcall ndisSetMiniportEthMulticastList(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _X_FILTER *EthDB; // rbp
  unsigned __int8 v7; // bl
  int IsValidMulticastFilter; // edi
  unsigned int MiniportNumAddresses; // eax
  unsigned __int8 *MiniportOldMCastAddressBuf; // rcx

  EthDB = a1->EthDB;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x4Du,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      a2);
  v7 = 1;
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1, 0LL, a2);
  if ( IsValidMulticastFilter )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x4Eu,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
        (char)a1,
        a2);
  }
  else if ( EthDB->MaxMulticastAddresses )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        IsValidMulticastFilter + 11,
        0x4Fu,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
        (char)a1,
        a2);
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
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x50u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      (char)a2,
      IsValidMulticastFilter,
      v7);
  return v7;
}
