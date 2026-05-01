/*
 * XREFs of ??1thread@std@@QEAA@XZ @ 0x18057F3F8
 * Callers:
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$2 @ 0x18021F3F6 (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::thread::~thread(std::thread *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *((_DWORD *)this + 2) )
  {
    _o_terminate(this, a2, a3, a4);
    __debugbreak();
  }
}
