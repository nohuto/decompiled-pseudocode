/*
 * XREFs of WPP_RECORDER_SF_qqLd @ 0x1C001E034
 * Callers:
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001E44C (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F3B0 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0024D80 (-ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0028030 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0028268 (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0072240 (-ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0072850 (-ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00739F0 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0074690 (-ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreNicSwitchCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007F150 (-ndisOidPreNicSwitchCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterGlobalParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007FBC0 (-ndisOidPreRcvFilterGlobalParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0080380 (-ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0081C80 (-ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0082C04 (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C008302C (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreOffloadCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009C5D0 (-ndisOidPreOffloadCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009C740 (-ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D930 (-ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E584 (-ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C009F794 (-ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisFDoDirectOidRequestInternal@@YAXPEAX@Z @ 0x1C00AF7E0 (-ndisFDoDirectOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00AFC6C (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01066C4 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01069BC (-ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NO.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C0128A80 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AC73C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqLd(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        ...)
{
  unsigned __int64 v10; // rdi
  unsigned int v11; // esi
  int v13; // eax
  int v15; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va, a8);
  v10 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, &a8, 4LL, va, 4LL, 0LL);
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v15, &a6);
}
