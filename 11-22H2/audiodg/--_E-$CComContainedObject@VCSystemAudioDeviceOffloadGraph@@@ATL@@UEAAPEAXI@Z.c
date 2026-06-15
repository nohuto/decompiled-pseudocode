/*
 * XREFs of ??_E?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x14005ACA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14005AB50 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 */

CSystemAudioDeviceOffloadGraph *__fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vector deleting destructor'(
        CSystemAudioDeviceOffloadGraph *Block,
        char a2)
{
  CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
