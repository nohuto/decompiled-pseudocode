/*
 * XREFs of ??_EVirtualAudioStreamInfo@@UEAAPEAXI@Z @ 0x18001C380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualAudioStreamInfo@@UEAA@XZ @ 0x18001C0AC (--1VirtualAudioStreamInfo@@UEAA@XZ.c)
 */

VirtualAudioStreamInfo *__fastcall VirtualAudioStreamInfo::`vector deleting destructor'(
        VirtualAudioStreamInfo *this,
        char a2)
{
  VirtualAudioStreamInfo::~VirtualAudioStreamInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
