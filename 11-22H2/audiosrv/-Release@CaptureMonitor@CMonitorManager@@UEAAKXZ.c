/*
 * XREFs of ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x18012E910
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x18012BD88 (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::Release(CMonitorManager::CaptureMonitor *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CMonitorManager::CaptureMonitor::~CaptureMonitor(this);
    operator delete(this);
  }
  return v2;
}
