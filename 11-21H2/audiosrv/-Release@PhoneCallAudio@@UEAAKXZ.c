/*
 * XREFs of ?Release@PhoneCallAudio@@UEAAKXZ @ 0x18005C1D0
 * Callers:
 *     ?Release@PhoneCallAudio@@W7EAAKXZ @ 0x18006BE00 (-Release@PhoneCallAudio@@W7EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBA@EAAKXZ @ 0x18006BE20 (-Release@PhoneCallAudio@@WBA@EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBI@EAAKXZ @ 0x18006BE40 (-Release@PhoneCallAudio@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall PhoneCallAudio::Release(PhoneCallAudio *this)
{
  return CUnknown::Release((PhoneCallAudio *)((char *)this + 24));
}
