/*
 * XREFs of ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x1400575D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x1400036B8 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CSystemAudioDeviceShared *__fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::`vector deleting destructor'(
        CSystemAudioDeviceShared *Block,
        char a2)
{
  CSystemAudioDeviceShared::~CSystemAudioDeviceShared(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
