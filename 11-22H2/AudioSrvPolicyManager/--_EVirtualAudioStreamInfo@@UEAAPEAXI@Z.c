/*
 * XREFs of ??_EVirtualAudioStreamInfo@@UEAAPEAXI@Z @ 0x18001C570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualAudioStreamInfo@@UEAA@XZ @ 0x18001C29C (--1VirtualAudioStreamInfo@@UEAA@XZ.c)
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
