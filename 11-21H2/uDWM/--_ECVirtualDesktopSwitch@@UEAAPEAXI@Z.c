/*
 * XREFs of ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x1800D4D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800D49D0 (--1CVirtualDesktopSwitch@@UEAA@XZ.c)
 */

CVirtualDesktopSwitch *__fastcall CVirtualDesktopSwitch::`vector deleting destructor'(
        CVirtualDesktopSwitch *this,
        char a2)
{
  CVirtualDesktopSwitch::~CVirtualDesktopSwitch(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CVirtualDesktopSwitch *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
