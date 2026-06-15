/*
 * XREFs of ??_EVirtualAudioSessionInfo@@UEAAPEAXI@Z @ 0x18001C530
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualAudioSessionInfo@@UEAA@XZ @ 0x18001C260 (--1VirtualAudioSessionInfo@@UEAA@XZ.c)
 */

VirtualAudioSessionInfo *__fastcall VirtualAudioSessionInfo::`vector deleting destructor'(
        VirtualAudioSessionInfo *this,
        char a2)
{
  VirtualAudioSessionInfo::~VirtualAudioSessionInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
