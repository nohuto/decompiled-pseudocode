/*
 * XREFs of ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x180131784
 * Callers:
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x18012E364 (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1800E3DE8 (WPP_SF_dd.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180131D98 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180132178 (-Stop@CMonitor@@QEAAXXZ.c)
 */

void __fastcall CMonitor::OnPowerStateChanged(CMonitor *this, unsigned __int8 a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids, a2);
  }
  if ( *((_BYTE *)this + 61) )
  {
    if ( (a2 & 0xFD) != 0 )
    {
      if ( ((*((_DWORD *)this + 14) - 2) & 0xFFFFFFFD) == 0 )
        CMonitor::Start(this);
    }
    else if ( *((_DWORD *)this + 14) == 3 )
    {
      CMonitor::Stop(this);
    }
  }
}
