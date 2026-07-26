/*
 * XREFs of ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0016FB0
 * Callers:
 *     NdisCloseAdapter @ 0x1C013BF70 (NdisCloseAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     NdisReleaseNicActive @ 0x1C0056030 (NdisReleaseNicActive.c)
 *     ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x1C009617C (-ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012A924 (-ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisCleanUpForProtocol(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  unsigned __int8 v5; // [rsp+30h] [rbp-50h]
  int v6; // [rsp+40h] [rbp-40h] BYREF
  __int128 v7; // [rsp+48h] [rbp-38h] BYREF
  __int128 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]

  v6 = 0;
  v9 = 0LL;
  v10 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x39u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      a1);
  MiniportHandle = a1->MiniportHandle;
  if ( a1->PacketFilters )
    ndisMDoProtocolRequest(a1, a2, 0x1010Eu, &v6, 4, 0, v5);
  if ( a1->NumAddresses && MiniportHandle->MediaType == NdisMedium802_3 )
    ndisMDoProtocolRequest(a1, a2, 0x1010103u, 0LL, 0, 1, v5);
  NdisRSSParameters = a1->NdisRSSParameters;
  if ( NdisRSSParameters )
  {
    LOBYTE(v7) = -119;
    *(_DWORD *)((char *)&v7 + 2) = 1048620;
    BYTE1(v7) = NdisRSSParameters->Header.Revision;
    LODWORD(v8) = 44;
    *((_QWORD *)&v8 + 1) = 0x2C0000002CLL;
    HIDWORD(v9) = 16;
    ndisMDoProtocolRequest(a1, a2, 0x10204u, &v7, 44, 1, v5);
  }
  while ( a1->AoAcReferences )
    NdisReleaseNicActive(a1, 8LL);
  if ( MiniportHandle->CurrentDevicePowerState != PowerDeviceD0 || (MiniportHandle->PnPFlags & 0x110) != 0 )
    ndisClearReceiveFiltersForProtocol(a1);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x3Au,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      a1);
}
