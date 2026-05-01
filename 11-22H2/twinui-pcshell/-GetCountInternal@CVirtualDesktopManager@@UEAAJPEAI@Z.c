/*
 * XREFs of ?GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x1806018B0
 * Callers:
 *     ?GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x180601810 (-GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCountInternal(CVirtualDesktopManager *this, unsigned int *a2)
{
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  return 0LL;
}
