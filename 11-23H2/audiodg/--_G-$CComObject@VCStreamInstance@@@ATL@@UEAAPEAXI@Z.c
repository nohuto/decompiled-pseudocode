/*
 * XREFs of ??_G?$CComObject@VCStreamInstance@@@ATL@@UEAAPEAXI@Z @ 0x140002B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x1400044B4 (--1-$CComObject@VCStreamInstance@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CStreamInstance *__fastcall ATL::CComObject<CStreamInstance>::`scalar deleting destructor'(
        CStreamInstance *Block,
        char a2)
{
  ATL::CComObject<CStreamInstance>::~CComObject<CStreamInstance>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
