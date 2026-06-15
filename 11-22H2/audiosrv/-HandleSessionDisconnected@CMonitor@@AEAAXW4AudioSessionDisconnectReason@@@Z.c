/*
 * XREFs of ?HandleSessionDisconnected@CMonitor@@AEAAXW4AudioSessionDisconnectReason@@@Z @ 0x180130194
 * Callers:
 *     ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18012FF60 (-DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x1801321C8 (-Stop@CMonitor@@QEAAXXZ.c)
 */

void __fastcall CMonitor::HandleSessionDisconnected(CMonitor *this, enum AudioSessionDisconnectReason a2)
{
  CAudioSessionManager *v3; // rcx
  bool v4; // zf

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids);
      v3 = WPP_GLOBAL_Control;
    }
    if ( v3 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v3 + 7) & 0x800000) != 0
      && *((_BYTE *)v3 + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)v3 + 2), 0x32u, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids);
    }
  }
  v4 = *((_DWORD *)this + 14) == 3;
  *((_BYTE *)this + 60) = 1;
  if ( v4 )
    CMonitor::Stop(this);
  CMonitor::Terminate(this, 1, 0LL);
}
