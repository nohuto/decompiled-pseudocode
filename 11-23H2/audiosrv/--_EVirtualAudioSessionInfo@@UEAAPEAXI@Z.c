/*
 * XREFs of ??_EVirtualAudioSessionInfo@@UEAAPEAXI@Z @ 0x180126790
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualAudioSessionInfo@@UEAA@XZ @ 0x180126578 (--1VirtualAudioSessionInfo@@UEAA@XZ.c)
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
