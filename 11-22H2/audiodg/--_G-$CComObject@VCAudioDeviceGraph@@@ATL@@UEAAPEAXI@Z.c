/*
 * XREFs of ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x14004B690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14004B324 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 */

CAudioDeviceGraph *__fastcall ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor'(
        CAudioDeviceGraph *Block,
        char a2)
{
  ATL::CComObject<CAudioDeviceGraph>::~CComObject<CAudioDeviceGraph>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
