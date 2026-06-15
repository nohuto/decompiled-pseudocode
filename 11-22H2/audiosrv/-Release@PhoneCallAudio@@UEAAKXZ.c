/*
 * XREFs of ?Release@PhoneCallAudio@@UEAAKXZ @ 0x180065F70
 * Callers:
 *     ?Release@PhoneCallAudio@@W7EAAKXZ @ 0x180077620 (-Release@PhoneCallAudio@@W7EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBA@EAAKXZ @ 0x180077640 (-Release@PhoneCallAudio@@WBA@EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBI@EAAKXZ @ 0x180077660 (-Release@PhoneCallAudio@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::Release(PhoneCallAudio *this)
{
  return CUnknown::Release((PhoneCallAudio *)((char *)this + 24));
}
