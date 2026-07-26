/*
 * XREFs of ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C002A158
 * Callers:
 *     ?ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0029C20 (-ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z @ 0x1C0029D00 (-ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034254 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0069DE8 (-ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCompareProcNumInit @ 0x1C0163A30 (ndisCompareProcNumInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCompareProcNum(struct _PROCESSOR_NUMBER a1, struct _PROCESSOR_NUMBER a2)
{
  if ( a1.Group > a2.Group )
    return 1LL;
  if ( a1.Group < a2.Group || a1.Number < a2.Number )
    return 0xFFFFFFFFLL;
  return a1.Number > a2.Number;
}
