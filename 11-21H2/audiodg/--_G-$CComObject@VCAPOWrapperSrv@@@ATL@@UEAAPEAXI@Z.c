/*
 * XREFs of ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x140017E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x1400173E0 (--1-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CAPOWrapperSrv *__fastcall ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor'(
        CAPOWrapperSrv *Block,
        char a2)
{
  ATL::CComObject<CAPOWrapperSrv>::~CComObject<CAPOWrapperSrv>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
