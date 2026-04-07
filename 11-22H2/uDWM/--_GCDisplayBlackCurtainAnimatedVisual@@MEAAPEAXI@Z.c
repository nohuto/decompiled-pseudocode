/*
 * XREFs of ??_GCDisplayBlackCurtainAnimatedVisual@@MEAAPEAXI@Z @ 0x1800BDAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ @ 0x1800BDA68 (--1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ.c)
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
