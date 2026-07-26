/*
 * XREFs of ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0015B40
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0061AB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0015E3C (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C001CB88 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001CC34 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00794D8 (-ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@.c)
 *     ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x1C010621C (-ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C013B378 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

void __fastcall ndisFNetPnPEventInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // rdi
  ULONG_PTR v3; // rsi
  int v4; // ebx
  struct _NDIS_MINIPORT_BLOCK *Miniport; // r15
  int v6; // eax
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v8; // rbp
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  struct _NET_PNP_EVENT_NOTIFICATION v10; // [rsp+40h] [rbp-E8h] BYREF

  v1 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v3 = Parameter[3];
  v4 = 0;
  Miniport = v1->Miniport;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x33u,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      (char)Miniport,
      (char)v1,
      *(_DWORD *)(v3 + 8));
  v6 = *(_DWORD *)(v3 + 8);
  if ( v6 != 15 )
  {
    if ( v6 <= 17 || v6 > 21 )
    {
      HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(Miniport, v1, FPNPREF_NPNPEVENT);
      v8 = HigherFilterWithPnpRef;
      if ( HigherFilterWithPnpRef )
      {
        v4 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, (struct _NET_PNP_EVENT_NOTIFICATION *)v3);
        ndisDereferenceRef(&v8->PnPRef.SpinLock, 0xAu);
      }
      else
      {
        memset(&v10, 0, sizeof(v10));
        ndisInitializeNetPnPEvent(&v10, 0LL);
        ndisShallowCopyNetPnPEvent(&v10, (const struct _NET_PNP_EVENT_NOTIFICATION *)v3);
        v4 = ndisPnPNotifyAllTransports(Miniport, &v10);
      }
    }
    else
    {
      FilterDriver = v1->FilterDriver;
      if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion > 6u
        || FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == 6
        && FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion >= 0x32u )
      {
        ndisBindRequest((ULONG_PTR)v1, &v1->Miniport->BindEngine, &v1->Bind->BindState, v3);
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x34u,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      (char)Miniport,
      v1);
  *(_DWORD *)Parameter = v4;
}
