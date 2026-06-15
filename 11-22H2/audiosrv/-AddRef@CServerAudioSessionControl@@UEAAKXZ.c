/*
 * XREFs of ?AddRef@CServerAudioSessionControl@@UEAAKXZ @ 0x18004CF60
 * Callers:
 *     ?AddRef@PersistedEndpointPolicyRule@@W7EAAKXZ @ 0x180076600 (-AddRef@PersistedEndpointPolicyRule@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::AddRef(CServerAudioSessionControl *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
