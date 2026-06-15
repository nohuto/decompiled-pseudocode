/*
 * XREFs of ??_E?$CComAggObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x140069140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400690CC (--1-$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CProcessSubmix>::`vector deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CProcessSubmix>::~CComAggObject<CProcessSubmix>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
