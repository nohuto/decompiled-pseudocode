/*
 * XREFs of ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x1800E7A90
 * Callers:
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800E6E48 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801A8F20 (-OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801AA180 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ToCompositionInputType(int a1)
{
  __int64 result; // rax

  if ( (a1 & 0x1000028) != 0 )
    return 3LL;
  if ( (a1 & 0x10) != 0 )
    return 4LL;
  if ( (a1 & 2) != 0 )
    return 1LL;
  result = 0LL;
  if ( (a1 & 4) != 0 )
    return 2LL;
  return result;
}
