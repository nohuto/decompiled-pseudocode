/*
 * XREFs of ??_GCCPAudioHistoryControl@@UEAAPEAXI@Z @ 0x1400948C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CCPAudioHistoryControl *__fastcall CCPAudioHistoryControl::`scalar deleting destructor'(
        CCPAudioHistoryControl *this,
        char a2)
{
  *(_QWORD *)this = &CCPAudioHistoryControl::`vftable';
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
