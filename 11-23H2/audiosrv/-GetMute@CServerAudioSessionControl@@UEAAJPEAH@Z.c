/*
 * XREFs of ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x1800E4640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetMute(CServerAudioSessionControl *this, int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 9) + 288LL))(*((_QWORD *)this + 9), a2);
}
