/*
 * XREFs of ??_GAudioEffectsWatcher@@UEAAPEAXI@Z @ 0x1800D2FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800D2BC0 (--1AudioEffectsWatcher@@UEAA@XZ.c)
 */

AudioEffectsWatcher *__fastcall AudioEffectsWatcher::`scalar deleting destructor'(AudioEffectsWatcher *this, char a2)
{
  AudioEffectsWatcher::~AudioEffectsWatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
