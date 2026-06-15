/*
 * XREFs of ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18012F5E8
 * Callers:
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x180006EE0 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005A578 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D1C4 (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18012F360 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1801322E4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::UninitializeSynchronously(CMonitorManager::CaptureMonitor *this)
{
  __int64 v2; // rbx
  int v3; // esi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  *(_QWORD *)(*((_QWORD *)this + 25) + 168LL) = 0LL;
  v2 = *((_QWORD *)this + 25);
  lpCriticalSection = (LPCRITICAL_SECTION)(v2 + 16);
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = *(_DWORD *)(v2 + 56);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 != 6 )
  {
    *(_QWORD *)(v2 + 168) = 0LL;
    CMonitor::Terminate((CMonitor *)v2, 0, 0LL);
  }
  (*(void (__fastcall **)(_QWORD, CMonitorManager::CaptureMonitor *))(**((_QWORD **)this + 5) + 32LL))(
    *((_QWORD *)this + 5),
    this);
  *((_BYTE *)this + 48) = 0;
}
