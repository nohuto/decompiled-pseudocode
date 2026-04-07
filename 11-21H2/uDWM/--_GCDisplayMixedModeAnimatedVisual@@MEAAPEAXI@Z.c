/*
 * XREFs of ??_GCDisplayMixedModeAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B8710
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDisplayMixedModeAnimatedVisual@@MEAA@XZ @ 0x1800B85C4 (--1CDisplayMixedModeAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayMixedModeAnimatedVisual *__fastcall CDisplayMixedModeAnimatedVisual::`scalar deleting destructor'(
        CDisplayMixedModeAnimatedVisual *this,
        char a2)
{
  CDisplayMixedModeAnimatedVisual::~CDisplayMixedModeAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDisplayMixedModeAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
