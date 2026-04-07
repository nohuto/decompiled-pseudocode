/*
 * XREFs of ??_GCDisplayBlackCurtainAnimatedVisual@@MEAAPEAXI@Z @ 0x1800BA190
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ @ 0x1800BA10C (--1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayBlackCurtainAnimatedVisual *__fastcall CDisplayBlackCurtainAnimatedVisual::`scalar deleting destructor'(
        CDisplayBlackCurtainAnimatedVisual *this,
        char a2)
{
  CDisplayBlackCurtainAnimatedVisual::~CDisplayBlackCurtainAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDisplayBlackCurtainAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
