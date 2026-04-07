/*
 * XREFs of ??_GCDisplaySecondaryOnlyAnimatedVisual@@MEAAPEAXI@Z @ 0x18005A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ @ 0x18005A84C (--1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CDisplaySecondaryOnlyAnimatedVisual *__fastcall CDisplaySecondaryOnlyAnimatedVisual::`scalar deleting destructor'(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        char a2)
{
  CDisplaySecondaryOnlyAnimatedVisual::~CDisplaySecondaryOnlyAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDisplaySecondaryOnlyAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
