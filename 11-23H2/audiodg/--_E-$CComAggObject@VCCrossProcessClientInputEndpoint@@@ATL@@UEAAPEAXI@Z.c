/*
 * XREFs of ??_E?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400902F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x14008FE3C (--1-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CCrossProcessClientInputEndpoint>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  ATL::CComAggObject<CCrossProcessClientInputEndpoint>::~CComAggObject<CCrossProcessClientInputEndpoint>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
