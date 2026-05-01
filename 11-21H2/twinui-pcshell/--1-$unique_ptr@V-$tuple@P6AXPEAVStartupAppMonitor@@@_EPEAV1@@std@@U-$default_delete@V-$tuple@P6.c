/*
 * XREFs of ??1?$unique_ptr@V?$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@U?$default_delete@V?$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@@2@@std@@QEAA@XZ @ 0x18057EF00
 * Callers:
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$88 @ 0x180580B67 (_StartupAppMonitor--StartMonitor_--_1_--dtor$88.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall __1__unique_ptr_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std__U__default_delete_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std___2__std__QEAA_XZ(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
