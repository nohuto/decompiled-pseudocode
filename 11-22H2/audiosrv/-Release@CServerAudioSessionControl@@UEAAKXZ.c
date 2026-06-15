/*
 * XREFs of ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180044E80
 * Callers:
 *     ?Release@CServerAudioSessionControl@@W7EAAKXZ @ 0x180076640 (-Release@CServerAudioSessionControl@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CServerAudioSessionControl::Release(CServerAudioSessionControl *this)
{
  return CUnknown::Release((CServerAudioSessionControl *)((char *)this + 8));
}
