/*
 * XREFs of ?GetDisplayName@CServerAudioSessionControl@@UEAAJPEAPEAG@Z @ 0x180081A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetDisplayName(CServerAudioSessionControl *this, unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 9) + 128LL))(
           *((_QWORD *)this + 9),
           a2);
}
