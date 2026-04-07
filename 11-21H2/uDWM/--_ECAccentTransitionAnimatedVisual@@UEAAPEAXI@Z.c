/*
 * XREFs of ??_ECAccentTransitionAnimatedVisual@@UEAAPEAXI@Z @ 0x180099498
 * Callers:
 *     ??_ECAccentTransitionAnimatedVisual@@W7EAAPEAXI@Z @ 0x180063780 (--_ECAccentTransitionAnimatedVisual@@W7EAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAccentTransitionAnimatedVisual@@UEAA@XZ @ 0x180099454 (--1CAccentTransitionAnimatedVisual@@UEAA@XZ.c)
 */

CAccentTransitionAnimatedVisual *__fastcall CAccentTransitionAnimatedVisual::`vector deleting destructor'(
        CAccentTransitionAnimatedVisual *this,
        char a2)
{
  CAccentTransitionAnimatedVisual::~CAccentTransitionAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAccentTransitionAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
