/*
 * XREFs of ??_ECSystemAudioDeviceBase@@UEAAPEAXI@Z @ 0x140057380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x1400570B0 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
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
