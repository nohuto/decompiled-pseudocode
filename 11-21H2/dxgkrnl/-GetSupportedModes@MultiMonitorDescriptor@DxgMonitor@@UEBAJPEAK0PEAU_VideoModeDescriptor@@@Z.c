/*
 * XREFs of ?GetSupportedModes@MultiMonitorDescriptor@DxgMonitor@@UEBAJPEAK0PEAU_VideoModeDescriptor@@@Z @ 0x1C006C190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetSupportedModes(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _VideoModeDescriptor *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, struct _VideoModeDescriptor *))(**((_QWORD **)this + 2) + 192LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
}
