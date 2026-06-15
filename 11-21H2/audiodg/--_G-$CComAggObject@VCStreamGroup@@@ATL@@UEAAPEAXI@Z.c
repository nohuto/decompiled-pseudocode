/*
 * XREFs of ??_G?$CComAggObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140050BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140050ABC (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CStreamGroup>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CStreamGroup>::~CComAggObject<CStreamGroup>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
