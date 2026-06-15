/*
 * XREFs of ?GetChannelsPeakValues@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x1800E4520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetChannelsPeakValues(
        CServerAudioSessionControl *this,
        __int64 a2,
        float *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, float *))(**((_QWORD **)this + 9) + 360LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
