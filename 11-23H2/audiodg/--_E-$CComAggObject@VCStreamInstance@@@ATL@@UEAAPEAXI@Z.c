/*
 * XREFs of ??_E?$CComAggObject@VCStreamInstance@@@ATL@@UEAAPEAXI@Z @ 0x14004B610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CComAggObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x14004B26C (--1-$CComAggObject@VCStreamInstance@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CStreamInstance>::`vector deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CStreamInstance>::~CComAggObject<CStreamInstance>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
