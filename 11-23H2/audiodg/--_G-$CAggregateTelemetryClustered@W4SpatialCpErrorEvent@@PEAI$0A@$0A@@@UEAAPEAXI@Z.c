/*
 * XREFs of ??_G?$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14009B680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14009B490 (--1-$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

void *__fastcall CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
