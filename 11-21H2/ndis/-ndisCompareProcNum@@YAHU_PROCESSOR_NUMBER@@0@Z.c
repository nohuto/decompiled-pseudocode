/*
 * XREFs of ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0032598
 * Callers:
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003232C (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0064B78 (-ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCompareProcNumInit @ 0x1C0155C40 (ndisCompareProcNumInit.c)
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
