/*
 * XREFs of ??_ECDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAAPEAXI@Z @ 0x1800BA650
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800BA5B0 (--1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ.c)
 */

CDisplaySecondaryOnlyToDuplicateAnimatedVisual *__fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::`vector deleting destructor'(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this,
        char a2)
{
  CDisplaySecondaryOnlyToDuplicateAnimatedVisual::~CDisplaySecondaryOnlyToDuplicateAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDisplaySecondaryOnlyToDuplicateAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
