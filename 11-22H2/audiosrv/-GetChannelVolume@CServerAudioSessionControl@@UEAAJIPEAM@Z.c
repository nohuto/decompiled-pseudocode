/*
 * XREFs of ?GetChannelVolume@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x1800E4490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800E3B38 (WPP_SF_Sd.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetChannelVolume(
        CServerAudioSessionControl *this,
        unsigned int a2,
        float *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x21u,
      (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
      0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 9) + 320LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
