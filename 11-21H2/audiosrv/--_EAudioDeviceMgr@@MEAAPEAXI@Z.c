/*
 * XREFs of ??_EAudioDeviceMgr@@MEAAPEAXI@Z @ 0x18015C380
 * Callers:
 *     ??_EAudioDeviceMgr@@OBA@EAAPEAXI@Z @ 0x18006C380 (--_EAudioDeviceMgr@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1AudioDeviceMgr@@MEAA@XZ @ 0x18015C2E0 (--1AudioDeviceMgr@@MEAA@XZ.c)
 */

AudioDeviceMgr *__fastcall AudioDeviceMgr::`vector deleting destructor'(AudioDeviceMgr *this, char a2)
{
  AudioDeviceMgr::~AudioDeviceMgr(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
