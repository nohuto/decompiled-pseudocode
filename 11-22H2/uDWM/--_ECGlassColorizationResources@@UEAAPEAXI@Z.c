/*
 * XREFs of ??_ECGlassColorizationResources@@UEAAPEAXI@Z @ 0x18001F420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

CGlassColorizationResources *__fastcall CGlassColorizationResources::`vector deleting destructor'(
        CGlassColorizationResources *this,
        char a2)
{
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CGlassColorizationResources *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
