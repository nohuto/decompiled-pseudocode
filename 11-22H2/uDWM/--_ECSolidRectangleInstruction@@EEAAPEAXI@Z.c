/*
 * XREFs of ??_ECSolidRectangleInstruction@@EEAAPEAXI@Z @ 0x1800570E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CSolidRectangleInstruction *__fastcall CSolidRectangleInstruction::`vector deleting destructor'(
        CSolidRectangleInstruction *this,
        char a2)
{
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x30uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CSolidRectangleInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
