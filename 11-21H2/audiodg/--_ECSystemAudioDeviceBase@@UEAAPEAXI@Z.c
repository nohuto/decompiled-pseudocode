/*
 * XREFs of ??_ECSystemAudioDeviceBase@@UEAAPEAXI@Z @ 0x140055390
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140008408 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CSystemAudioDeviceBase *__fastcall CSystemAudioDeviceBase::`vector deleting destructor'(
        CSystemAudioDeviceBase *this,
        char a2)
{
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
