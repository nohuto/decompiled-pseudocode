/*
 * XREFs of ??1CEvent@ATL@@QEAA@XZ @ 0x18012BB50
 * Callers:
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$0 @ 0x18012B9E4 (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CEvent::~CEvent(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
