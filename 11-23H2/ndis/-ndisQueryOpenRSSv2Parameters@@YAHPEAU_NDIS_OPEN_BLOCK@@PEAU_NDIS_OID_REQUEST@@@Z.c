/*
 * XREFs of ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0087670
 * Callers:
 *     ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00871B0 (-ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C0087750 (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 */

__int64 __fastcall ndisQueryOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rcx
  unsigned int v6; // eax
  unsigned int RSSv2ParametersHelper; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-18h]

  MiniportHandle = a1->MiniportHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x18u,
      (struct _GUID *)&WPP_aaef0678e9a53a35292f438c4061d952_Traceguids,
      (char)MiniportHandle,
      a2);
  NdisRSSParameters = a1->NdisRSSParameters;
  v6 = 0;
  if ( NdisRSSParameters )
    v6 = NdisRSSParameters->HashInformation & 0xFFFF00;
  RSSv2ParametersHelper = ndisQueryRSSv2ParametersHelper(MiniportHandle, a2, v6);
  v8 = RSSv2ParametersHelper;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = RSSv2ParametersHelper;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x19u,
      (struct _GUID *)&WPP_aaef0678e9a53a35292f438c4061d952_Traceguids,
      (char)MiniportHandle,
      v10);
  }
  return v8;
}
