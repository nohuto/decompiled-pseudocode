/*
 * XREFs of NdisGetRssProcessorInformation @ 0x1C0029270
 * Callers:
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0028FD8 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0063540 (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 * Callees:
 *     ?ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0029330 (-ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z @ 0x1C00293D4 (-ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z.c)
 *     ?ndisGetDefaultNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006EEF0 (-ndisGetDefaultNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisGetRssProcessorInformation(
        NDIS_HANDLE NdisHandle,
        PNDIS_RSS_PROCESSOR_INFO RssProcessorInfo,
        PSIZE_T Size)
{
  char v3; // al
  NDIS_STATUS v4; // edi
  NDIS_HANDLE v7; // rbx
  ULONG_PTR v8; // rbp
  NDIS_STATUS result; // eax
  ULONG DefaultNumRssProcessors; // eax

  v3 = *(_BYTE *)NdisHandle;
  v4 = 0;
  v7 = NdisHandle;
  v8 = 0LL;
  if ( *(_BYTE *)NdisHandle != 17 )
  {
    if ( v3 == 18 )
    {
      v7 = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
    }
    else
    {
      if ( v3 != 5 )
      {
        v4 = -1073741811;
        goto LABEL_4;
      }
      v7 = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 4);
    }
  }
  v8 = 8LL * ndisCalculateRssProcessorCount((struct _NDIS_MINIPORT_BLOCK *)v7) + 40;
  if ( *Size >= v8 )
  {
    RssProcessorInfo->Header = (NDIS_OBJECT_HEADER)2622129;
    RssProcessorInfo->PreferredNumaNode = *((_WORD *)v7 + 2196);
    RssProcessorInfo->RssBaseProcessor = (PROCESSOR_NUMBER)*((_DWORD *)v7 + 1095);
    RssProcessorInfo[1].Header = (NDIS_OBJECT_HEADER)*((_DWORD *)v7 + 1096);
    RssProcessorInfo[1].Flags = *((_DWORD *)v7 + 1097);
    DefaultNumRssProcessors = *((_DWORD *)v7 + 1094);
    if ( !DefaultNumRssProcessors )
      DefaultNumRssProcessors = ndisGetDefaultNumRssProcessors((struct _NDIS_MINIPORT_BLOCK *)v7);
    RssProcessorInfo->MaxNumRssProcessors = DefaultNumRssProcessors;
    ndisPopulateRssProcessorSet((struct _NDIS_MINIPORT_BLOCK *)v7, RssProcessorInfo);
  }
  else
  {
    v4 = -1073676266;
  }
LABEL_4:
  result = v4;
  *Size = v8;
  return result;
}
