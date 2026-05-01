/*
 * XREFs of ?Release@VirtualDesktopPerMonitorCollection@@UEAAKXZ @ 0x1800EE2A0
 * Callers:
 *     ?Release@VirtualDesktopPerMonitorCollection@@W7EAAKXZ @ 0x180206DA0 (-Release@VirtualDesktopPerMonitorCollection@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopPerMonitorCollection@@WBA@EAAKXZ @ 0x180206DC0 (-Release@VirtualDesktopPerMonitorCollection@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopPerMonitorCollection@@WBI@EAAKXZ @ 0x180206DE0 (-Release@VirtualDesktopPerMonitorCollection@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopPerMonitorCollection@@WCA@EAAKXZ @ 0x180206E00 (-Release@VirtualDesktopPerMonitorCollection@@WCA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800EEF40 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopPerMonitorCollection::Release(VirtualDesktopPerMonitorCollection *this)
{
  signed __int64 v1; // rax
  VirtualDesktopPerMonitorCollection *v2; // r11
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 9);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 9, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_5;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_5:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(VirtualDesktopPerMonitorCollection *, __int64))(*(_QWORD *)v2 + 88LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
