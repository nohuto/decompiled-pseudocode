/*
 * XREFs of ??1CMonitor@@IEAA@XZ @ 0x18012FD10
 * Callers:
 *     ?Release@CMonitor@@UEAAKXZ @ 0x180131BB0 (-Release@CMonitor@@UEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800E42B8 (WPP_SF_qq.c)
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x18012E880 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
 */

void __fastcall CMonitor::~CMonitor(CMonitor *this)
{
  CAudioSessionManager *v2; // rcx
  CMonitor::CMonitorNotification *v3; // rcx
  CMonitor::CMonitorNotification *v4; // rcx

  *(_QWORD *)this = &CMonitor::`vftable';
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
      this);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 22) )
  {
    if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v2 + 7) & 0x800000) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)v2 + 2), 0x18u, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids);
    }
    CloseThreadpoolWork(*((PTP_WORK *)this + 22));
    *((_QWORD *)this + 22) = 0LL;
  }
  v3 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 20);
  if ( v3 )
    CMonitor::CMonitorNotification::Release(v3);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 19);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 18);
  CoTaskMemFree(*((LPVOID *)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  v4 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 16);
  if ( v4 )
    CMonitor::CMonitorNotification::Release(v4);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 13);
  CoTaskMemFree(*((LPVOID *)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 11);
  CoTaskMemFree(*((LPVOID *)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
