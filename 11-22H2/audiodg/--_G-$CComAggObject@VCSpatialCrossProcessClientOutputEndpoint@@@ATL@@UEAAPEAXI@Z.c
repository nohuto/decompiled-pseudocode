/*
 * XREFs of ??_G?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140099930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140099484 (--1-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::~CComAggObject<CSpatialCrossProcessClientOutputEndpoint>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
