/*
 * XREFs of ??_GCBtAudioResourceManager@@UEAAPEAXI@Z @ 0x1800F5700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F54C0 (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 */

CBtAudioResourceManager *__fastcall CBtAudioResourceManager::`scalar deleting destructor'(
        CBtAudioResourceManager *this,
        char a2)
{
  *((_DWORD *)this + 57) = -1073741823;
  CBtAudioResourceManagerBase::~CBtAudioResourceManagerBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
