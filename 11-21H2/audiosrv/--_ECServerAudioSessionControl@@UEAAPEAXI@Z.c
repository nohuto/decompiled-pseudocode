/*
 * XREFs of ??_ECServerAudioSessionControl@@UEAAPEAXI@Z @ 0x180027250
 * Callers:
 *     ??_ECServerAudioSessionControl@@W7EAAPEAXI@Z @ 0x18006ADA0 (--_ECServerAudioSessionControl@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

CServerAudioSessionControl *__fastcall CServerAudioSessionControl::`vector deleting destructor'(
        CServerAudioSessionControl *this,
        char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x58uLL);
  return this;
}
