/*
 * XREFs of ?AddRef@PhoneCallAudio@@UEAAKXZ @ 0x18004F090
 * Callers:
 *     ?AddRef@PhoneCallAudio@@W7EAAKXZ @ 0x180077530 (-AddRef@PhoneCallAudio@@W7EAAKXZ.c)
 *     ?AddRef@PhoneCallAudio@@WBA@EAAKXZ @ 0x180077550 (-AddRef@PhoneCallAudio@@WBA@EAAKXZ.c)
 *     ?AddRef@PhoneCallAudio@@WBI@EAAKXZ @ 0x180077570 (-AddRef@PhoneCallAudio@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::AddRef(PhoneCallAudio *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
