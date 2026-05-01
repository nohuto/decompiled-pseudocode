/*
 * XREFs of ?Monitor@TaskViewFrame@@UEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180787390
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@@Z @ 0x1801B9F9C (--0-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@.c)
 */

_QWORD *__fastcall TaskViewFrame::Monitor(__int64 a1, _QWORD *a2)
{
  wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>(
    a2,
    *(_QWORD *)(a1 + 16));
  return a2;
}
