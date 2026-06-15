/*
 * XREFs of ?AddRef@PhoneCallAudio@@UEAAKXZ @ 0x18003C2E0
 * Callers:
 *     ?AddRef@PhoneCallAudio@@W7EAAKXZ @ 0x18006BD40 (-AddRef@PhoneCallAudio@@W7EAAKXZ.c)
 *     ?AddRef@PhoneCallAudio@@WBA@EAAKXZ @ 0x18006BD60 (-AddRef@PhoneCallAudio@@WBA@EAAKXZ.c)
 *     ?AddRef@PhoneCallAudio@@WBI@EAAKXZ @ 0x18006BD80 (-AddRef@PhoneCallAudio@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::AddRef(PhoneCallAudio *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
