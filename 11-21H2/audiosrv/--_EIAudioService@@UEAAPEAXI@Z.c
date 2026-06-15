/*
 * XREFs of ??_EIAudioService@@UEAAPEAXI@Z @ 0x1800C2F80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

IAudioService *__fastcall IAudioService::`vector deleting destructor'(IAudioService *this, char a2)
{
  *(_QWORD *)this = &IAudioService::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
