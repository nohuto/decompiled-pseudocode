/*
 * XREFs of HalPutScatterGatherList @ 0x1402305F0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutScatterGatherListV2 @ 0x140230618 (HalPutScatterGatherListV2.c)
 *     HalPutScatterGatherListV3 @ 0x140511A58 (HalPutScatterGatherListV3.c)
 */

void __stdcall HalPutScatterGatherList(
        PADAPTER_OBJECT DmaAdapter,
        PSCATTER_GATHER_LIST ScatterGather,
        BOOLEAN WriteToDevice)
{
  if ( *(_DWORD *)(&DmaAdapter[9].Size + 1) == 2 )
    HalPutScatterGatherListV2(DmaAdapter, ScatterGather);
  else
    HalPutScatterGatherListV3(DmaAdapter);
}
