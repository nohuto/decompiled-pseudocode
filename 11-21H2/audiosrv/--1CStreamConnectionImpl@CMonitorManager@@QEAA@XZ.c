/*
 * XREFs of ??1CStreamConnectionImpl@CMonitorManager@@QEAA@XZ @ 0x1801195FC
 * Callers:
 *     ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x180119A34 (--_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011E8A0 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::CStreamConnectionImpl::~CStreamConnectionImpl(
        CMonitorManager::CStreamConnectionImpl *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CMonitorManager::CStreamConnectionImpl::`vftable';
  CMonitorManager::RemoveMonitor(
    *((CMonitorManager **)this + 3),
    *((const struct CMonitorManager::CaptureMonitor *const *)this + 4),
    1);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
