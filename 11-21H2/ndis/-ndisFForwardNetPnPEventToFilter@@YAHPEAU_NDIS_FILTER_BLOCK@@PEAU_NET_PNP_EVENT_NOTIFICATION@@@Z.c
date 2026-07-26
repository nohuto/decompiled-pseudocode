/*
 * XREFs of ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0015E3C
 * Callers:
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0015688 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0015B40 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0015D48 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     NdisFNetPnPEvent @ 0x1C0015F40 (NdisFNetPnPEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001E014 (--1-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@YAX0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0104274 (-ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0104BD0 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x1C010621C (-ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z.c)
 */

NDIS_STATUS __fastcall ndisFForwardNetPnPEventToFilter(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  __int64 v5; // r9
  USHORT v6; // ax
  int v7; // ebx
  _BYTE v8[16]; // [rsp+30h] [rbp-79h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v9; // [rsp+40h] [rbp-69h] BYREF

  memset(&v9, 0, sizeof(v9));
  if ( !a1->FilterDriver->DefaultFilterCharacteristics.NetPnPEventHandler )
    return NdisFNetPnPEvent(a1, a2);
  ndisShallowCopyNetPnPEvent(&v9, a2);
  if ( *(_BYTE *)(v5 + 100) > 6u || *(_BYTE *)(v5 + 100) == 6 && *(_BYTE *)(v5 + 101) >= 0x32u )
  {
    v9.Header.Revision = 2;
    v6 = 172;
  }
  else
  {
    v9.Flags |= 4u;
    v6 = 164;
    v9.Header.Revision = 1;
  }
  v9.Header.Size = v6;
  ndisMakeWatchdog(v8, a1, 18LL, *(_QWORD *)(v5 + 280), 270000, v9.NetPnPEvent.NetEvent);
  v7 = ndisFInvokeNetPnPEvent(a1, &v9);
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>(v8);
  return v7;
}
