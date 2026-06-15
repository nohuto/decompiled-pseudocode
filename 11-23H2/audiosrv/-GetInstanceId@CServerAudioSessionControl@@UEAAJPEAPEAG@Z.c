/*
 * XREFs of ?GetInstanceId@CServerAudioSessionControl@@UEAAJPEAPEAG@Z @ 0x180055AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetInstanceId(CServerAudioSessionControl *this, unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 9) + 88LL))(
           *((_QWORD *)this + 9),
           a2);
}
