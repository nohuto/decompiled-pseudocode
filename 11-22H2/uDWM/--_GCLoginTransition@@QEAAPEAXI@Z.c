/*
 * XREFs of ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180108F28
 * Callers:
 *     sub_180082BF9 @ 0x180082BF9 (sub_180082BF9.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1801089DC (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180041888 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CLoginTransition *__fastcall CLoginTransition::`scalar deleting destructor'(CLoginTransition *this)
{
  *(_QWORD *)this = &CLoginTransition::`vftable';
  CLoginTransition::StopAnimation(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CLoginTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
