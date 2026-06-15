/*
 * XREFs of ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x18004BAA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::OnProcessTerminated(CAudioSession *this, struct IAudioProcess *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      62LL,
      &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      (char *)this - 8);
  }
  CAudioSession::PostStateCheckExpirationWork((CAudioSession *)((char *)this - 8));
}
