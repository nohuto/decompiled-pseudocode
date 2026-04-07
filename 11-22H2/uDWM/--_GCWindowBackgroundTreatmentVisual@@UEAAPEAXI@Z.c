/*
 * XREFs of ??_GCWindowBackgroundTreatmentVisual@@UEAAPEAXI@Z @ 0x180051DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompositionInteropVisual@@UEAA@XZ @ 0x180051E3C (--1CDCompositionInteropVisual@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CWindowBackgroundTreatmentVisual *__fastcall CWindowBackgroundTreatmentVisual::`scalar deleting destructor'(
        CWindowBackgroundTreatmentVisual *this,
        char a2)
{
  CDCompositionInteropVisual::~CDCompositionInteropVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x120uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CWindowBackgroundTreatmentVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
