/*
 * XREFs of ??_G?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x14004B5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14004B220 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CAudioDeviceGraph>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CAudioDeviceGraph>::~CComAggObject<CAudioDeviceGraph>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
