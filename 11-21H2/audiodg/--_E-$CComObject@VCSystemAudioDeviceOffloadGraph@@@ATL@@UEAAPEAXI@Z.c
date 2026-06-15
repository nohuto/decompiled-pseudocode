/*
 * XREFs of ??_E?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x140057D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x140057B38 (--1-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 */

CSystemAudioDeviceOffloadGraph *__fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vector deleting destructor'(
        CSystemAudioDeviceOffloadGraph *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceOffloadGraph>::~CComObject<CSystemAudioDeviceOffloadGraph>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
