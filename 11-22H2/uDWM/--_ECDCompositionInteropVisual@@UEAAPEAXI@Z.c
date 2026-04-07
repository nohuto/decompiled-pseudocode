/*
 * XREFs of ??_ECDCompositionInteropVisual@@UEAAPEAXI@Z @ 0x1800B3950
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompositionInteropVisual@@UEAA@XZ @ 0x180051E3C (--1CDCompositionInteropVisual@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

CDCompositionInteropVisual *__fastcall CDCompositionInteropVisual::`vector deleting destructor'(
        CDCompositionInteropVisual *this,
        char a2)
{
  CDCompositionInteropVisual::~CDCompositionInteropVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDCompositionInteropVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
