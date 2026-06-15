/*
 * XREFs of ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18012E1A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_l @ 0x1801262E8 (WPP_SF_l.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1801314CC (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::OnNotify(
        CMonitor **this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_l(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x5Cu,
      (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
      a2->bMuted);
  }
  CMonitor::OnMuteStateChanged(this[25], a2->bMuted);
  return 0LL;
}
