/*
 * XREFs of ?GetCountInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAI@Z @ 0x180545670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCountInternal(
        CVirtualDesktopManager *this,
        HMONITOR a2,
        unsigned int *a3)
{
  *a3 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), a2);
  return 0LL;
}
