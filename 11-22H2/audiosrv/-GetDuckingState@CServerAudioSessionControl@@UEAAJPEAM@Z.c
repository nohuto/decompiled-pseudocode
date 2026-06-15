/*
 * XREFs of ?GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x1800E4550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetDuckingState(struct _RTL_CRITICAL_SECTION **this, float *a2)
{
  return CAudioSession::GetDuckingState(this[9], a2);
}
