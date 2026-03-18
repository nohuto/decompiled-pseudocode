/*
 * XREFs of ?GetColorDataRaw@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C006BEF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetColorDataRaw(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_COLOR_DATA_RAW *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_COLOR_DATA_RAW *))(**((_QWORD **)this + 2) + 120LL))(
           *((_QWORD *)this + 2),
           a2);
}
