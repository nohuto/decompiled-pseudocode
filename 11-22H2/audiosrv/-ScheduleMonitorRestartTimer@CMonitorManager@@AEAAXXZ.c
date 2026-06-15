/*
 * XREFs of ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18012EF80
 * Callers:
 *     ?OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18012E050 (-OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_qd @ 0x1800E40B4 (WPP_SF_qd.c)
 */

void __fastcall CMonitorManager::ScheduleMonitorRestartTimer(CMonitorManager *this)
{
  CAudioSessionManager *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 256);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 39) && *((_DWORD *)this + 14) == 1 )
  {
    if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v2 + 7) & 0x800000) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v2 + 2), 0x33u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
      v2 = WPP_GLOBAL_Control;
    }
    v3 = *((_QWORD *)this + 38);
    v4 = *((_QWORD *)this + 40);
    v5 = -10000LL * *(unsigned int *)(v4 + 4 * v3);
    pftDueTime.dwLowDateTime = -10000 * *(_DWORD *)(v4 + 4 * v3);
    pftDueTime.dwHighDateTime = HIDWORD(v5);
    if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v2 + 7) & 0x800000) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      v7 = *(_DWORD *)(v4 + 4 * v3);
      WPP_SF_qd(*((_QWORD *)v2 + 2), 0x34u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, this, v7);
    }
    SetThreadpoolTimer(*((PTP_TIMER *)this + 37), &pftDueTime, 0, 0);
    v6 = *((_QWORD *)this + 38);
    if ( v6 < *((_QWORD *)this + 39) - 1LL )
      *((_QWORD *)this + 38) = v6 + 1;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
