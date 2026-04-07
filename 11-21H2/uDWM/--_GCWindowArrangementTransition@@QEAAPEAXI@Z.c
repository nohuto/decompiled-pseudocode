/*
 * XREFs of ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x180101E28
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18005B7E0 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180101700 (--1CWindowList@@UEAA@XZ.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180104EDC (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

CWindowArrangementTransition *__fastcall CWindowArrangementTransition::`scalar deleting destructor'(
        CWindowArrangementTransition *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v2 )
    CBaseObject::Release(v2);
  (*(void (__fastcall **)(WPF::HeapBase *, CWindowArrangementTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
