/*
 * XREFs of ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x140003790
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400042B4 (--1-$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall ATL::CComObject<CProcessSubmix>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComObject<CProcessSubmix>::~CComObject<CProcessSubmix>();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
