/*
 * XREFs of ??_ECMMNotificationDelegator@AudioEffectsWatcher@@UEAAPEAXI@Z @ 0x1800D3010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CMMNotificationDelegator@AudioEffectsWatcher@@UEAA@XZ @ 0x1800D2CF0 (--1CMMNotificationDelegator@AudioEffectsWatcher@@UEAA@XZ.c)
 */

AudioEffectsWatcher::CMMNotificationDelegator *__fastcall AudioEffectsWatcher::CMMNotificationDelegator::`vector deleting destructor'(
        AudioEffectsWatcher::CMMNotificationDelegator *this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  AudioEffectsWatcher::CMMNotificationDelegator::~CMMNotificationDelegator(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
