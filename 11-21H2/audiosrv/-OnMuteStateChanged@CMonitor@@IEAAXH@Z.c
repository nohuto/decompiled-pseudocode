/*
 * XREFs of ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1801220F0
 * Callers:
 *     ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18011DAA0 (-OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180123644 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180123F4C (-Stop@CMonitor@@QEAAXXZ.c)
 *     WPP_SF_ldl @ 0x180124C58 (WPP_SF_ldl.c)
 */

void __fastcall CMonitor::OnMuteStateChanged(CMonitor *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  CEndpointStoreCache *v5; // rcx
  int v6; // eax

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ldl(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      a2,
      a3,
      (unsigned int)a2,
      *((_DWORD *)this + 14),
      *((unsigned __int8 *)this + 68));
    v5 = WPP_GLOBAL_Control;
  }
  if ( *((_BYTE *)this + 68) )
  {
    v6 = *((_DWORD *)this + 14);
    if ( v3 )
    {
      if ( v6 == 3 )
      {
        if ( v5 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v5 + 7) & 0x800000) != 0
          && *((_BYTE *)v5 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v5 + 2), 0x32u, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids);
        }
        CMonitor::Stop(this);
      }
    }
    else if ( ((v6 - 2) & 0xFFFFFFFD) == 0 )
    {
      if ( v5 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v5 + 7) & 0x800000) != 0
        && *((_BYTE *)v5 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v5 + 2), 0x33u, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids);
      }
      CMonitor::Start(this);
    }
  }
}
