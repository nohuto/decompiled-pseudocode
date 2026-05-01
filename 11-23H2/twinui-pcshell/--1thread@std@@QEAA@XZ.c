/*
 * XREFs of ??1thread@std@@QEAA@XZ @ 0x1804DFAA0
 * Callers:
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::dtor$4 @ 0x1802B85E6 (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$2 @ 0x1802B978A (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::thread::~thread(std::thread *this)
{
  if ( *((_DWORD *)this + 2) )
  {
    _o_terminate();
    __debugbreak();
  }
}
